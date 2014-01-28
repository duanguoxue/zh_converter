#include "zh_convert.hpp"
#include <stdio.h>
#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/time.h>
#include <map>
#include <vector>
using namespace std;

/**
 * gperf hash vs stl map 
 * comparision: 
 * data type: key-value "璦 瑷"
 * > hash count:3172 using time(us): 206
 * > map count:3172 using time(us): 2277
 */

int LoadTestFile(const string& sPath){
    struct stat finf;
    int ret = 0;
    if ((ret = stat(sPath.c_str(), &finf)) == -1){
        return -1;
    }
    int fd = open(sPath.c_str(),O_RDONLY);
    char *buf =new char[finf.st_size+1];
    memset(buf, 0x00, finf.st_size+1);
    read(fd, buf, finf.st_size);
    close(fd);

    vector<string> testdata;
    map<string, string> zh_dataset;
    Perfect_Hash perf;
    timeval beg,end;
    char *strdict = buf;
    while( strdict != NULL ) {
        char *strbegin = strsep(&strdict, "\n");
        if ( strbegin == NULL )
            break;
        char *strpos = strbegin;
        char *hanzi = strsep(&strpos, " ");
        if (hanzi != NULL && strpos != NULL) {
            zh_dataset[ hanzi ] = strpos;
            //printf("%s %s\n", hanzi, strpos);
            testdata.push_back(hanzi);
        }
    }
    int testsize = testdata.size();
    gettimeofday(&beg,NULL);
    for(int i =0;i<testsize;++i ){
        const KeyValue *p = perf.in_word_set(testdata[i].c_str() ,testdata[i].size());
        if (p!= NULL){
            printf("%s %s\n", testdata[i].c_str(), p->value);
        }
    }
    gettimeofday(&end,NULL);
    printf("hash count:%d using time(us): %ld\r\n",testsize, (end.tv_sec - beg.tv_sec)*1000000 + (end.tv_usec-beg.tv_usec));

    gettimeofday(&beg,NULL);
    for(int i =0;i<testsize;++i ){
        map<string,string>::iterator  it=zh_dataset.find(testdata[i]);
        if (it != zh_dataset.end()){
            //printf("%s %s\n", testdata[i].c_str(), it->second.c_str());
        }
    }
    gettimeofday(&end,NULL);
    printf("map count:%d using time(us): %ld\r\n",testsize, (end.tv_sec - beg.tv_sec)*1000000 + (end.tv_usec-beg.tv_usec));
    
    delete [] buf;
    return ret; 
}

int main(int argc, char* argv[]){
    LoadTestFile(argv[1]);
    return 0;
}
