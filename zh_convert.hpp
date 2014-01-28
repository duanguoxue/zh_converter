/* C++ code produced by gperf version 3.0.3 */
/* Command-line: gperf -CGD -K key -L C++ -t zh_convert.gperf  */
/* Computed positions: -k'1-3' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "zh_convert.gperf"

#include <string.h>
#line 4 "zh_convert.gperf"
struct KeyValue
{
    const char *key;   //第一个字段必须是const char*
    const char *value; //可以有更多的value值 
};

#define TOTAL_KEYWORDS 3172
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 3
#define MIN_HASH_VALUE 17
#define MAX_HASH_VALUE 14873
/* maximum key range = 14857, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct KeyValue *in_word_set (const char *str, unsigned int len);
};

inline unsigned int
Perfect_Hash::hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,  2261,  1184,
       7386,  7696,  1810,    13,  8031,    25,   155,  2595,  3854,  1383,
       6116,  3055,  4059,  7611,  5946,    68,  7831,  3995,  6956,  6261,
         75,  2258,  4067,  1395,   819,  3809,  8046,  6576,  7084,   224,
       2933,   339,  6839,   785,  2909,  6141,  4546,  7221,  2155,  1280,
        640,  3700,   299,   750,  5511,    95,  3934,  3487,  6184,     0,
       2820,  7609,    50,  3160,  2630,   855,   123,   300,    84,  3565,
       3898,   110,  2085,  6749,  2568,  3660,  2933,  1727,     4,  3305,
        225,  2669,  3489,   893,  2591,  2452,  3622,  6386,  6446,  3633,
       4936,  4035,    69,  5111,  1371,  1100,  2044,   509,  2255,  4416,
       2022,   689,  1755,   193,  1039,   179,  2415,  4821,  1473,  3085,
        905,  3102,  1500,   433,  1900,    50,  6331,  5431,   670,  3345,
       5551,   515,  3294,   345,  5671,  1629,  2489,  2424,   239,   425,
       2324,   585,  6824,   720,    15,    20,     5,    10,     0, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874,
      14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874, 14874
    };
  return len + asso_values[(unsigned char)str[2]+63] + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]+25];
}

static const struct KeyValue wordlist[] =
  {
#line 3151 "zh_convert.gperf"
    {"\350\263\207","资"},
#line 915 "zh_convert.gperf"
    {"\347\205\207","辉"},
#line 2581 "zh_convert.gperf"
    {"\345\205\207","凶"},
#line 2775 "zh_convert.gperf"
    {"\346\205\207","殷"},
#line 2716 "zh_convert.gperf"
    {"\347\207\277","耀"},
#line 1256 "zh_convert.gperf"
    {"\346\207\207","恳"},
#line 489 "zh_convert.gperf"
    {"\351\266\207","鸫"},
#line 2994 "zh_convert.gperf"
    {"\350\263\254","账"},
#line 3155 "zh_convert.gperf"
    {"\351\266\277","鹚"},
#line 2697 "zh_convert.gperf"
    {"\347\205\254","炀"},
#line 2011 "zh_convert.gperf"
    {"\345\266\207","岖"},
#line 1708 "zh_convert.gperf"
    {"\347\266\277","绵"},
#line 1149 "zh_convert.gperf"
    {"\346\266\207","泾"},
#line 829 "zh_convert.gperf"
    {"\351\207\254","焊"},
#line 2010 "zh_convert.gperf"
    {"\350\263\225","赇"},
#line 928 "zh_convert.gperf"
    {"\347\207\254","毁"},
#line 2944 "zh_convert.gperf"
    {"\351\221\277","凿"},
#line 300 "zh_convert.gperf"
    {"\347\226\207","畴"},
#line 34 "zh_convert.gperf"
    {"\351\274\207","鳌"},
#line 2436 "zh_convert.gperf"
    {"\351\226\277","阌"},
#line 1478 "zh_convert.gperf"
    {"\351\207\225","钌"},
#line 611 "zh_convert.gperf"
    {"\347\226\277","痱"},
#line 2027 "zh_convert.gperf"
    {"\350\274\207","辁"},
#line 906 "zh_convert.gperf"
    {"\351\257\207","鲩"},
#line 116 "zh_convert.gperf"
    {"\350\207\225","膘"},
#line 2192 "zh_convert.gperf"
    {"\347\266\254","绶"},
#line 2848 "zh_convert.gperf"
    {"\350\274\277","舆"},
#line 108 "zh_convert.gperf"
    {"\351\257\277","鳊"},
#line 2651 "zh_convert.gperf"
    {"\346\207\225","恹"},
#line 1081 "zh_convert.gperf"
    {"\346\274\277","浆"},
#line 849 "zh_convert.gperf"
    {"\350\263\200","贺"},
#line 1354 "zh_convert.gperf"
    {"\351\226\254","阆"},
#line 678 "zh_convert.gperf"
    {"\350\266\225","赶"},
#line 2084 "zh_convert.gperf"
    {"\346\257\277","毵"},
#line 1795 "zh_convert.gperf"
    {"\351\207\200","酿"},
#line 1095 "zh_convert.gperf"
    {"\345\226\254","乔"},
#line 2981 "zh_convert.gperf"
    {"\346\226\254","斩"},
#line 490 "zh_convert.gperf"
    {"\351\274\225","冬"},
#line 3158 "zh_convert.gperf"
    {"\346\274\254","渍"},
#line 1277 "zh_convert.gperf"
    {"\345\257\254","宽"},
#line 1993 "zh_convert.gperf"
    {"\350\274\225","轻"},
#line 1333 "zh_convert.gperf"
    {"\346\226\225","斓"},
#line 2008 "zh_convert.gperf"
    {"\346\257\254","球"},
#line 2854 "zh_convert.gperf"
    {"\350\210\207","与"},
#line 459 "zh_convert.gperf"
    {"\351\210\277","钿"},
#line 688 "zh_convert.gperf"
    {"\346\210\207","戆"},
#line 1221 "zh_convert.gperf"
    {"\346\277\254","浚"},
#line 1739 "zh_convert.gperf"
    {"\347\263\242","模"},
#line 1689 "zh_convert.gperf"
    {"\351\226\200","门"},
#line 2502 "zh_convert.gperf"
    {"\350\263\242","贤"},
#line 1999 "zh_convert.gperf"
    {"\347\205\242","茕"},
#line 2160 "zh_convert.gperf"
    {"\346\277\225","湿"},
#line 319 "zh_convert.gperf"
    {"\350\272\225","蹰"},
#line 1855 "zh_convert.gperf"
    {"\350\263\240","赔"},
#line 804 "zh_convert.gperf"
    {"\351\257\200","鲧"},
#line 1113 "zh_convert.gperf"
    {"\347\257\200","节"},
#line 170 "zh_convert.gperf"
    {"\345\257\200","采"},
#line 496 "zh_convert.gperf"
    {"\345\205\240","兜"},
#line 1820 "zh_convert.gperf"
    {"\351\210\225","钮"},
#line 927 "zh_convert.gperf"
    {"\346\257\200","毁"},
#line 1595 "zh_convert.gperf"
    {"\350\207\240","脔"},
#line 3168 "zh_convert.gperf"
    {"\347\263\211","粽"},
#line 1693 "zh_convert.gperf"
    {"\347\237\207","蒙"},
#line 302 "zh_convert.gperf"
    {"\347\266\242","绸"},
#line 2606 "zh_convert.gperf"
    {"\350\263\211","恤"},
#line 1643 "zh_convert.gperf"
    {"\350\237\207","蟆"},
#line 2532 "zh_convert.gperf"
    {"\351\237\277","响"},
#line 1459 "zh_convert.gperf"
    {"\347\205\211","炼"},
#line 1637 "zh_convert.gperf"
    {"\347\266\240","绿"},
#line 765 "zh_convert.gperf"
    {"\351\226\242","关"},
#line 532 "zh_convert.gperf"
    {"\347\207\211","炖"},
#line 1106 "zh_convert.gperf"
    {"\345\266\240","峤"},
#line 1451 "zh_convert.gperf"
    {"\350\207\211","脸"},
#line 2221 "zh_convert.gperf"
    {"\351\221\240","铄"},
#line 1835 "zh_convert.gperf"
    {"\351\207\271","钕"},
#line 41 "zh_convert.gperf"
    {"\351\210\200","钯"},
#line 1511 "zh_convert.gperf"
    {"\347\221\240","琉"},
#line 2792 "zh_convert.gperf"
    {"\346\207\211","应"},
#line 2140 "zh_convert.gperf"
    {"\350\221\240","参"},
#line 1784 "zh_convert.gperf"
    {"\351\257\242","鲵"},
#line 353 "zh_convert.gperf"
    {"\351\266\211","鹑"},
#line 2311 "zh_convert.gperf"
    {"\345\274\242","韬"},
#line 2587 "zh_convert.gperf"
    {"\347\266\211","绣"},
#line 827 "zh_convert.gperf"
    {"\346\274\242","汉"},
#line 219 "zh_convert.gperf"
    {"\350\237\254","蝉"},
#line 1455 "zh_convert.gperf"
    {"\346\210\200","恋"},
#line 1987 "zh_convert.gperf"
    {"\345\257\242","寝"},
#line 2549 "zh_convert.gperf"
    {"\347\257\240","筱"},
#line 1520 "zh_convert.gperf"
    {"\347\266\271","绺"},
#line 1726 "zh_convert.gperf"
    {"\347\221\211","珉"},
#line 103 "zh_convert.gperf"
    {"\351\226\211","闭"},
#line 2136 "zh_convert.gperf"
    {"\350\221\211","叶"},
#line 472 "zh_convert.gperf"
    {"\347\226\211","叠"},
#line 382 "zh_convert.gperf"
    {"\351\221\271","镩"},
#line 2380 "zh_convert.gperf"
    {"\351\274\211","鼍"},
#line 2655 "zh_convert.gperf"
    {"\351\226\271","阉"},
#line 2885 "zh_convert.gperf"
    {"\351\273\277","鼋"},
#line 2923 "zh_convert.gperf"
    {"\350\274\211","载"},
#line 1399 "zh_convert.gperf"
    {"\351\257\211","鲤"},
#line 3102 "zh_convert.gperf"
    {"\347\257\211","筑"},
#line 1667 "zh_convert.gperf"
    {"\346\273\277","满"},
#line 385 "zh_convert.gperf"
    {"\347\257\271","纂"},
#line 2735 "zh_convert.gperf"
    {"\346\257\211","医"},
#line 1736 "zh_convert.gperf"
    {"\351\263\264","鸣"},
#line 503 "zh_convert.gperf"
    {"\351\254\254","斗"},
#line 444 "zh_convert.gperf"
    {"\347\263\264","籴"},
#line 1746 "zh_convert.gperf"
    {"\350\241\207","脉"},
#line 1971 "zh_convert.gperf"
    {"\347\277\271","翘"},
#line 1329 "zh_convert.gperf"
    {"\350\263\264","赖"},
#line 531 "zh_convert.gperf"
    {"\350\272\211","趸"},
#line 1737 "zh_convert.gperf"
    {"\350\254\254","谬"},
#line 2514 "zh_convert.gperf"
    {"\345\263\264","岘"},
#line 1558 "zh_convert.gperf"
    {"\345\273\254","庐"},
#line 1233 "zh_convert.gperf"
    {"\346\254\254","咳"},
#line 877 "zh_convert.gperf"
    {"\346\273\254","沪"},
#line 676 "zh_convert.gperf"
    {"\346\241\277","杆"},
#line 938 "zh_convert.gperf"
    {"\347\207\264","烩"},
#line 3001 "zh_convert.gperf"
    {"\346\205\264","慑"},
#line 1760 "zh_convert.gperf"
    {"\351\210\211","钠"},
#line 2789 "zh_convert.gperf"
    {"\345\273\225","荫"},
#line 1877 "zh_convert.gperf"
    {"\345\207\264","凭"},
#line 2066 "zh_convert.gperf"
    {"\351\241\254","颥"},
#line 1189 "zh_convert.gperf"
    {"\350\210\211","举"},
#line 1863 "zh_convert.gperf"
    {"\351\210\271","铍"},
#line 838 "zh_convert.gperf"
    {"\351\266\264","鹤"},
#line 3133 "zh_convert.gperf"
    {"\347\266\264","缀"},
#line 2337 "zh_convert.gperf"
    {"\351\254\200","剃"},
#line 38 "zh_convert.gperf"
    {"\345\266\264","岙"},
#line 557 "zh_convert.gperf"
    {"\346\210\271","厄"},
#line 2355 "zh_convert.gperf"
    {"\350\241\225","同"},
#line 1750 "zh_convert.gperf"
    {"\350\254\200","谋"},
#line 2016 "zh_convert.gperf"
    {"\350\273\200","躯"},
#line 780 "zh_convert.gperf"
    {"\345\254\200","妫"},
#line 2671 "zh_convert.gperf"
    {"\351\274\264","鼹"},
#line 3121 "zh_convert.gperf"
    {"\350\263\272","赚"},
#line 2165 "zh_convert.gperf"
    {"\351\257\264","鲺"},
#line 3067 "zh_convert.gperf"
    {"\350\263\252","质"},
#line 1041 "zh_convert.gperf"
    {"\351\237\211","鞯"},
#line 1932 "zh_convert.gperf"
    {"\351\207\272","钎"},
#line 2278 "zh_convert.gperf"
    {"\350\207\272","台"},
#line 926 "zh_convert.gperf"
    {"\350\277\264","回"},
#line 1838 "zh_convert.gperf"
    {"\346\205\252","怄"},
#line 231 "zh_convert.gperf"
    {"\346\207\272","忏"},
#line 144 "zh_convert.gperf"
    {"\351\254\242","鬓"},
#line 1915 "zh_convert.gperf"
    {"\347\266\272","绮"},
#line 2178 "zh_convert.gperf"
    {"\346\237\271","柿"},
#line 1507 "zh_convert.gperf"
    {"\345\266\272","岭"},
#line 610 "zh_convert.gperf"
    {"\345\273\242","废"},
#line 1502 "zh_convert.gperf"
    {"\351\210\264","铃"},
#line 1568 "zh_convert.gperf"
    {"\351\221\252","炉"},
#line 2710 "zh_convert.gperf"
    {"\350\254\240","谣"},
#line 1647 "zh_convert.gperf"
    {"\347\221\252","玛"},
#line 245 "zh_convert.gperf"
    {"\345\273\240","厂"},
#line 997 "zh_convert.gperf"
    {"\350\226\272","荠"},
#line 3002 "zh_convert.gperf"
    {"\346\221\272","折"},
#line 3086 "zh_convert.gperf"
    {"\345\221\252","咒"},
#line 1660 "zh_convert.gperf"
    {"\351\241\242","颟"},
#line 1328 "zh_convert.gperf"
    {"\350\263\232","赉"},
#line 1420 "zh_convert.gperf"
    {"\347\263\262","粝"},
#line 2089 "zh_convert.gperf"
    {"\345\226\252","丧"},
#line 3165 "zh_convert.gperf"
    {"\351\254\211","鬃"},
#line 1608 "zh_convert.gperf"
    {"\350\274\252","轮"},
#line 1505 "zh_convert.gperf"
    {"\351\257\252","鲮"},
#line 2464 "zh_convert.gperf"
    {"\345\241\242","坞"},
#line 32 "zh_convert.gperf"
    {"\347\277\272","翱"},
#line 179 "zh_convert.gperf"
    {"\346\205\232","惭"},
#line 1564 "zh_convert.gperf"
    {"\350\207\232","胪"},
#line 1764 "zh_convert.gperf"
    {"\350\277\272","乃"},
#line 1136 "zh_convert.gperf"
    {"\350\254\271","谨"},
#line 3051 "zh_convert.gperf"
    {"\350\273\271","轵"},
#line 1885 "zh_convert.gperf"
    {"\345\273\271","迫"},
#line 1033 "zh_convert.gperf"
    {"\346\277\272","溅"},
#line 1716 "zh_convert.gperf"
    {"\351\272\252","面"},
#line 568 "zh_convert.gperf"
    {"\351\266\232","鹗"},
#line 274 "zh_convert.gperf"
    {"\346\207\262","惩"},
#line 1497 "zh_convert.gperf"
    {"\350\272\252","躏"},
#line 2400 "zh_convert.gperf"
    {"\347\266\262","网"},
#line 480 "zh_convert.gperf"
    {"\347\237\264","碇"},
#line 2927 "zh_convert.gperf"
    {"\350\266\262","趱"},
#line 2866 "zh_convert.gperf"
    {"\351\210\272","钰"},
#line 2529 "zh_convert.gperf"
    {"\351\221\262","镶"},
#line 2721 "zh_convert.gperf"
    {"\347\210\272","爷"},
#line 1908 "zh_convert.gperf"
    {"\350\241\271","只"},
#line 2896 "zh_convert.gperf"
    {"\351\226\262","阅"},
#line 1945 "zh_convert.gperf"
    {"\345\241\271","堑"},
#line 736 "zh_convert.gperf"
    {"\350\263\274","购"},
#line 900 "zh_convert.gperf"
    {"\345\226\232","唤"},
#line 2107 "zh_convert.gperf"
    {"\345\210\252","删"},
#line 2818 "zh_convert.gperf"
    {"\345\226\262","哟"},
#line 3139 "zh_convert.gperf"
    {"\346\226\262","斫"},
#line 1841 "zh_convert.gperf"
    {"\346\274\232","沤"},
#line 1142 "zh_convert.gperf"
    {"\347\207\274","烬"},
#line 1896 "zh_convert.gperf"
    {"\346\205\274","戚"},
#line 2991 "zh_convert.gperf"
    {"\346\274\262","涨"},
#line 1193 "zh_convert.gperf"
    {"\346\207\274","惧"},
#line 1043 "zh_convert.gperf"
    {"\351\266\274","鹣"},
#line 2494 "zh_convert.gperf"
    {"\350\272\232","跹"},
#line 1682 "zh_convert.gperf"
    {"\351\273\264","霉"},
#line 2853 "zh_convert.gperf"
    {"\345\266\274","屿"},
#line 1617 "zh_convert.gperf"
    {"\351\221\274","锣"},
#line 1270 "zh_convert.gperf"
    {"\350\252\207","夸"},
#line 1465 "zh_convert.gperf"
    {"\346\266\274","凉"},
#line 562 "zh_convert.gperf"
    {"\351\226\274","阏"},
#line 467 "zh_convert.gperf"
    {"\350\252\277","调"},
#line 761 "zh_convert.gperf"
    {"\346\237\272","拐"},
#line 1294 "zh_convert.gperf"
    {"\345\252\277","愧"},
#line 2408 "zh_convert.gperf"
    {"\347\210\262","为"},
#line 2029 "zh_convert.gperf"
    {"\351\241\264","颧"},
#line 622 "zh_convert.gperf"
    {"\345\263\257","峰"},
#line 864 "zh_convert.gperf"
    {"\346\210\262","戏"},
#line 620 "zh_convert.gperf"
    {"\347\263\236","粪"},
#line 2124 "zh_convert.gperf"
    {"\350\263\236","赏"},
#line 2218 "zh_convert.gperf"
    {"\350\252\254","说"},
#line 691 "zh_convert.gperf"
    {"\350\207\257","皋"},
#line 1644 "zh_convert.gperf"
    {"\351\272\274","么"},
#line 1622 "zh_convert.gperf"
    {"\346\277\274","泺"},
#line 412 "zh_convert.gperf"
    {"\350\252\225","诞"},
#line 2799 "zh_convert.gperf"
    {"\351\266\257","莺"},
#line 1172 "zh_convert.gperf"
    {"\347\263\276","纠"},
#line 2159 "zh_convert.gperf"
    {"\346\272\274","湿"},
#line 2957 "zh_convert.gperf"
    {"\350\263\276","赜"},
#line 1694 "zh_convert.gperf"
    {"\346\207\236","蒙"},
#line 2711 "zh_convert.gperf"
    {"\350\273\272","轺"},
#line 3105 "zh_convert.gperf"
    {"\347\237\232","瞩"},
#line 1351 "zh_convert.gperf"
    {"\347\221\257","琅"},
#line 539 "zh_convert.gperf"
    {"\347\266\236","缍"},
#line 1872 "zh_convert.gperf"
    {"\345\254\252","嫔"},
#line 2717 "zh_convert.gperf"
    {"\350\221\257","药"},
#line 295 "zh_convert.gperf"
    {"\350\237\262","虫"},
#line 431 "zh_convert.gperf"
    {"\347\207\276","焘"},
#line 2858 "zh_convert.gperf"
    {"\346\205\276","欲"},
#line 1119 "zh_convert.gperf"
    {"\345\210\274","劫"},
#line 3055 "zh_convert.gperf"
    {"\346\221\257","挚"},
#line 1674 "zh_convert.gperf"
    {"\346\210\274","帽"},
#line 987 "zh_convert.gperf"
    {"\350\274\257","辑"},
#line 2133 "zh_convert.gperf"
    {"\346\207\276","慑"},
#line 2561 "zh_convert.gperf"
    {"\350\241\272","邪"},
#line 1501 "zh_convert.gperf"
    {"\347\266\276","绫"},
#line 1590 "zh_convert.gperf"
    {"\345\255\277","孪"},
#line 2401 "zh_convert.gperf"
    {"\350\274\236","辋"},
#line 1519 "zh_convert.gperf"
    {"\346\241\272","柳"},
#line 1744 "zh_convert.gperf"
    {"\346\255\277","殁"},
#line 1596 "zh_convert.gperf"
    {"\351\221\276","銮"},
#line 121 "zh_convert.gperf"
    {"\351\243\207","飙"},
#line 2018 "zh_convert.gperf"
    {"\351\272\257","曲"},
#line 2867 "zh_convert.gperf"
    {"\351\226\276","阈"},
#line 2291 "zh_convert.gperf"
    {"\345\243\207","坛"},
#line 2596 "zh_convert.gperf"
    {"\351\254\232","须"},
#line 1879 "zh_convert.gperf"
    {"\347\274\276","瓶"},
#line 2990 "zh_convert.gperf"
    {"\351\272\236","獐"},
#line 2983 "zh_convert.gperf"
    {"\350\274\276","辗"},
#line 183 "zh_convert.gperf"
    {"\351\273\262","黪"},
#line 2183 "zh_convert.gperf"
    {"\350\254\232","谥"},
#line 314 "zh_convert.gperf"
    {"\345\273\232","厨"},
#line 738 "zh_convert.gperf"
    {"\350\273\262","轱"},
#line 2147 "zh_convert.gperf"
    {"\346\273\262","渗"},
#line 848 "zh_convert.gperf"
    {"\345\232\207","吓"},
#line 1050 "zh_convert.gperf"
    {"\346\252\242","检"},
#line 277 "zh_convert.gperf"
    {"\350\252\240","诚"},
#line 1220 "zh_convert.gperf"
    {"\351\210\236","钧"},
#line 863 "zh_convert.gperf"
    {"\346\210\257","戏"},
#line 1636 "zh_convert.gperf"
    {"\346\277\276","滤"},
#line 2023 "zh_convert.gperf"
    {"\346\243\254","桊"},
#line 870 "zh_convert.gperf"
    {"\350\241\232","胡"},
#line 3077 "zh_convert.gperf"
    {"\345\241\232","冢"},
#line 240 "zh_convert.gperf"
    {"\345\241\262","场"},
#line 635 "zh_convert.gperf"
    {"\344\274\225","夫"},
#line 2835 "zh_convert.gperf"
    {"\351\210\276","铀"},
#line 574 "zh_convert.gperf"
    {"\347\210\276","尔"},
#line 268 "zh_convert.gperf"
    {"\346\252\211","柽"},
#line 2905 "zh_convert.gperf"
    {"\351\232\225","陨"},
#line 609 "zh_convert.gperf"
    {"\350\252\271","诽"},
#line 866 "zh_convert.gperf"
    {"\350\254\274","呼"},
#line 2770 "zh_convert.gperf"
    {"\350\273\274","轶"},
#line 1019 "zh_convert.gperf"
    {"\347\237\257","矫"},
#line 1763 "zh_convert.gperf"
    {"\345\273\274","乃"},
#line 1555 "zh_convert.gperf"
    {"\345\232\225","噜"},
#line 1771 "zh_convert.gperf"
    {"\350\237\257","蛲"},
#line 645 "zh_convert.gperf"
    {"\351\263\247","凫"},
#line 1466 "zh_convert.gperf"
    {"\347\263\247","粮"},
#line 2913 "zh_convert.gperf"
    {"\351\237\236","韫"},
#line 2303 "zh_convert.gperf"
    {"\350\263\247","赕"},
#line 307 "zh_convert.gperf"
    {"\351\205\247","酬"},
#line 299 "zh_convert.gperf"
    {"\345\271\254","帱"},
#line 524 "zh_convert.gperf"
    {"\345\205\214","兑"},
#line 2113 "zh_convert.gperf"
    {"\347\271\225","缮"},
#line 330 "zh_convert.gperf"
    {"\351\207\247","钏"},
#line 1779 "zh_convert.gperf"
    {"\345\205\247","内"},
#line 101 "zh_convert.gperf"
    {"\350\271\225","跸"},
#line 2758 "zh_convert.gperf"
    {"\346\207\214","怿"},
#line 3113 "zh_convert.gperf"
    {"\345\241\274","砖"},
#line 1812 "zh_convert.gperf"
    {"\345\232\200","咛"},
#line 138 "zh_convert.gperf"
    {"\351\221\214","镔"},
#line 977 "zh_convert.gperf"
    {"\351\243\242","饥"},
#line 1240 "zh_convert.gperf"
    {"\351\226\214","闶"},
#line 2756 "zh_convert.gperf"
    {"\345\266\247","峄"},
#line 1105 "zh_convert.gperf"
    {"\345\221\214","叫"},
#line 2526 "zh_convert.gperf"
    {"\350\226\214","芗"},
#line 1406 "zh_convert.gperf"
    {"\345\243\242","坜"},
#line 3036 "zh_convert.gperf"
    {"\345\271\200","帧"},
#line 3038 "zh_convert.gperf"
    {"\350\255\211","证"},
#line 2041 "zh_convert.gperf"
    {"\350\243\240","裙"},
#line 456 "zh_convert.gperf"
    {"\351\273\236","点"},
#line 3059 "zh_convert.gperf"
    {"\346\273\257","滞"},
#line 1536 "zh_convert.gperf"
    {"\345\243\240","垄"},
#line 235 "zh_convert.gperf"
    {"\351\257\247","鲳"},
#line 1499 "zh_convert.gperf"
    {"\346\254\236","棂"},
#line 2513 "zh_convert.gperf"
    {"\351\241\257","显"},
#line 2677 "zh_convert.gperf"
    {"\347\241\257","砚"},
#line 1813 "zh_convert.gperf"
    {"\345\257\247","宁"},
#line 247 "zh_convert.gperf"
    {"\346\232\242","畅"},
#line 2059 "zh_convert.gperf"
    {"\346\257\247","绒"},
#line 2605 "zh_convert.gperf"
    {"\347\272\214","续"},
#line 2485 "zh_convert.gperf"
    {"\344\277\240","侠"},
#line 1373 "zh_convert.gperf"
    {"\351\241\236","类"},
#line 1663 "zh_convert.gperf"
    {"\350\254\276","谩"},
#line 2185 "zh_convert.gperf"
    {"\350\273\276","轼"},
#line 694 "zh_convert.gperf"
    {"\346\232\240","皓"},
#line 1343 "zh_convert.gperf"
    {"\345\254\276","懒"},
#line 2426 "zh_convert.gperf"
    {"\350\241\236","卫"},
#line 940 "zh_convert.gperf"
    {"\347\271\242","缋"},
#line 799 "zh_convert.gperf"
    {"\346\273\276","滚"},
#line 1809 "zh_convert.gperf"
    {"\351\232\211","陧"},
#line 715 "zh_convert.gperf"
    {"\350\263\241","赓"},
#line 3048 "zh_convert.gperf"
    {"\350\271\240","跖"},
#line 1242 "zh_convert.gperf"
    {"\351\210\247","钪"},
#line 753 "zh_convert.gperf"
    {"\350\205\241","脶"},
#line 914 "zh_convert.gperf"
    {"\346\232\211","晖"},
#line 1290 "zh_convert.gperf"
    {"\347\252\272","窥"},
#line 1118 "zh_convert.gperf"
    {"\345\210\247","劫"},
#line 2384 "zh_convert.gperf"
    {"\347\252\252","洼"},
#line 333 "zh_convert.gperf"
    {"\346\210\247","戗"},
#line 2217 "zh_convert.gperf"
    {"\350\252\252","说"},
#line 2508 "zh_convert.gperf"
    {"\351\271\271","咸"},
#line 601 "zh_convert.gperf"
    {"\351\255\264","鲂"},
#line 2763 "zh_convert.gperf"
    {"\347\271\271","绎"},
#line 200 "zh_convert.gperf"
    {"\347\255\264","策"},
#line 1944 "zh_convert.gperf"
    {"\350\255\264","谴"},
#line 675 "zh_convert.gperf"
    {"\345\271\271","干"},
#line 846 "zh_convert.gperf"
    {"\351\226\241","阂"},
#line 1412 "zh_convert.gperf"
    {"\346\255\264","历"},
#line 2055 "zh_convert.gperf"
    {"\351\237\214","韧"},
#line 477 "zh_convert.gperf"
    {"\351\207\230","钉"},
#line 2748 "zh_convert.gperf"
    {"\351\243\264","饴"},
#line 182 "zh_convert.gperf"
    {"\346\205\230","惨"},
#line 608 "zh_convert.gperf"
    {"\351\257\241","鲱"},
#line 1315 "zh_convert.gperf"
    {"\350\207\230","腊"},
#line 872 "zh_convert.gperf"
    {"\351\266\230","鹕"},
#line 1977 "zh_convert.gperf"
    {"\350\252\232","诮"},
#line 1538 "zh_convert.gperf"
    {"\351\232\264","陇"},
#line 1253 "zh_convert.gperf"
    {"\350\252\262","课"},
#line 1806 "zh_convert.gperf"
    {"\350\272\241","蹑"},
#line 2969 "zh_convert.gperf"
    {"\351\226\230","闸"},
#line 2657 "zh_convert.gperf"
    {"\345\232\264","严"},
#line 685 "zh_convert.gperf"
    {"\347\226\230","肛"},
#line 857 "zh_convert.gperf"
    {"\351\273\214","黉"},
#line 3074 "zh_convert.gperf"
    {"\351\210\241","钟"},
#line 702 "zh_convert.gperf"
    {"\350\254\214","歌"},
#line 792 "zh_convert.gperf"
    {"\350\273\214","轨"},
#line 1777 "zh_convert.gperf"
    {"\351\254\247","闹"},
#line 1096 "zh_convert.gperf"
    {"\345\254\214","娇"},
#line 3053 "zh_convert.gperf"
    {"\345\257\230","置"},
#line 443 "zh_convert.gperf"
    {"\346\273\214","涤"},
#line 1864 "zh_convert.gperf"
    {"\346\257\230","毗"},
#line 2056 "zh_convert.gperf"
    {"\351\243\252","饪"},
#line 869 "zh_convert.gperf"
    {"\345\243\272","壶"},
#line 3178 "zh_convert.gperf"
    {"\347\272\230","缵"},
#line 1781 "zh_convert.gperf"
    {"\346\277\230","泞"},
#line 2330 "zh_convert.gperf"
    {"\351\241\214","题"},
#line 2742 "zh_convert.gperf"
    {"\350\252\274","谊"},
#line 35 "zh_convert.gperf"
    {"\345\252\274","媪"},
#line 751 "zh_convert.gperf"
    {"\351\241\247","顾"},
#line 3088 "zh_convert.gperf"
    {"\347\232\272","皱"},
#line 2512 "zh_convert.gperf"
    {"\351\232\252","险"},
#line 2410 "zh_convert.gperf"
    {"\351\201\225","违"},
#line 1378 "zh_convert.gperf"
    {"\347\201\225","漓"},
#line 2850 "zh_convert.gperf"
    {"\351\255\232","鱼"},
#line 770 "zh_convert.gperf"
    {"\350\210\230","馆"},
#line 2297 "zh_convert.gperf"
    {"\350\255\232","谭"},
#line 555 "zh_convert.gperf"
    {"\345\237\241","垭"},
#line 389 "zh_convert.gperf"
    {"\351\271\272","鹾"},
#line 2258 "zh_convert.gperf"
    {"\346\255\262","岁"},
#line 1965 "zh_convert.gperf"
    {"\350\271\272","跷"},
#line 941 "zh_convert.gperf"
    {"\347\271\252","绘"},
#line 3116 "zh_convert.gperf"
    {"\347\243\232","砖"},
#line 2788 "zh_convert.gperf"
    {"\351\243\262","饮"},
#line 759 "zh_convert.gperf"
    {"\350\251\277","诖"},
#line 1557 "zh_convert.gperf"
    {"\345\243\232","垆"},
#line 29 "zh_convert.gperf"
    {"\351\252\257","肮"},
#line 2708 "zh_convert.gperf"
    {"\347\252\257","窑"},
#line 1897 "zh_convert.gperf"
    {"\346\243\262","栖"},
#line 779 "zh_convert.gperf"
    {"\345\252\257","妫"},
#line 2280 "zh_convert.gperf"
    {"\346\252\257","台"},
#line 12 "zh_convert.gperf"
    {"\347\232\232","皑"},
#line 2855 "zh_convert.gperf"
    {"\350\252\236","语"},
#line 735 "zh_convert.gperf"
    {"\350\251\254","诟"},
#line 2782 "zh_convert.gperf"
    {"\345\251\254","淫"},
#line 1099 "zh_convert.gperf"
    {"\351\251\225","骄"},
#line 1804 "zh_convert.gperf"
    {"\345\255\274","孽"},
#line 16 "zh_convert.gperf"
    {"\345\254\241","嫒"},
#line 2459 "zh_convert.gperf"
    {"\345\273\241","庑"},
#line 1880 "zh_convert.gperf"
    {"\350\251\225","评"},
#line 718 "zh_convert.gperf"
    {"\351\252\276","鲠"},
#line 1472 "zh_convert.gperf"
    {"\347\271\232","缭"},
#line 2229 "zh_convert.gperf"
    {"\351\243\274","饲"},
#line 2304 "zh_convert.gperf"
    {"\350\271\232","趟"},
#line 2886 "zh_convert.gperf"
    {"\351\201\240","远"},
#line 1996 "zh_convert.gperf"
    {"\346\252\276","苘"},
#line 82 "zh_convert.gperf"
    {"\351\213\207","钡"},
#line 1829 "zh_convert.gperf"
    {"\347\205\227","暖"},
#line 1748 "zh_convert.gperf"
    {"\351\251\200","蓦"},
#line 744 "zh_convert.gperf"
    {"\347\251\200","谷"},
#line 2995 "zh_convert.gperf"
    {"\351\207\227","钊"},
#line 762 "zh_convert.gperf"
    {"\346\201\240","怪"},
#line 2668 "zh_convert.gperf"
    {"\345\205\227","兖"},
#line 2500 "zh_convert.gperf"
    {"\347\231\207","痫"},
#line 1580 "zh_convert.gperf"
    {"\351\255\257","鲁"},
#line 2413 "zh_convert.gperf"
    {"\345\201\211","伟"},
#line 3109 "zh_convert.gperf"
    {"\347\255\257","箸"},
#line 2767 "zh_convert.gperf"
    {"\350\255\257","译"},
#line 1817 "zh_convert.gperf"
    {"\350\201\271","聍"},
#line 1358 "zh_convert.gperf"
    {"\345\266\227","崂"},
#line 2887 "zh_convert.gperf"
    {"\351\241\230","愿"},
#line 1059 "zh_convert.gperf"
    {"\351\271\274","碱"},
#line 199 "zh_convert.gperf"
    {"\347\255\236","策"},
#line 995 "zh_convert.gperf"
    {"\347\271\274","继"},
#line 2510 "zh_convert.gperf"
    {"\347\231\254","癣"},
#line 599 "zh_convert.gperf"
    {"\351\243\257","饭"},
#line 1627 "zh_convert.gperf"
    {"\351\251\242","驴"},
#line 966 "zh_convert.gperf"
    {"\347\243\257","矶"},
#line 939 "zh_convert.gperf"
    {"\347\251\242","秽"},
#line 2535 "zh_convert.gperf"
    {"\351\257\227","鲞"},
#line 492 "zh_convert.gperf"
    {"\345\213\225","动"},
#line 2632 "zh_convert.gperf"
    {"\350\251\242","询"},
#line 3128 "zh_convert.gperf"
    {"\345\243\257","壮"},
#line 2375 "zh_convert.gperf"
    {"\346\213\225","拖"},
#line 1800 "zh_convert.gperf"
    {"\351\263\245","鸟"},
#line 324 "zh_convert.gperf"
    {"\350\231\225","处"},
#line 2381 "zh_convert.gperf"
    {"\346\251\242","椭"},
#line 1057 "zh_convert.gperf"
    {"\350\255\276","谫"},
#line 2827 "zh_convert.gperf"
    {"\350\251\240","咏"},
#line 892 "zh_convert.gperf"
    {"\345\243\236","坏"},
#line 904 "zh_convert.gperf"
    {"\347\205\245","焕"},
#line 1393 "zh_convert.gperf"
    {"\351\272\227","丽"},
#line 3129 "zh_convert.gperf"
    {"\347\213\200","状"},
#line 1174 "zh_convert.gperf"
    {"\351\263\251","鸠"},
#line 2188 "zh_convert.gperf"
    {"\351\243\276","饰"},
#line 2445 "zh_convert.gperf"
    {"\350\207\245","卧"},
#line 2326 "zh_convert.gperf"
    {"\347\251\211","稚"},
#line 1859 "zh_convert.gperf"
    {"\344\272\257","享"},
#line 545 "zh_convert.gperf"
    {"\345\263\251","峨"},
#line 590 "zh_convert.gperf"
    {"\347\205\251","烦"},
#line 1681 "zh_convert.gperf"
    {"\351\266\245","鹛"},
#line 593 "zh_convert.gperf"
    {"\351\207\251","钒"},
#line 1467 "zh_convert.gperf"
    {"\345\205\251","两"},
#line 897 "zh_convert.gperf"
    {"\347\271\257","缳"},
#line 2729 "zh_convert.gperf"
    {"\347\210\227","烨"},
#line 2645 "zh_convert.gperf"
    {"\344\272\236","亚"},
#line 1579 "zh_convert.gperf"
    {"\351\221\245","镥"},
#line 3066 "zh_convert.gperf"
    {"\350\252\214","志"},
#line 193 "zh_convert.gperf"
    {"\345\201\264","侧"},
#line 2122 "zh_convert.gperf"
    {"\346\271\257","汤"},
#line 582 "zh_convert.gperf"
    {"\351\226\245","阀"},
#line 2048 "zh_convert.gperf"
    {"\347\271\236","绕"},
#line 1754 "zh_convert.gperf"
    {"\351\266\251","鹜"},
#line 2383 "zh_convert.gperf"
    {"\345\252\247","娲"},
#line 2398 "zh_convert.gperf"
    {"\344\272\276","亡"},
#line 269 "zh_convert.gperf"
    {"\346\271\236","浈"},
#line 802 "zh_convert.gperf"
    {"\350\274\245","辊"},
#line 2808 "zh_convert.gperf"
    {"\347\221\251","莹"},
#line 1733 "zh_convert.gperf"
    {"\351\226\251","闽"},
#line 2176 "zh_convert.gperf"
    {"\345\213\242","势"},
#line 2701 "zh_convert.gperf"
    {"\347\231\242","痒"},
#line 1942 "zh_convert.gperf"
    {"\347\271\276","缱"},
#line 2079 "zh_convert.gperf"
    {"\350\226\251","萨"},
#line 961 "zh_convert.gperf"
    {"\345\271\276","几"},
#line 81 "zh_convert.gperf"
    {"\350\274\251","辈"},
#line 1659 "zh_convert.gperf"
    {"\351\272\245","麦"},
#line 2105 "zh_convert.gperf"
    {"\347\257\251","筛"},
#line 392 "zh_convert.gperf"
    {"\345\231\240","哒"},
#line 381 "zh_convert.gperf"
    {"\350\272\245","蹿"},
#line 2428 "zh_convert.gperf"
    {"\351\201\272","遗"},
#line 2143 "zh_convert.gperf"
    {"\345\257\251","审"},
#line 638 "zh_convert.gperf"
    {"\351\272\251","麸"},
#line 2917 "zh_convert.gperf"
    {"\345\201\272","咱"},
#line 403 "zh_convert.gperf"
    {"\347\231\211","瘅"},
#line 2487 "zh_convert.gperf"
    {"\347\213\271","狭"},
#line 950 "zh_convert.gperf"
    {"\351\210\245","钬"},
#line 2875 "zh_convert.gperf"
    {"\351\263\266","鸢"},
#line 89 "zh_convert.gperf"
    {"\345\201\252","逼"},
#line 2342 "zh_convert.gperf"
    {"\347\263\266","粜"},
#line 409 "zh_convert.gperf"
    {"\345\231\211","啖"},
#line 1141 "zh_convert.gperf"
    {"\346\231\211","晋"},
#line 129 "zh_convert.gperf"
    {"\345\210\245","别"},
#line 427 "zh_convert.gperf"
    {"\345\263\266","岛"},
#line 414 "zh_convert.gperf"
    {"\345\231\271","当"},
#line 547 "zh_convert.gperf"
    {"\350\255\214","讹"},
#line 1454 "zh_convert.gperf"
    {"\345\255\214","娈"},
#line 1053 "zh_convert.gperf"
    {"\347\255\247","笕"},
#line 1998 "zh_convert.gperf"
    {"\346\205\266","庆"},
#line 329 "zh_convert.gperf"
    {"\350\210\251","船"},
#line 1344 "zh_convert.gperf"
    {"\346\207\266","懒"},
#line 1046 "zh_convert.gperf"
    {"\346\210\251","戬"},
#line 61 "zh_convert.gperf"
    {"\350\254\227","谤"},
#line 1014 "zh_convert.gperf"
    {"\350\243\214","夹"},
#line 1128 "zh_convert.gperf"
    {"\350\252\241","诫"},
#line 1919 "zh_convert.gperf"
    {"\347\243\247","碛"},
#line 283 "zh_convert.gperf"
    {"\351\201\262","迟"},
#line 234 "zh_convert.gperf"
    {"\351\226\266","阊"},
#line 2150 "zh_convert.gperf"
    {"\350\201\262","声"},
#line 2986 "zh_convert.gperf"
    {"\346\243\247","栈"},
#line 1390 "zh_convert.gperf"
    {"\351\251\252","骊"},
#line 2367 "zh_convert.gperf"
    {"\346\221\266","抟"},
#line 2363 "zh_convert.gperf"
    {"\345\241\227","涂"},
#line 992 "zh_convert.gperf"
    {"\345\232\214","哜"},
#line 64 "zh_convert.gperf"
    {"\345\257\266","宝"},
#line 31 "zh_convert.gperf"
    {"\347\277\266","翱"},
#line 2640 "zh_convert.gperf"
    {"\347\205\206","煅"},
#line 2839 "zh_convert.gperf"
    {"\350\252\230","诱"},
#line 1858 "zh_convert.gperf"
    {"\345\231\264","喷"},
#line 1950 "zh_convert.gperf"
    {"\350\271\214","跄"},
#line 1312 "zh_convert.gperf"
    {"\346\277\266","阔"},
#line 1621 "zh_convert.gperf"
    {"\350\272\266","裸"},
#line 1473 "zh_convert.gperf"
    {"\351\201\274","辽"},
#line 2943 "zh_convert.gperf"
    {"\350\271\247","糟"},
#line 497 "zh_convert.gperf"
    {"\351\254\245","斗"},
#line 2349 "zh_convert.gperf"
    {"\350\201\274","听"},
#line 293 "zh_convert.gperf"
    {"\346\271\247","涌"},
#line 716 "zh_convert.gperf"
    {"\347\266\206","绠"},
#line 2807 "zh_convert.gperf"
    {"\347\207\237","营"},
#line 2354 "zh_convert.gperf"
    {"\346\205\237","恸"},
#line 1153 "zh_convert.gperf"
    {"\351\251\232","惊"},
#line 2942 "zh_convert.gperf"
    {"\350\207\237","脏"},
#line 504 "zh_convert.gperf"
    {"\345\207\237","渎"},
#line 2484 "zh_convert.gperf"
    {"\351\254\251","阋"},
#line 526 "zh_convert.gperf"
    {"\346\207\237","怼"},
#line 2662 "zh_convert.gperf"
    {"\351\226\206","闫"},
#line 875 "zh_convert.gperf"
    {"\346\210\266","户"},
#line 664 "zh_convert.gperf"
    {"\350\251\262","该"},
#line 894 "zh_convert.gperf"
    {"\346\255\241","欢"},
#line 841 "zh_convert.gperf"
    {"\351\241\245","颢"},
#line 671 "zh_convert.gperf"
    {"\344\271\271","乾"},
#line 1491 "zh_convert.gperf"
    {"\345\273\251","廪"},
#line 1888 "zh_convert.gperf"
    {"\351\213\252","铺"},
#line 3000 "zh_convert.gperf"
    {"\345\226\206","哲"},
#line 2560 "zh_convert.gperf"
    {"\350\204\207","胁"},
#line 1396 "zh_convert.gperf"
    {"\350\243\241","里"},
#line 1461 "zh_convert.gperf"
    {"\350\226\237","莶"},
#line 1840 "zh_convert.gperf"
    {"\346\257\206","殴"},
#line 1541 "zh_convert.gperf"
    {"\346\221\237","搂"},
#line 2744 "zh_convert.gperf"
    {"\350\277\206","迤"},
#line 355 "zh_convert.gperf"
    {"\350\274\237","辍"},
#line 2670 "zh_convert.gperf"
    {"\351\255\230","魇"},
#line 533 "zh_convert.gperf"
    {"\351\201\257","遁"},
#line 2172 "zh_convert.gperf"
    {"\350\255\230","识"},
#line 270 "zh_convert.gperf"
    {"\350\237\266","蛏"},
#line 1444 "zh_convert.gperf"
    {"\350\201\257","联"},
#line 452 "zh_convert.gperf"
    {"\351\201\236","递"},
#line 917 "zh_convert.gperf"
    {"\350\251\274","诙"},
#line 2528 "zh_convert.gperf"
    {"\351\204\225","乡"},
#line 2433 "zh_convert.gperf"
    {"\350\201\236","闻"},
#line 989 "zh_convert.gperf"
    {"\346\277\237","济"},
#line 211 "zh_convert.gperf"
    {"\345\204\225","侪"},
#line 2588 "zh_convert.gperf"
    {"\347\271\241","绣"},
#line 1370 "zh_convert.gperf"
    {"\345\243\230","垒"},
#line 982 "zh_convert.gperf"
    {"\346\243\230","枣"},
#line 972 "zh_convert.gperf"
    {"\350\263\253","赍"},
#line 1532 "zh_convert.gperf"
    {"\350\201\276","聋"},
#line 454 "zh_convert.gperf"
    {"\347\231\262","癫"},
#line 3079 "zh_convert.gperf"
    {"\350\205\253","肿"},
#line 1272 "zh_convert.gperf"
    {"\345\231\262","哙"},
#line 923 "zh_convert.gperf"
    {"\350\232\230","蛔"},
#line 2232 "zh_convert.gperf"
    {"\346\205\253","怂"},
#line 2738 "zh_convert.gperf"
    {"\345\204\200","仪"},
#line 1934 "zh_convert.gperf"
    {"\351\237\206","千"},
#line 2518 "zh_convert.gperf"
    {"\347\266\253","线"},
#line 687 "zh_convert.gperf"
    {"\351\213\274","钢"},
#line 2953 "zh_convert.gperf"
    {"\345\271\230","帻"},
#line 201 "zh_convert.gperf"
    {"\347\241\266","碜"},
#line 1309 "zh_convert.gperf"
    {"\351\226\253","阃"},
#line 357 "zh_convert.gperf"
    {"\350\251\236","词"},
#line 579 "zh_convert.gperf"
    {"\347\231\274","发"},
#line 280 "zh_convert.gperf"
    {"\345\226\253","吃"},
#line 3172 "zh_convert.gperf"
    {"\351\257\253","鲰"},
#line 1766 "zh_convert.gperf"
    {"\346\237\237","楠"},
#line 2564 "zh_convert.gperf"
    {"\345\257\253","写"},
#line 2397 "zh_convert.gperf"
    {"\347\277\253","玩"},
#line 2231 "zh_convert.gperf"
    {"\351\254\206","松"},
#line 2086 "zh_convert.gperf"
    {"\347\263\235","糁"},
#line 1349 "zh_convert.gperf"
    {"\346\277\253","滥"},
#line 2527 "zh_convert.gperf"
    {"\351\204\211","乡"},
#line 493 "zh_convert.gperf"
    {"\345\263\235","峒"},
#line 1267 "zh_convert.gperf"
    {"\345\272\253","库"},
#line 2247 "zh_convert.gperf"
    {"\346\263\235","溯"},
#line 2431 "zh_convert.gperf"
    {"\346\272\253","温"},
#line 3016 "zh_convert.gperf"
    {"\351\207\235","针"},
#line 1044 "zh_convert.gperf"
    {"\345\204\211","俭"},
#line 698 "zh_convert.gperf"
    {"\351\213\257","锆"},
#line 1620 "zh_convert.gperf"
    {"\350\207\235","裸"},
#line 2993 "zh_convert.gperf"
    {"\350\204\271","胀"},
#line 2652 "zh_convert.gperf"
    {"\347\205\231","烟"},
#line 2925 "zh_convert.gperf"
    {"\345\204\271","攒"},
#line 2068 "zh_convert.gperf"
    {"\350\273\237","软"},
#line 1248 "zh_convert.gperf"
    {"\351\241\206","颗"},
#line 1429 "zh_convert.gperf"
    {"\351\207\231","钋"},
#line 1720 "zh_convert.gperf"
    {"\345\273\237","庙"},
#line 2310 "zh_convert.gperf"
    {"\347\207\231","烫"},
#line 2009 "zh_convert.gperf"
    {"\350\231\257","虬"},
#line 3081 "zh_convert.gperf"
    {"\350\241\206","众"},
#line 178 "zh_convert.gperf"
    {"\346\205\231","惭"},
#line 2653 "zh_convert.gperf"
    {"\350\207\231","胭"},
#line 13 "zh_convert.gperf"
    {"\345\231\257","嗳"},
#line 2151 "zh_convert.gperf"
    {"\351\231\236","升"},
#line 1356 "zh_convert.gperf"
    {"\345\213\236","劳"},
#line 2674 "zh_convert.gperf"
    {"\347\201\247","滟"},
#line 84 "zh_convert.gperf"
    {"\350\263\201","贲"},
#line 2999 "zh_convert.gperf"
    {"\350\266\231","赵"},
#line 1284 "zh_convert.gperf"
    {"\346\263\201","况"},
#line 2941 "zh_convert.gperf"
    {"\345\241\237","葬"},
#line 2576 "zh_convert.gperf"
    {"\351\207\201","衅"},
#line 2728 "zh_convert.gperf"
    {"\347\207\201","烨"},
#line 918 "zh_convert.gperf"
    {"\350\274\235","辉"},
#line 752 "zh_convert.gperf"
    {"\351\257\235","鲴"},
#line 1776 "zh_convert.gperf"
    {"\351\226\231","闹"},
#line 697 "zh_convert.gperf"
    {"\350\252\245","诰"},
#line 2335 "zh_convert.gperf"
    {"\350\226\231","剃"},
#line 59 "zh_convert.gperf"
    {"\347\266\201","绑"},
#line 2553 "zh_convert.gperf"
    {"\346\255\227","啸"},
#line 2443 "zh_convert.gperf"
    {"\347\252\251","窝"},
#line 1550 "zh_convert.gperf"
    {"\345\266\201","嵝"},
#line 2731 "zh_convert.gperf"
    {"\351\204\264","邺"},
#line 727 "zh_convert.gperf"
    {"\346\272\235","沟"},
#line 341 "zh_convert.gperf"
    {"\346\204\264","怆"},
#line 2945 "zh_convert.gperf"
    {"\346\243\227","枣"},
#line 2245 "zh_convert.gperf"
    {"\347\251\214","稣"},
#line 719 "zh_convert.gperf"
    {"\351\257\201","鲠"},
#line 543 "zh_convert.gperf"
    {"\345\250\277","婀"},
#line 2844 "zh_convert.gperf"
    {"\346\274\201","渔"},
#line 207 "zh_convert.gperf"
    {"\350\251\247","察"},
#line 3004 "zh_convert.gperf"
    {"\350\254\253","谪"},
#line 3019 "zh_convert.gperf"
    {"\350\273\253","轸"},
#line 3142 "zh_convert.gperf"
    {"\346\277\201","浊"},
#line 2457 "zh_convert.gperf"
    {"\345\250\254","妩"},
#line 2252 "zh_convert.gperf"
    {"\351\201\241","溯"},
#line 2114 "zh_convert.gperf"
    {"\350\250\225","讪"},
#line 1287 "zh_convert.gperf"
    {"\351\204\272","邝"},
#line 232 "zh_convert.gperf"
    {"\351\241\253","颤"},
#line 600 "zh_convert.gperf"
    {"\351\210\201","钫"},
#line 813 "zh_convert.gperf"
    {"\345\271\227","帼"},
#line 1494 "zh_convert.gperf"
    {"\346\201\241","吝"},
#line 737 "zh_convert.gperf"
    {"\351\237\235","鞴"},
#line 1832 "zh_convert.gperf"
    {"\345\204\272","傩"},
#line 2352 "zh_convert.gperf"
    {"\347\255\251","筒"},
#line 2829 "zh_convert.gperf"
    {"\345\204\252","优"},
#line 28 "zh_convert.gperf"
    {"\351\227\207","暗"},
#line 2932 "zh_convert.gperf"
    {"\350\263\233","赞"},
#line 2420 "zh_convert.gperf"
    {"\351\237\231","韪"},
#line 1237 "zh_convert.gperf"
    {"\347\237\231","瞰"},
#line 1194 "zh_convert.gperf"
    {"\347\252\266","窭"},
#line 482 "zh_convert.gperf"
    {"\351\213\214","铤"},
#line 2095 "zh_convert.gperf"
    {"\345\227\207","啬"},
#line 2259 "zh_convert.gperf"
    {"\350\252\266","谇"},
#line 2374 "zh_convert.gperf"
    {"\351\243\251","饨"},
#line 2287 "zh_convert.gperf"
    {"\347\201\230","滩"},
#line 1198 "zh_convert.gperf"
    {"\345\213\214","倦"},
#line 1936 "zh_convert.gperf"
    {"\344\271\276","干"},
#line 1818 "zh_convert.gperf"
    {"\350\213\247","苎"},
#line 1235 "zh_convert.gperf"
    {"\345\201\230","侃"},
#line 43 "zh_convert.gperf"
    {"\345\243\251","坝"},
#line 1417 "zh_convert.gperf"
    {"\347\231\247","疬"},
#line 2672 "zh_convert.gperf"
    {"\345\232\245","咽"},
#line 1084 "zh_convert.gperf"
    {"\351\237\201","缰"},
#line 1291 "zh_convert.gperf"
    {"\350\231\247","亏"},
#line 310 "zh_convert.gperf"
    {"\347\237\201","瞅"},
#line 2435 "zh_convert.gperf"
    {"\350\237\201","蚊"},
#line 1546 "zh_convert.gperf"
    {"\350\200\254","耧"},
#line 1288 "zh_convert.gperf"
    {"\351\221\233","矿"},
#line 2098 "zh_convert.gperf"
    {"\347\251\241","穑"},
#line 405 "zh_convert.gperf"
    {"\351\204\262","郸"},
#line 2032 "zh_convert.gperf"
    {"\351\227\225","阙"},
#line 2597 "zh_convert.gperf"
    {"\350\251\241","诩"},
#line 1164 "zh_convert.gperf"
    {"\351\200\225","径"},
#line 2572 "zh_convert.gperf"
    {"\350\254\235","谢"},
#line 657 "zh_convert.gperf"
    {"\350\263\273","赙"},
#line 134 "zh_convert.gperf"
    {"\347\200\225","濒"},
#line 1797 "zh_convert.gperf"
    {"\345\254\235","袅"},
#line 2223 "zh_convert.gperf"
    {"\345\273\235","厮"},
#line 313 "zh_convert.gperf"
    {"\345\204\262","储"},
#line 2573 "zh_convert.gperf"
    {"\350\250\242","欣"},
#line 1470 "zh_convert.gperf"
    {"\350\274\233","辆"},
#line 463 "zh_convert.gperf"
    {"\351\257\233","鲷"},
#line 1930 "zh_convert.gperf"
    {"\350\254\231","谦"},
#line 2629 "zh_convert.gperf"
    {"\347\207\273","熏"},
#line 2077 "zh_convert.gperf"
    {"\347\257\233","箬"},
#line 1955 "zh_convert.gperf"
    {"\345\254\231","嫱"},
#line 2152 "zh_convert.gperf"
    {"\347\271\251","绳"},
#line 936 "zh_convert.gperf"
    {"\346\273\231","汇"},
#line 294 "zh_convert.gperf"
    {"\350\241\235","冲"},
#line 742 "zh_convert.gperf"
    {"\351\266\273","鹘"},
#line 1280 "zh_convert.gperf"
    {"\350\252\206","诓"},
#line 2987 "zh_convert.gperf"
    {"\347\266\273","绽"},
#line 1619 "zh_convert.gperf"
    {"\351\251\230","骡"},
#line 2090 "zh_convert.gperf"
    {"\351\241\231","颡"},
#line 1433 "zh_convert.gperf"
    {"\351\254\201","疬"},
#line 1692 "zh_convert.gperf"
    {"\346\277\233","蒙"},
#line 233 "zh_convert.gperf"
    {"\345\200\200","伥"},
#line 327 "zh_convert.gperf"
    {"\350\251\230","诎"},
#line 2730 "zh_convert.gperf"
    {"\350\254\201","谒"},
#line 2663 "zh_convert.gperf"
    {"\351\226\273","阎"},
#line 196 "zh_convert.gperf"
    {"\345\273\201","厕"},
#line 2667 "zh_convert.gperf"
    {"\345\204\274","俨"},
#line 184 "zh_convert.gperf"
    {"\346\221\273","掺"},
#line 2207 "zh_convert.gperf"
    {"\346\250\271","树"},
#line 1350 "zh_convert.gperf"
    {"\347\210\233","烂"},
#line 643 "zh_convert.gperf"
    {"\350\274\273","辐"},
#line 1657 "zh_convert.gperf"
    {"\350\263\243","卖"},
#line 2155 "zh_convert.gperf"
    {"\350\263\270","剩"},
#line 104 "zh_convert.gperf"
    {"\351\227\242","辟"},
#line 281 "zh_convert.gperf"
    {"\347\231\241","痴"},
#line 468 "zh_convert.gperf"
    {"\351\207\243","钓"},
#line 2745 "zh_convert.gperf"
    {"\350\277\273","移"},
#line 241 "zh_convert.gperf"
    {"\350\205\270","肠"},
#line 772 "zh_convert.gperf"
    {"\346\205\243","惯"},
#line 589 "zh_convert.gperf"
    {"\345\207\243","凡"},
#line 2253 "zh_convert.gperf"
    {"\347\227\240","酸"},
#line 2805 "zh_convert.gperf"
    {"\347\200\240","潆"},
#line 1690 "zh_convert.gperf"
    {"\346\207\243","懑"},
#line 2206 "zh_convert.gperf"
    {"\345\272\273","庶"},
#line 2790 "zh_convert.gperf"
    {"\345\232\266","嘤"},
#line 2615 "zh_convert.gperf"
    {"\346\207\270","悬"},
#line 2030 "zh_convert.gperf"
    {"\347\266\243","绻"},
#line 2148 "zh_convert.gperf"
    {"\350\205\216","肾"},
#line 763 "zh_convert.gperf"
    {"\347\266\270","纶"},
#line 2365 "zh_convert.gperf"
    {"\345\205\216","兔"},
#line 90 "zh_convert.gperf"
    {"\347\255\206","笔"},
#line 118 "zh_convert.gperf"
    {"\351\221\243","镳"},
#line 2472 "zh_convert.gperf"
    {"\350\255\206","嘻"},
#line 2269 "zh_convert.gperf"
    {"\347\221\243","琐"},
#line 2057 "zh_convert.gperf"
    {"\345\266\270","嵘"},
#line 707 "zh_convert.gperf"
    {"\351\226\243","阁"},
#line 2567 "zh_convert.gperf"
    {"\347\200\211","泻"},
#line 986 "zh_convert.gperf"
    {"\350\227\211","借"},
#line 1169 "zh_convert.gperf"
    {"\345\237\233","炯"},
#line 2579 "zh_convert.gperf"
    {"\351\231\230","陉"},
#line 965 "zh_convert.gperf"
    {"\347\231\230","疠"},
#line 186 "zh_convert.gperf"
    {"\345\200\211","仓"},
#line 2963 "zh_convert.gperf"
    {"\346\221\243","揸"},
#line 14 "zh_convert.gperf"
    {"\350\227\271","蔼"},
#line 2250 "zh_convert.gperf"
    {"\350\250\264","诉"},
#line 120 "zh_convert.gperf"
    {"\351\243\206","飙"},
#line 2364 "zh_convert.gperf"
    {"\351\207\267","钍"},
#line 2950 "zh_convert.gperf"
    {"\350\255\237","噪"},
#line 2200 "zh_convert.gperf"
    {"\350\274\270","输"},
#line 1440 "zh_convert.gperf"
    {"\346\274\243","涟"},
#line 2843 "zh_convert.gperf"
    {"\346\255\237","欤"},
#line 855 "zh_convert.gperf"
    {"\351\226\216","闳"},
#line 1032 "zh_convert.gperf"
    {"\346\274\270","渐"},
#line 2197 "zh_convert.gperf"
    {"\347\226\216","疏"},
#line 891 "zh_convert.gperf"
    {"\346\207\267","怀"},
#line 2914 "zh_convert.gperf"
    {"\351\237\273","韵"},
#line 1232 "zh_convert.gperf"
    {"\346\204\276","忾"},
#line 1535 "zh_convert.gperf"
    {"\345\243\237","垄"},
#line 1808 "zh_convert.gperf"
    {"\351\221\267","镊"},
#line 2751 "zh_convert.gperf"
    {"\350\237\273","蚁"},
#line 494 "zh_convert.gperf"
    {"\346\243\237","栋"},
#line 1090 "zh_convert.gperf"
    {"\350\254\233","讲"},
#line 560 "zh_convert.gperf"
    {"\350\273\233","轭"},
#line 945 "zh_convert.gperf"
    {"\350\221\267","荤"},
#line 206 "zh_convert.gperf"
    {"\346\237\273","查"},
#line 670 "zh_convert.gperf"
    {"\351\210\243","钙"},
#line 2783 "zh_convert.gperf"
    {"\346\273\233","淫"},
#line 1496 "zh_convert.gperf"
    {"\350\263\203","赁"},
#line 40 "zh_convert.gperf"
    {"\351\210\270","钹"},
#line 520 "zh_convert.gperf"
    {"\346\226\267","断"},
#line 3061 "zh_convert.gperf"
    {"\347\250\272","稚"},
#line 1722 "zh_convert.gperf"
    {"\347\271\206","缪"},
#line 1091 "zh_convert.gperf"
    {"\345\274\267","强"},
#line 3014 "zh_convert.gperf"
    {"\350\250\272","诊"},
#line 1387 "zh_convert.gperf"
    {"\351\207\203","酾"},
#line 455 "zh_convert.gperf"
    {"\351\241\233","颠"},
#line 604 "zh_convert.gperf"
    {"\350\250\252","访"},
#line 883 "zh_convert.gperf"
    {"\346\250\272","桦"},
#line 2935 "zh_convert.gperf"
    {"\350\263\215","赃"},
#line 2425 "zh_convert.gperf"
    {"\350\241\233","卫"},
#line 729 "zh_convert.gperf"
    {"\351\210\216","钩"},
#line 2361 "zh_convert.gperf"
    {"\345\207\203","涂"},
#line 818 "zh_convert.gperf"
    {"\351\211\277","铪"},
#line 1985 "zh_convert.gperf"
    {"\346\207\203","勤"},
#line 2951 "zh_convert.gperf"
    {"\345\211\207","则"},
#line 974 "zh_convert.gperf"
    {"\350\271\237","迹"},
#line 2544 "zh_convert.gperf"
    {"\347\266\203","绡"},
#line 2907 "zh_convert.gperf"
    {"\346\205\215","愠"},
#line 3054 "zh_convert.gperf"
    {"\345\271\237","帜"},
#line 1905 "zh_convert.gperf"
    {"\350\207\215","脐"},
#line 491 "zh_convert.gperf"
    {"\345\207\215","冻"},
#line 1246 "zh_convert.gperf"
    {"\350\273\273","轲"},
#line 1492 "zh_convert.gperf"
    {"\346\207\215","懔"},
#line 921 "zh_convert.gperf"
    {"\345\273\273","回"},
#line 2111 "zh_convert.gperf"
    {"\351\226\203","闪"},
#line 740 "zh_convert.gperf"
    {"\351\210\267","钴"},
#line 1753 "zh_convert.gperf"
    {"\351\211\254","钼"},
#line 990 "zh_convert.gperf"
    {"\350\237\243","虮"},
#line 2690 "zh_convert.gperf"
    {"\351\251\227","验"},
#line 2385 "zh_convert.gperf"
    {"\351\274\203","蛙"},
#line 2977 "zh_convert.gperf"
    {"\350\255\253","谵"},
#line 1104 "zh_convert.gperf"
    {"\350\274\203","较"},
#line 94 "zh_convert.gperf"
    {"\346\226\203","毙"},
#line 1883 "zh_convert.gperf"
    {"\351\211\225","钷"},
#line 2260 "zh_convert.gperf"
    {"\345\255\253","孙"},
#line 335 "zh_convert.gperf"
    {"\347\211\225","窗"},
#line 60 "zh_convert.gperf"
    {"\350\211\225","膀"},
#line 285 "zh_convert.gperf"
    {"\346\201\245","耻"},
#line 2958 "zh_convert.gperf"
    {"\350\263\212","贼"},
#line 984 "zh_convert.gperf"
    {"\346\252\235","楫"},
#line 1313 "zh_convert.gperf"
    {"\351\201\251","适"},
#line 2869 "zh_convert.gperf"
    {"\351\243\253","饫"},
#line 1668 "zh_convert.gperf"
    {"\350\237\216","螨"},
#line 98 "zh_convert.gperf"
    {"\347\227\272","痹"},
#line 2675 "zh_convert.gperf"
    {"\347\201\251","滟"},
#line 1495 "zh_convert.gperf"
    {"\350\227\272","蔺"},
#line 2039 "zh_convert.gperf"
    {"\345\270\254","裙"},
#line 1823 "zh_convert.gperf"
    {"\346\277\203","浓"},
#line 1571 "zh_convert.gperf"
    {"\351\270\225","鸬"},
#line 198 "zh_convert.gperf"
    {"\346\270\254","测"},
#line 2242 "zh_convert.gperf"
    {"\350\227\252","薮"},
#line 1022 "zh_convert.gperf"
    {"\351\211\200","钾"},
#line 338 "zh_convert.gperf"
    {"\347\211\200","床"},
#line 438 "zh_convert.gperf"
    {"\351\204\247","邓"},
#line 1368 "zh_convert.gperf"
    {"\347\272\215","累"},
#line 2892 "zh_convert.gperf"
    {"\350\272\215","跃"},
#line 3044 "zh_convert.gperf"
    {"\345\237\267","执"},
#line 777 "zh_convert.gperf"
    {"\345\273\243","广"},
#line 3084 "zh_convert.gperf"
    {"\350\273\270","轴"},
#line 958 "zh_convert.gperf"
    {"\351\221\212","镬"},
#line 2142 "zh_convert.gperf"
    {"\345\254\270","婶"},
#line 2928 "zh_convert.gperf"
    {"\346\232\253","暂"},
#line 873 "zh_convert.gperf"
    {"\346\273\270","浒"},
#line 1493 "zh_convert.gperf"
    {"\346\252\201","檩"},
#line 534 "zh_convert.gperf"
    {"\351\210\215","钝"},
#line 473 "zh_convert.gperf"
    {"\347\226\212","叠"},
#line 3037 "zh_convert.gperf"
    {"\350\250\274","证"},
#line 2220 "zh_convert.gperf"
    {"\347\210\215","烁"},
#line 1004 "zh_convert.gperf"
    {"\351\251\245","骥"},
#line 996 "zh_convert.gperf"
    {"\350\226\212","蓟"},
#line 2915 "zh_convert.gperf"
    {"\345\270\200","匝"},
#line 994 "zh_convert.gperf"
    {"\347\271\253","系"},
#line 1684 "zh_convert.gperf"
    {"\350\254\216","谜"},
#line 3070 "zh_convert.gperf"
    {"\350\274\212","轾"},
#line 2103 "zh_convert.gperf"
    {"\351\257\212","鲨"},
#line 1978 "zh_convert.gperf"
    {"\351\231\227","峭"},
#line 1292 "zh_convert.gperf"
    {"\351\227\232","窥"},
#line 2598 "zh_convert.gperf"
    {"\345\213\227","勖"},
#line 57 "zh_convert.gperf"
    {"\345\271\253","帮"},
#line 2578 "zh_convert.gperf"
    {"\346\273\216","荥"},
#line 155 "zh_convert.gperf"
    {"\351\211\242","钵"},
#line 1147 "zh_convert.gperf"
    {"\351\200\262","进"},
#line 1458 "zh_convert.gperf"
    {"\347\200\262","潋"},
#line 2447 "zh_convert.gperf"
    {"\345\227\232","呜"},
#line 1958 "zh_convert.gperf"
    {"\350\211\242","樯"},
#line 2437 "zh_convert.gperf"
    {"\347\251\251","稳"},
#line 513 "zh_convert.gperf"
    {"\351\273\267","黩"},
#line 2164 "zh_convert.gperf"
    {"\350\251\251","诗"},
#line 564 "zh_convert.gperf"
    {"\351\241\216","颚"},
#line 395 "zh_convert.gperf"
    {"\351\237\203","鞑"},
#line 2271 "zh_convert.gperf"
    {"\347\211\240","它"},
#line 1285 "zh_convert.gperf"
    {"\347\272\212","纩"},
#line 306 "zh_convert.gperf"
    {"\350\272\212","踌"},
#line 1973 "zh_convert.gperf"
    {"\350\255\231","谯"},
#line 1575 "zh_convert.gperf"
    {"\346\273\267","卤"},
#line 3127 "zh_convert.gperf"
    {"\350\243\235","装"},
#line 2620 "zh_convert.gperf"
    {"\351\211\211","铉"},
#line 1805 "zh_convert.gperf"
    {"\350\201\266","聂"},
#line 67 "zh_convert.gperf"
    {"\351\264\207","鸨"},
#line 700 "zh_convert.gperf"
    {"\347\264\207","纥"},
#line 1179 "zh_convert.gperf"
    {"\350\210\212","旧"},
#line 703 "zh_convert.gperf"
    {"\351\264\277","鸽"},
#line 399 "zh_convert.gperf"
    {"\347\264\277","绐"},
#line 1282 "zh_convert.gperf"
    {"\345\243\231","圹"},
#line 886 "zh_convert.gperf"
    {"\350\255\201","哗"},
#line 1582 "zh_convert.gperf"
    {"\345\211\271","戮"},
#line 2610 "zh_convert.gperf"
    {"\350\227\274","萱"},
#line 1738 "zh_convert.gperf"
    {"\347\204\241","无"},
#line 2962 "zh_convert.gperf"
    {"\351\213\245","锃"},
#line 1143 "zh_convert.gperf"
    {"\347\270\211","缙"},
#line 2635 "zh_convert.gperf"
    {"\347\213\245","徇"},
#line 2196 "zh_convert.gperf"
    {"\346\250\236","枢"},
#line 908 "zh_convert.gperf"
    {"\351\273\203","黄"},
#line 3030 "zh_convert.gperf"
    {"\347\231\245","症"},
#line 1869 "zh_convert.gperf"
    {"\347\270\271","缥"},
#line 1618 "zh_convert.gperf"
    {"\351\250\276","骡"},
#line 1802 "zh_convert.gperf"
    {"\345\232\231","啮"},
#line 1822 "zh_convert.gperf"
    {"\345\231\245","哝"},
#line 487 "zh_convert.gperf"
    {"\345\264\254","岽"},
#line 713 "zh_convert.gperf"
    {"\344\272\231","亘"},
#line 2379 "zh_convert.gperf"
    {"\351\264\225","鸵"},
#line 871 "zh_convert.gperf"
    {"\351\254\215","胡"},
#line 1862 "zh_convert.gperf"
    {"\347\264\225","纰"},
#line 1325 "zh_convert.gperf"
    {"\347\231\251","癞"},
#line 1219 "zh_convert.gperf"
    {"\350\273\215","军"},
#line 587 "zh_convert.gperf"
    {"\347\271\231","翻"},
#line 2947 "zh_convert.gperf"
    {"\347\232\201","皂"},
#line 2821 "zh_convert.gperf"
    {"\351\204\230","墉"},
#line 3096 "zh_convert.gperf"
    {"\347\241\203","朱"},
#line 1752 "zh_convert.gperf"
    {"\345\271\231","幕"},
#line 2851 "zh_convert.gperf"
    {"\344\277\201","俣"},
#line 303 "zh_convert.gperf"
    {"\350\251\266","酬"},
#line 653 "zh_convert.gperf"
    {"\350\244\207","复"},
#line 2240 "zh_convert.gperf"
    {"\351\244\277","馊"},
#line 1131 "zh_convert.gperf"
    {"\345\204\230","尽"},
#line 672 "zh_convert.gperf"
    {"\344\272\201","乾"},
#line 549 "zh_convert.gperf"
    {"\351\241\215","额"},
#line 720 "zh_convert.gperf"
    {"\346\201\206","恒"},
#line 993 "zh_convert.gperf"
    {"\347\264\200","纪"},
#line 823 "zh_convert.gperf"
    {"\351\240\207","顸"},
#line 665 "zh_convert.gperf"
    {"\350\263\205","赅"},
#line 446 "zh_convert.gperf"
    {"\347\211\264","抵"},
#line 272 "zh_convert.gperf"
    {"\344\271\227","乘"},
#line 826 "zh_convert.gperf"
    {"\351\227\236","阚"},
#line 1226 "zh_convert.gperf"
    {"\345\211\264","剀"},
#line 2687 "zh_convert.gperf"
    {"\351\207\205","酽"},
#line 868 "zh_convert.gperf"
    {"\351\244\254","糊"},
#line 1045 "zh_convert.gperf"
    {"\345\240\277","碱"},
#line 591 "zh_convert.gperf"
    {"\347\244\254","矾"},
#line 910 "zh_convert.gperf"
    {"\350\254\212","谎"},
#line 252 "zh_convert.gperf"
    {"\350\273\212","车"},
#line 1927 "zh_convert.gperf"
    {"\347\270\264","纤"},
#line 544 "zh_convert.gperf"
    {"\347\227\276","疴"},
#line 1064 "zh_convert.gperf"
    {"\346\252\273","槛"},
#line 2828 "zh_convert.gperf"
    {"\350\270\264","踊"},
#line 1335 "zh_convert.gperf"
    {"\347\200\276","澜"},
#line 2024 "zh_convert.gperf"
    {"\346\254\212","权"},
#line 346 "zh_convert.gperf"
    {"\346\227\276","春"},
#line 1522 "zh_convert.gperf"
    {"\351\213\266","锍"},
#line 3024 "zh_convert.gperf"
    {"\345\264\242","峥"},
#line 448 "zh_convert.gperf"
    {"\350\251\206","诋"},
#line 1725 "zh_convert.gperf"
    {"\350\241\212","蔑"},
#line 576 "zh_convert.gperf"
    {"\351\211\272","铒"},
#line 1273 "zh_convert.gperf"
    {"\345\241\212","块"},
#line 1456 "zh_convert.gperf"
    {"\346\255\233","敛"},
#line 1586 "zh_convert.gperf"
    {"\350\274\205","辂"},
#line 486 "zh_convert.gperf"
    {"\345\264\240","岽"},
#line 2190 "zh_convert.gperf"
    {"\345\244\200","寿"},
#line 3092 "zh_convert.gperf"
    {"\351\251\237","骤"},
#line 1577 "zh_convert.gperf"
    {"\350\211\252","橹"},
#line 2393 "zh_convert.gperf"
    {"\346\244\200","碗"},
#line 607 "zh_convert.gperf"
    {"\351\243\233","飞"},
#line 2641 "zh_convert.gperf"
    {"\351\264\211","鸦"},
#line 2051 "zh_convert.gperf"
    {"\347\264\211","纫"},
#line 963 "zh_convert.gperf"
    {"\346\251\237","机"},
#line 1850 "zh_convert.gperf"
    {"\351\272\205","狍"},
#line 854 "zh_convert.gperf"
    {"\350\250\214","讧"},
#line 1230 "zh_convert.gperf"
    {"\351\215\207","锴"},
#line 2127 "zh_convert.gperf"
    {"\347\264\271","绍"},
#line 2451 "zh_convert.gperf"
    {"\350\252\243","诬"},
#line 1749 "zh_convert.gperf"
    {"\345\272\205","么"},
#line 1001 "zh_convert.gperf"
    {"\351\232\233","际"},
#line 1956 "zh_convert.gperf"
    {"\346\252\243","樯"},
#line 1815 "zh_convert.gperf"
    {"\346\252\270","柠"},
#line 1710 "zh_convert.gperf"
    {"\344\277\233","俯"},
#line 2893 "zh_convert.gperf"
    {"\351\210\205","钥"},
#line 656 "zh_convert.gperf"
    {"\350\263\246","赋"},
#line 1696 "zh_convert.gperf"
    {"\345\244\242","梦"},
#line 1521 "zh_convert.gperf"
    {"\351\211\232","铆"},
#line 1967 "zh_convert.gperf"
    {"\351\215\254","锹"},
#line 1775 "zh_convert.gperf"
    {"\350\205\246","脑"},
#line 1265 "zh_convert.gperf"
    {"\351\207\246","扣"},
#line 185 "zh_convert.gperf"
    {"\347\207\246","灿"},
#line 731 "zh_convert.gperf"
    {"\345\244\240","够"},
#line 2600 "zh_convert.gperf"
    {"\345\243\273","婿"},
#line 322 "zh_convert.gperf"
    {"\345\207\246","处"},
#line 1360 "zh_convert.gperf"
    {"\347\231\206","痨"},
#line 2533 "zh_convert.gperf"
    {"\351\244\211","饷"},
#line 1484 "zh_convert.gperf"
    {"\350\207\250","临"},
#line 1148 "zh_convert.gperf"
    {"\351\213\237","锓"},
#line 2802 "zh_convert.gperf"
    {"\351\270\232","鹦"},
#line 3043 "zh_convert.gperf"
    {"\351\232\273","只"},
#line 2314 "zh_convert.gperf"
    {"\347\270\232","绦"},
#line 315 "zh_convert.gperf"
    {"\346\207\250","恹"},
#line 2308 "zh_convert.gperf"
    {"\351\244\271","糖"},
#line 1367 "zh_convert.gperf"
    {"\347\270\262","缧"},
#line 1342 "zh_convert.gperf"
    {"\351\227\214","阑"},
#line 126 "zh_convert.gperf"
    {"\347\231\237","瘪"},
#line 2540 "zh_convert.gperf"
    {"\345\232\273","嚣"},
#line 836 "zh_convert.gperf"
    {"\350\231\237","号"},
#line 378 "zh_convert.gperf"
    {"\350\266\250","趋"},
#line 2417 "zh_convert.gperf"
    {"\350\221\246","苇"},
#line 434 "zh_convert.gperf"
    {"\351\215\200","锝"},
#line 3147 "zh_convert.gperf"
    {"\347\267\207","缁"},
#line 1067 "zh_convert.gperf"
    {"\350\226\246","荐"},
#line 1528 "zh_convert.gperf"
    {"\347\200\247","泷"},
#line 2370 "zh_convert.gperf"
    {"\351\240\271","颓"},
#line 2656 "zh_convert.gperf"
    {"\345\226\246","岩"},
#line 787 "zh_convert.gperf"
    {"\351\226\250","闺"},
#line 1792 "zh_convert.gperf"
    {"\350\274\246","辇"},
#line 1836 "zh_convert.gperf"
    {"\345\215\200","区"},
#line 955 "zh_convert.gperf"
    {"\347\251\253","获"},
#line 2623 "zh_convert.gperf"
    {"\345\255\270","学"},
#line 209 "zh_convert.gperf"
    {"\350\251\253","诧"},
#line 2438 "zh_convert.gperf"
    {"\350\204\227","吻"},
#line 782 "zh_convert.gperf"
    {"\346\255\270","归"},
#line 2167 "zh_convert.gperf"
    {"\345\257\246","实"},
#line 1154 "zh_convert.gperf"
    {"\351\257\250","鲸"},
#line 347 "zh_convert.gperf"
    {"\346\271\273","淳"},
#line 850 "zh_convert.gperf"
    {"\346\251\253","横"},
#line 1468 "zh_convert.gperf"
    {"\351\255\216","魉"},
#line 260 "zh_convert.gperf"
    {"\347\243\243","碜"},
#line 2276 "zh_convert.gperf"
    {"\351\201\235","沓"},
#line 839 "zh_convert.gperf"
    {"\347\201\235","灏"},
#line 1215 "zh_convert.gperf"
    {"\350\255\216","谲"},
#line 1712 "zh_convert.gperf"
    {"\347\267\254","缅"},
#line 3176 "zh_convert.gperf"
    {"\350\272\246","躜"},
#line 2302 "zh_convert.gperf"
    {"\346\255\216","叹"},
#line 2712 "zh_convert.gperf"
    {"\351\201\231","遥"},
#line 1487 "zh_convert.gperf"
    {"\351\232\243","邻"},
#line 2836 "zh_convert.gperf"
    {"\351\255\267","鱿"},
#line 2285 "zh_convert.gperf"
    {"\351\210\246","钛"},
#line 2052 "zh_convert.gperf"
    {"\350\252\215","认"},
#line 3082 "zh_convert.gperf"
    {"\350\254\205","诌"},
#line 1431 "zh_convert.gperf"
    {"\351\232\270","隶"},
#line 1218 "zh_convert.gperf"
    {"\347\232\270","皲"},
#line 878 "zh_convert.gperf"
    {"\350\255\267","护"},
#line 680 "zh_convert.gperf"
    {"\347\264\272","绀"},
#line 2628 "zh_convert.gperf"
    {"\345\243\216","埙"},
#line 1724 "zh_convert.gperf"
    {"\346\273\205","灭"},
#line 1117 "zh_convert.gperf"
    {"\345\210\246","劫"},
#line 1413 "zh_convert.gperf"
    {"\346\255\267","历"},
#line 1000 "zh_convert.gperf"
    {"\350\250\230","记"},
#line 361 "zh_convert.gperf"
    {"\351\267\200","鹚"},
#line 1115 "zh_convert.gperf"
    {"\351\232\216","阶"},
#line 1664 "zh_convert.gperf"
    {"\350\271\243","蹒"},
#line 2894 "zh_convert.gperf"
    {"\351\211\236","钺"},
#line 93 "zh_convert.gperf"
    {"\345\271\243","币"},
#line 1731 "zh_convert.gperf"
    {"\346\271\243","愍"},
#line 2817 "zh_convert.gperf"
    {"\346\232\216","映"},
#line 239 "zh_convert.gperf"
    {"\345\240\264","场"},
#line 633 "zh_convert.gperf"
    {"\351\263\263","凤"},
#line 230 "zh_convert.gperf"
    {"\351\227\241","阐"},
#line 2786 "zh_convert.gperf"
    {"\347\270\257","演"},
#line 1430 "zh_convert.gperf"
    {"\351\232\267","隶"},
#line 2599 "zh_convert.gperf"
    {"\345\215\271","恤"},
#line 317 "zh_convert.gperf"
    {"\350\200\241","锄"},
#line 743 "zh_convert.gperf"
    {"\347\232\267","鼓"},
#line 747 "zh_convert.gperf"
    {"\350\263\210","贾"},
#line 1103 "zh_convert.gperf"
    {"\350\205\263","脚"},
#line 1428 "zh_convert.gperf"
    {"\351\205\210","郦"},
#line 1597 "zh_convert.gperf"
    {"\351\270\236","鸾"},
#line 2584 "zh_convert.gperf"
    {"\350\204\251","修"},
#line 695 "zh_convert.gperf"
    {"\347\270\236","缟"},
#line 1923 "zh_convert.gperf"
    {"\346\205\263","悭"},
#line 1435 "zh_convert.gperf"
    {"\344\272\267","廉"},
#line 1794 "zh_convert.gperf"
    {"\345\255\203","娘"},
#line 985 "zh_convert.gperf"
    {"\347\264\232","级"},
#line 435 "zh_convert.gperf"
    {"\347\207\210","灯"},
#line 2568 "zh_convert.gperf"
    {"\347\264\262","绁"},
#line 2265 "zh_convert.gperf"
    {"\347\255\215","笋"},
#line 1418 "zh_convert.gperf"
    {"\347\244\252","砺"},
#line 87 "zh_convert.gperf"
    {"\347\266\263","绷"},
#line 2368 "zh_convert.gperf"
    {"\347\263\260","团"},
#line 1870 "zh_convert.gperf"
    {"\351\243\203","飘"},
#line 969 "zh_convert.gperf"
    {"\347\270\276","绩"},
#line 449 "zh_convert.gperf"
    {"\347\267\240","缔"},
#line 151 "zh_convert.gperf"
    {"\345\271\267","并"},
#line 2327 "zh_convert.gperf"
    {"\347\266\210","绨"},
#line 39 "zh_convert.gperf"
    {"\351\251\201","骜"},
#line 1560 "zh_convert.gperf"
    {"\347\200\230","泸"},
#line 947 "zh_convert.gperf"
    {"\346\270\276","浑"},
#line 1376 "zh_convert.gperf"
    {"\346\243\203","梨"},
#line 746 "zh_convert.gperf"
    {"\350\251\201","诂"},
#line 1544 "zh_convert.gperf"
    {"\345\251\201","娄"},
#line 1261 "zh_convert.gperf"
    {"\346\221\263","抠"},
#line 498 "zh_convert.gperf"
    {"\351\254\246","斗"},
#line 375 "zh_convert.gperf"
    {"\350\274\263","辏"},
#line 128 "zh_convert.gperf"
    {"\351\274\210","鳖"},
#line 942 "zh_convert.gperf"
    {"\350\226\210","荟"},
#line 1158 "zh_convert.gperf"
    {"\345\274\263","弪"},
#line 99 "zh_convert.gperf"
    {"\347\257\263","筚"},
#line 2800 "zh_convert.gperf"
    {"\351\267\271","鹰"},
#line 2395 "zh_convert.gperf"
    {"\347\266\260","绾"},
#line 858 "zh_convert.gperf"
    {"\351\254\250","哄"},
#line 421 "zh_convert.gperf"
    {"\351\273\250","党"},
#line 2328 "zh_convert.gperf"
    {"\347\267\271","缇"},
#line 1600 "zh_convert.gperf"
    {"\351\213\235","锊"},
#line 641 "zh_convert.gperf"
    {"\347\264\274","绋"},
#line 1740 "zh_convert.gperf"
    {"\350\254\250","谟"},
#line 2719 "zh_convert.gperf"
    {"\351\221\260","钥"},
#line 1132 "zh_convert.gperf"
    {"\345\267\271","卺"},
#line 2112 "zh_convert.gperf"
    {"\351\231\235","陕"},
#line 2713 "zh_convert.gperf"
    {"\351\244\232","肴"},
#line 2153 "zh_convert.gperf"
    {"\345\213\235","胜"},
#line 1974 "zh_convert.gperf"
    {"\351\241\246","憔"},
#line 722 "zh_convert.gperf"
    {"\350\272\263","躬"},
#line 88 "zh_convert.gperf"
    {"\347\271\203","绷"},
#line 2222 "zh_convert.gperf"
    {"\345\231\235","咝"},
#line 2558 "zh_convert.gperf"
    {"\347\272\210","缬"},
#line 1269 "zh_convert.gperf"
    {"\350\244\262","裤"},
#line 3087 "zh_convert.gperf"
    {"\346\231\235","昼"},
#line 2404 "zh_convert.gperf"
    {"\345\271\203","帏"},
#line 1276 "zh_convert.gperf"
    {"\351\204\266","郐"},
#line 1789 "zh_convert.gperf"
    {"\351\257\260","鲶"},
#line 2462 "zh_convert.gperf"
    {"\345\213\231","务"},
#line 251 "zh_convert.gperf"
    {"\347\241\250","砗"},
#line 783 "zh_convert.gperf"
    {"\346\272\210","沩"},
#line 1247 "zh_convert.gperf"
    {"\351\210\263","钶"},
#line 1852 "zh_convert.gperf"
    {"\347\240\262","炮"},
#line 166 "zh_convert.gperf"
    {"\351\210\210","钚"},
#line 1799 "zh_convert.gperf"
    {"\350\243\212","袅"},
#line 1634 "zh_convert.gperf"
    {"\351\213\201","铝"},
#line 2577 "zh_convert.gperf"
    {"\350\210\210","兴"},
#line 1902 "zh_convert.gperf"
    {"\346\243\212","棋"},
#line 2406 "zh_convert.gperf"
    {"\346\277\260","潍"},
#line 2332 "zh_convert.gperf"
    {"\350\272\260","体"},
#line 2938 "zh_convert.gperf"
    {"\351\215\272","锗"},
#line 1139 "zh_convert.gperf"
    {"\345\213\201","劲"},
#line 2272 "zh_convert.gperf"
    {"\347\215\272","獭"},
#line 528 "zh_convert.gperf"
    {"\351\232\212","队"},
#line 573 "zh_convert.gperf"
    {"\351\264\257","鸸"},
#line 1274 "zh_convert.gperf"
    {"\347\215\252","狯"},
#line 2483 "zh_convert.gperf"
    {"\351\244\274","饩"},
#line 2463 "zh_convert.gperf"
    {"\345\231\201","恶"},
#line 2187 "zh_convert.gperf"
    {"\351\210\260","铈"},
#line 2506 "zh_convert.gperf"
    {"\351\267\264","鹇"},
#line 1460 "zh_convert.gperf"
    {"\347\267\264","练"},
#line 2186 "zh_convert.gperf"
    {"\351\207\213","释"},
#line 173 "zh_convert.gperf"
    {"\350\267\264","踩"},
#line 2985 "zh_convert.gperf"
    {"\346\210\260","战"},
#line 2284 "zh_convert.gperf"
    {"\346\205\213","态"},
#line 879 "zh_convert.gperf"
    {"\351\270\214","鹱"},
#line 2373 "zh_convert.gperf"
    {"\350\207\213","臀"},
#line 1867 "zh_convert.gperf"
    {"\351\250\227","骗"},
#line 1236 "zh_convert.gperf"
    {"\345\237\263","坎"},
#line 2773 "zh_convert.gperf"
    {"\351\251\233","驿"},
#line 2377 "zh_convert.gperf"
    {"\350\250\227","托"},
#line 2910 "zh_convert.gperf"
    {"\351\204\206","郓"},
#line 808 "zh_convert.gperf"
    {"\350\237\210","蝈"},
#line 2315 "zh_convert.gperf"
    {"\347\270\247","绦"},
#line 1382 "zh_convert.gperf"
    {"\347\261\254","篱"},
#line 374 "zh_convert.gperf"
    {"\346\271\212","凑"},
#line 3175 "zh_convert.gperf"
    {"\350\251\233","诅"},
#line 3099 "zh_convert.gperf"
    {"\350\261\254","猪"},
#line 2202 "zh_convert.gperf"
    {"\345\261\254","属"},
#line 2415 "zh_convert.gperf"
    {"\347\221\213","玮"},
#line 1224 "zh_convert.gperf"
    {"\351\226\213","开"},
#line 2964 "zh_convert.gperf"
    {"\351\275\207","齄"},
#line 3180 "zh_convert.gperf"
    {"\347\275\207","樽"},
#line 953 "zh_convert.gperf"
    {"\347\215\262","获"},
#line 236 "zh_convert.gperf"
    {"\345\204\237","偿"},
#line 3097 "zh_convert.gperf"
    {"\350\252\205","诛"},
#line 174 "zh_convert.gperf"
    {"\345\237\260","采"},
#line 1589 "zh_convert.gperf"
    {"\351\267\272","鹭"},
#line 1981 "zh_convert.gperf"
    {"\347\257\213","箧"},
#line 1202 "zh_convert.gperf"
    {"\346\215\262","卷"},
#line 639 "zh_convert.gperf"
    {"\345\275\277","佛"},
#line 1078 "zh_convert.gperf"
    {"\351\244\236","饯"},
#line 2405 "zh_convert.gperf"
    {"\346\275\277","涠"},
#line 1843 "zh_convert.gperf"
    {"\350\254\263","讴"},
#line 2390 "zh_convert.gperf"
    {"\347\201\243","湾"},
#line 1031 "zh_convert.gperf"
    {"\346\267\272","浅"},
#line 2617 "zh_convert.gperf"
    {"\351\201\270","选"},
#line 2348 "zh_convert.gperf"
    {"\345\273\263","厅"},
#line 1606 "zh_convert.gperf"
    {"\346\267\252","沦"},
#line 2856 "zh_convert.gperf"
    {"\351\275\254","龉"},
#line 2705 "zh_convert.gperf"
    {"\345\240\257","尧"},
#line 2044 "zh_convert.gperf"
    {"\345\254\210","娆"},
#line 2104 "zh_convert.gperf"
    {"\345\273\210","厦"},
#line 975 "zh_convert.gperf"
    {"\350\272\213","跻"},
#line 2356 "zh_convert.gperf"
    {"\345\201\270","偷"},
#line 1516 "zh_convert.gperf"
    {"\351\244\276","馏"},
#line 1810 "zh_convert.gperf"
    {"\351\241\263","颞"},
#line 809 "zh_convert.gperf"
    {"\351\201\216","过"},
#line 1759 "zh_convert.gperf"
    {"\350\250\245","讷"},
#line 3017 "zh_convert.gperf"
    {"\351\215\274","针"},
#line 2128 "zh_convert.gperf"
    {"\350\263\222","赊"},
#line 1008 "zh_convert.gperf"
    {"\345\244\276","夹"},
#line 1700 "zh_convert.gperf"
    {"\347\215\274","猕"},
#line 2414 "zh_convert.gperf"
    {"\347\205\222","炜"},
#line 2626 "zh_convert.gperf"
    {"\345\213\233","勋"},
#line 286 "zh_convert.gperf"
    {"\346\211\241","扦"},
#line 141 "zh_convert.gperf"
    {"\350\207\217","膑"},
#line 2791 "zh_convert.gperf"
    {"\345\254\260","婴"},
#line 2592 "zh_convert.gperf"
    {"\350\231\233","虚"},
#line 571 "zh_convert.gperf"
    {"\345\205\222","儿"},
#line 2126 "zh_convert.gperf"
    {"\347\207\222","烧"},
#line 956 "zh_convert.gperf"
    {"\350\207\222","癯"},
#line 1475 "zh_convert.gperf"
    {"\351\267\232","鹨"},
#line 931 "zh_convert.gperf"
    {"\350\263\204","贿"},
#line 1443 "zh_convert.gperf"
    {"\347\261\242","奁"},
#line 1931 "zh_convert.gperf"
    {"\351\201\267","迁"},
#line 2519 "zh_convert.gperf"
    {"\347\267\232","线"},
#line 1180 "zh_convert.gperf"
    {"\351\267\262","鹫"},
#line 2254 "zh_convert.gperf"
    {"\347\266\217","绥"},
#line 2026 "zh_convert.gperf"
    {"\350\270\241","蜷"},
#line 1719 "zh_convert.gperf"
    {"\347\267\262","缈"},
#line 1630 "zh_convert.gperf"
    {"\345\261\242","屡"},
#line 3047 "zh_convert.gperf"
    {"\350\201\267","职"},
#line 1876 "zh_convert.gperf"
    {"\351\241\260","颦"},
#line 1531 "zh_convert.gperf"
    {"\347\261\240","笼"},
#line 1372 "zh_convert.gperf"
    {"\346\267\232","泪"},
#line 2676 "zh_convert.gperf"
    {"\347\207\204","焰"},
#line 1407 "zh_convert.gperf"
    {"\346\205\204","栗"},
#line 2076 "zh_convert.gperf"
    {"\351\226\217","闰"},
#line 508 "zh_convert.gperf"
    {"\347\211\230","牍"},
#line 1076 "zh_convert.gperf"
    {"\351\221\222","鉴"},
#line 2766 "zh_convert.gperf"
    {"\350\251\243","诣"},
#line 1073 "zh_convert.gperf"
    {"\351\213\273","鉴"},
#line 1077 "zh_convert.gperf"
    {"\351\226\222","闲"},
#line 500 "zh_convert.gperf"
    {"\347\253\207","窦"},
#line 853 "zh_convert.gperf"
    {"\350\221\222","荭"},
#line 127 "zh_convert.gperf"
    {"\351\261\211","鳖"},
#line 2412 "zh_convert.gperf"
    {"\351\237\213","韦"},
#line 2296 "zh_convert.gperf"
    {"\350\253\207","谈"},
#line 2780 "zh_convert.gperf"
    {"\351\231\273","堙"},
#line 2376 "zh_convert.gperf"
    {"\350\204\253","脱"},
#line 2899 "zh_convert.gperf"
    {"\345\213\273","匀"},
#line 2926 "zh_convert.gperf"
    {"\345\226\222","咱"},
#line 2980 "zh_convert.gperf"
    {"\345\266\204","崭"},
#line 3006 "zh_convert.gperf"
    {"\350\274\222","辄"},
#line 3111 "zh_convert.gperf"
    {"\351\221\204","铸"},
#line 2277 "zh_convert.gperf"
    {"\351\227\245","闼"},
#line 2235 "zh_convert.gperf"
    {"\350\252\246","诵"},
#line 2816 "zh_convert.gperf"
    {"\347\251\216","颖"},
#line 25 "zh_convert.gperf"
    {"\346\231\273","暗"},
#line 2718 "zh_convert.gperf"
    {"\350\227\245","药"},
#line 1195 "zh_convert.gperf"
    {"\350\251\216","讵"},
#line 2507 "zh_convert.gperf"
    {"\351\267\274","鹇"},
#line 2473 "zh_convert.gperf"
    {"\347\277\222","习"},
#line 218 "zh_convert.gperf"
    {"\347\272\217","缠"},
#line 929 "zh_convert.gperf"
    {"\350\252\250","诲"},
#line 1427 "zh_convert.gperf"
    {"\350\275\242","轹"},
#line 1186 "zh_convert.gperf"
    {"\350\267\274","局"},
#line 624 "zh_convert.gperf"
    {"\347\201\203","沣"},
#line 2341 "zh_convert.gperf"
    {"\351\275\240","龆"},
#line 597 "zh_convert.gperf"
    {"\347\257\204","范"},
#line 85 "zh_convert.gperf"
    {"\351\200\251","奔"},
#line 1426 "zh_convert.gperf"
    {"\350\272\222","跞"},
#line 142 "zh_convert.gperf"
    {"\351\253\225","髌"},
#line 261 "zh_convert.gperf"
    {"\346\253\254","榇"},
#line 2268 "zh_convert.gperf"
    {"\345\227\251","唢"},
#line 3075 "zh_convert.gperf"
    {"\351\215\276","钟"},
#line 3171 "zh_convert.gperf"
    {"\351\250\266","驺"},
#line 2091 "zh_convert.gperf"
    {"\347\271\205","缫"},
#line 842 "zh_convert.gperf"
    {"\350\250\266","诃"},
#line 2722 "zh_convert.gperf"
    {"\351\213\243","铘"},
#line 662 "zh_convert.gperf"
    {"\350\273\213","轧"},
#line 3119 "zh_convert.gperf"
    {"\350\275\211","转"},
#line 577 "zh_convert.gperf"
    {"\351\244\214","饵"},
#line 216 "zh_convert.gperf"
    {"\345\254\213","婵"},
#line 1183 "zh_convert.gperf"
    {"\351\213\270","锯"},
#line 3022 "zh_convert.gperf"
    {"\351\231\243","阵"},
#line 959 "zh_convert.gperf"
    {"\345\213\243","绩"},
#line 2429 "zh_convert.gperf"
    {"\351\244\247","喂"},
#line 2359 "zh_convert.gperf"
    {"\351\210\204","钭"},
#line 844 "zh_convert.gperf"
    {"\347\233\207","盍"},
#line 1523 "zh_convert.gperf"
    {"\351\231\270","陆"},
#line 2031 "zh_convert.gperf"
    {"\345\213\270","劝"},
#line 2236 "zh_convert.gperf"
    {"\351\240\214","颂"},
#line 2081 "zh_convert.gperf"
    {"\351\241\213","腮"},
#line 1476 "zh_convert.gperf"
    {"\351\267\257","鹩"},
#line 2293 "zh_convert.gperf"
    {"\346\233\207","昙"},
#line 529 "zh_convert.gperf"
    {"\345\231\270","吨"},
#line 2416 "zh_convert.gperf"
    {"\347\267\257","纬"},
#line 769 "zh_convert.gperf"
    {"\347\255\246","管"},
#line 2803 "zh_convert.gperf"
    {"\345\241\213","茔"},
#line 123 "zh_convert.gperf"
    {"\351\251\203","骠"},
#line 2833 "zh_convert.gperf"
    {"\351\201\212","游"},
#line 522 "zh_convert.gperf"
    {"\347\267\236","缎"},
#line 83 "zh_convert.gperf"
    {"\347\212\207","奔"},
#line 603 "zh_convert.gperf"
    {"\347\264\241","纺"},
#line 2547 "zh_convert.gperf"
    {"\351\251\215","骁"},
#line 1191 "zh_convert.gperf"
    {"\345\212\207","剧"},
#line 920 "zh_convert.gperf"
    {"\345\233\254","回"},
#line 967 "zh_convert.gperf"
    {"\347\251\215","积"},
#line 2106 "zh_convert.gperf"
    {"\346\233\254","晒"},
#line 634 "zh_convert.gperf"
    {"\350\243\246","褒"},
#line 1904 "zh_convert.gperf"
    {"\347\253\242","俟"},
#line 924 "zh_convert.gperf"
    {"\350\233\225","蛔"},
#line 949 "zh_convert.gperf"
    {"\350\253\242","诨"},
#line 3003 "zh_convert.gperf"
    {"\350\237\204","蛰"},
#line 1423 "zh_convert.gperf"
    {"\350\227\266","苈"},
#line 92 "zh_convert.gperf"
    {"\345\227\266","哔"},
#line 2612 "zh_convert.gperf"
    {"\350\253\240","喧"},
#line 1245 "zh_convert.gperf"
    {"\351\212\254","铐"},
#line 1204 "zh_convert.gperf"
    {"\345\204\201","俊"},
#line 1391 "zh_convert.gperf"
    {"\351\261\272","鲡"},
#line 147 "zh_convert.gperf"
    {"\347\250\237","禀"},
#line 1405 "zh_convert.gperf"
    {"\345\232\246","呖"},
#line 2234 "zh_convert.gperf"
    {"\350\250\237","讼"},
#line 2256 "zh_convert.gperf"
    {"\351\232\250","随"},
#line 1359 "zh_convert.gperf"
    {"\346\276\207","涝"},
#line 2746 "zh_convert.gperf"
    {"\351\212\225","铁"},
#line 1408 "zh_convert.gperf"
    {"\346\232\246","历"},
#line 521 "zh_convert.gperf"
    {"\347\261\252","簖"},
#line 1211 "zh_convert.gperf"
    {"\346\261\272","决"},
#line 3118 "zh_convert.gperf"
    {"\345\233\200","啭"},
#line 2419 "zh_convert.gperf"
    {"\350\253\211","诿"},
#line 1525 "zh_convert.gperf"
    {"\345\232\250","咙"},
#line 1611 "zh_convert.gperf"
    {"\346\254\217","椤"},
#line 2614 "zh_convert.gperf"
    {"\350\273\222","轩"},
#line 1088 "zh_convert.gperf"
    {"\347\271\246","襁"},
#line 2523 "zh_convert.gperf"
    {"\351\244\241","馅"},
#line 888 "zh_convert.gperf"
    {"\351\251\212","骅"},
#line 1353 "zh_convert.gperf"
    {"\351\213\203","锒"},
#line 1593 "zh_convert.gperf"
    {"\346\254\222","栾"},
#line 1079 "zh_convert.gperf"
    {"\345\260\207","将"},
#line 132 "zh_convert.gperf"
    {"\346\252\263","槟"},
#line 1900 "zh_convert.gperf"
    {"\350\260\277","溪"},
#line 2664 "zh_convert.gperf"
    {"\351\241\217","颜"},
#line 1848 "zh_convert.gperf"
    {"\345\276\254","仿"},
#line 2784 "zh_convert.gperf"
    {"\351\212\200","银"},
#line 1205 "zh_convert.gperf"
    {"\347\215\247","狷"},
#line 1940 "zh_convert.gperf"
    {"\351\211\227","钳"},
#line 1234 "zh_convert.gperf"
    {"\351\276\225","龛"},
#line 2322 "zh_convert.gperf"
    {"\350\254\204","誊"},
#line 1125 "zh_convert.gperf"
    {"\351\240\241","颉"},
#line 1176 "zh_convert.gperf"
    {"\345\273\204","厩"},
#line 1227 "zh_convert.gperf"
    {"\345\241\217","垲"},
#line 1334 "zh_convert.gperf"
    {"\346\254\204","栏"},
#line 188 "zh_convert.gperf"
    {"\346\273\204","沧"},
#line 54 "zh_convert.gperf"
    {"\351\227\206","板"},
#line 2166 "zh_convert.gperf"
    {"\345\241\222","埘"},
#line 1389 "zh_convert.gperf"
    {"\351\233\242","离"},
#line 2709 "zh_convert.gperf"
    {"\347\252\260","窑"},
#line 507 "zh_convert.gperf"
    {"\347\200\206","渎"},
#line 2138 "zh_convert.gperf"
    {"\350\252\260","谁"},
#line 356 "zh_convert.gperf"
    {"\351\275\252","龊"},
#line 1947 "zh_convert.gperf"
    {"\345\227\206","呛"},
#line 309 "zh_convert.gperf"
    {"\351\233\240","仇"},
#line 1434 "zh_convert.gperf"
    {"\345\200\206","俩"},
#line 2648 "zh_convert.gperf"
    {"\346\260\254","氩"},
#line 2591 "zh_convert.gperf"
    {"\347\261\262","吁"},
#line 2849 "zh_convert.gperf"
    {"\351\244\230","余"},
#line 2449 "zh_convert.gperf"
    {"\346\261\232","污"},
#line 2954 "zh_convert.gperf"
    {"\346\223\207","择"},
#line 2542 "zh_convert.gperf"
    {"\347\200\237","潇"},
#line 1283 "zh_convert.gperf"
    {"\346\233\240","旷"},
#line 1673 "zh_convert.gperf"
    {"\345\244\230","帽"},
#line 2096 "zh_convert.gperf"
    {"\346\276\200","涩"},
#line 1508 "zh_convert.gperf"
    {"\351\240\230","领"},
#line 509 "zh_convert.gperf"
    {"\347\212\242","犊"},
#line 137 "zh_convert.gperf"
    {"\350\263\224","宾"},
#line 1362 "zh_convert.gperf"
    {"\351\212\240","铑"},
#line 273 "zh_convert.gperf"
    {"\345\240\230","塍"},
#line 1296 "zh_convert.gperf"
    {"\347\260\200","箦"},
#line 2548 "zh_convert.gperf"
    {"\346\233\211","晓"},
#line 1935 "zh_convert.gperf"
    {"\351\250\253","骞"},
#line 2752 "zh_convert.gperf"
    {"\351\207\224","钇"},
#line 1680 "zh_convert.gperf"
    {"\351\216\207","镅"},
#line 1785 "zh_convert.gperf"
    {"\346\223\254","拟"},
#line 1757 "zh_convert.gperf"
    {"\351\216\277","镎"},
#line 1163 "zh_convert.gperf"
    {"\350\204\233","胫"},
#line 2020 "zh_convert.gperf"
    {"\351\275\262","龋"},
#line 2246 "zh_convert.gperf"
    {"\350\230\207","苏"},
#line 2061 "zh_convert.gperf"
    {"\347\276\242","绒"},
#line 2556 "zh_convert.gperf"
    {"\346\223\225","携"},
#line 17 "zh_convert.gperf"
    {"\346\204\233","爱"},
#line 1317 "zh_convert.gperf"
    {"\350\276\242","辣"},
#line 122 "zh_convert.gperf"
    {"\351\243\210","飚"},
#line 2149 "zh_convert.gperf"
    {"\346\230\207","升"},
#line 1614 "zh_convert.gperf"
    {"\350\230\277","萝"},
#line 2589 "zh_convert.gperf"
    {"\351\212\271","锈"},
#line 1509 "zh_convert.gperf"
    {"\345\212\211","刘"},
#line 3179 "zh_convert.gperf"
    {"\350\276\240","罪"},
#line 208 "zh_convert.gperf"
    {"\351\221\224","镲"},
#line 2768 "zh_convert.gperf"
    {"\350\255\260","议"},
#line 1320 "zh_convert.gperf"
    {"\345\276\240","徕"},
#line 2551 "zh_convert.gperf"
    {"\345\212\271","效"},
#line 696 "zh_convert.gperf"
    {"\351\216\254","镐"},
#line 1732 "zh_convert.gperf"
    {"\351\226\224","闵"},
#line 1711 "zh_convert.gperf"
    {"\346\276\240","渑"},
#line 2262 "zh_convert.gperf"
    {"\350\223\200","荪"},
#line 1260 "zh_convert.gperf"
    {"\351\230\254","坑"},
#line 2212 "zh_convert.gperf"
    {"\345\270\245","帅"},
#line 1959 "zh_convert.gperf"
    {"\350\226\224","蔷"},
#line 2093 "zh_convert.gperf"
    {"\351\260\240","鳋"},
#line 1266 "zh_convert.gperf"
    {"\345\232\263","喾"},
#line 648 "zh_convert.gperf"
    {"\350\274\224","辅"},
#line 3154 "zh_convert.gperf"
    {"\351\257\224","鲻"},
#line 585 "zh_convert.gperf"
    {"\351\253\252","发"},
#line 465 "zh_convert.gperf"
    {"\345\274\224","吊"},
#line 2679 "zh_convert.gperf"
    {"\350\253\272","谚"},
#line 944 "zh_convert.gperf"
    {"\346\230\254","昏"},
#line 2209 "zh_convert.gperf"
    {"\347\253\252","竖"},
#line 2498 "zh_convert.gperf"
    {"\345\253\272","娴"},
#line 2897 "zh_convert.gperf"
    {"\346\232\210","晕"},
#line 1498 "zh_convert.gperf"
    {"\346\253\272","棂"},
#line 2309 "zh_convert.gperf"
    {"\345\204\273","傥"},
#line 254 "zh_convert.gperf"
    {"\345\276\271","彻"},
#line 1411 "zh_convert.gperf"
    {"\346\253\252","枥"},
#line 1021 "zh_convert.gperf"
    {"\347\271\263","缴"},
#line 2968 "zh_convert.gperf"
    {"\351\215\230","铡"},
#line 907 "zh_convert.gperf"
    {"\351\260\211","鳇"},
#line 96 "zh_convert.gperf"
    {"\347\215\230","弊"},
#line 167 "zh_convert.gperf"
    {"\347\272\224","才"},
#line 1960 "zh_convert.gperf"
    {"\347\271\210","襁"},
#line 1851 "zh_convert.gperf"
    {"\347\232\260","疱"},
#line 1042 "zh_convert.gperf"
    {"\351\260\271","鲣"},
#line 1612 "zh_convert.gperf"
    {"\347\216\200","猡"},
#line 1603 "zh_convert.gperf"
    {"\345\200\253","伦"},
#line 2469 "zh_convert.gperf"
    {"\345\216\200","膝"},
#line 2649 "zh_convert.gperf"
    {"\350\250\235","讶"},
#line 1539 "zh_convert.gperf"
    {"\345\223\242","咔"},
#line 249 "zh_convert.gperf"
    {"\351\210\224","钞"},
#line 422 "zh_convert.gperf"
    {"\346\260\271","凼"},
#line 2101 "zh_convert.gperf"
    {"\347\264\227","纱"},
#line 1868 "zh_convert.gperf"
    {"\351\250\231","骗"},
#line 2685 "zh_convert.gperf"
    {"\350\264\227","赝"},
#line 1728 "zh_convert.gperf"
    {"\347\267\241","缗"},
#line 1964 "zh_convert.gperf"
    {"\347\271\260","缲"},
#line 684 "zh_convert.gperf"
    {"\345\264\227","岗"},
#line 988 "zh_convert.gperf"
    {"\346\223\240","挤"},
#line 973 "zh_convert.gperf"
    {"\350\267\241","迹"},
#line 1029 "zh_convert.gperf"
    {"\346\210\224","戋"},
#line 2017 "zh_convert.gperf"
    {"\351\251\205","驱"},
#line 3108 "zh_convert.gperf"
    {"\347\253\232","伫"},
#line 1238 "zh_convert.gperf"
    {"\347\251\205","糠"},
#line 114 "zh_convert.gperf"
    {"\346\250\231","标"},
#line 1625 "zh_convert.gperf"
    {"\346\253\232","榈"},
#line 349 "zh_convert.gperf"
    {"\350\204\243","唇"},
#line 2453 "zh_convert.gperf"
    {"\351\216\242","钨"},
#line 279 "zh_convert.gperf"
    {"\351\250\201","骋"},
#line 1013 "zh_convert.gperf"
    {"\350\233\272","蛱"},
#line 423 "zh_convert.gperf"
    {"\347\233\252","荡"},
#line 1012 "zh_convert.gperf"
    {"\350\216\242","荚"},
#line 1610 "zh_convert.gperf"
    {"\345\204\270","罗"},
#line 2661 "zh_convert.gperf"
    {"\350\250\201","讠"},
#line 2631 "zh_convert.gperf"
    {"\346\275\257","浔"},
#line 1533 "zh_convert.gperf"
    {"\350\230\242","茏"},
#line 332 "zh_convert.gperf"
    {"\345\233\252","囱"},
#line 3025 "zh_convert.gperf"
    {"\345\276\264","征"},
#line 3124 "zh_convert.gperf"
    {"\346\250\201","桩"},
#line 3046 "zh_convert.gperf"
    {"\347\270\266","絷"},
#line 1037 "zh_convert.gperf"
    {"\347\267\230","缄"},
#line 195 "zh_convert.gperf"
    {"\345\216\240","厕"},
#line 2740 "zh_convert.gperf"
    {"\345\275\236","彝"},
#line 398 "zh_convert.gperf"
    {"\345\270\266","带"},
#line 661 "zh_convert.gperf"
    {"\345\230\240","嘎"},
#line 570 "zh_convert.gperf"
    {"\350\252\222","诶"},
#line 2837 "zh_convert.gperf"
    {"\351\212\252","铕"},
#line 1415 "zh_convert.gperf"
    {"\347\200\235","沥"},
#line 3107 "zh_convert.gperf"
    {"\344\275\207","伫"},
#line 2765 "zh_convert.gperf"
    {"\350\227\235","艺"},
#line 2613 "zh_convert.gperf"
    {"\350\253\274","谖"},
#line 2860 "zh_convert.gperf"
    {"\347\230\211","愈"},
#line 2967 "zh_convert.gperf"
    {"\347\264\245","扎"},
#line 479 "zh_convert.gperf"
    {"\346\244\227","碇"},
#line 1884 "zh_convert.gperf"
    {"\351\240\227","颇"},
#line 3007 "zh_convert.gperf"
    {"\351\200\231","这"},
#line 1161 "zh_convert.gperf"
    {"\347\227\231","痉"},
#line 1371 "zh_convert.gperf"
    {"\350\252\204","诔"},
#line 1401 "zh_convert.gperf"
    {"\345\204\267","俪"},
#line 2574 "zh_convert.gperf"
    {"\351\213\205","锌"},
#line 1228 "zh_convert.gperf"
    {"\346\204\267","恺"},
#line 2978 "zh_convert.gperf"
    {"\351\211\206","钻"},
#line 2903 "zh_convert.gperf"
    {"\351\233\262","云"},
#line 1957 "zh_convert.gperf"
    {"\347\211\206","墙"},
#line 288 "zh_convert.gperf"
    {"\345\213\205","敕"},
#line 1514 "zh_convert.gperf"
    {"\347\231\205","瘤"},
#line 2566 "zh_convert.gperf"
    {"\346\264\251","泄"},
#line 911 "zh_convert.gperf"
    {"\345\231\205","咴"},
#line 1831 "zh_convert.gperf"
    {"\350\254\224","谑"},
#line 2053 "zh_convert.gperf"
    {"\350\273\224","轫"},
#line 351 "zh_convert.gperf"
    {"\350\223\264","莼"},
#line 2325 "zh_convert.gperf"
    {"\345\227\201","啼"},
#line 1311 "zh_convert.gperf"
    {"\346\223\264","扩"},
#line 469 "zh_convert.gperf"
    {"\351\212\232","铫"},
#line 830 "zh_convert.gperf"
    {"\351\212\262","焊"},
#line 2665 "zh_convert.gperf"
    {"\351\241\224","颜"},
#line 2181 "zh_convert.gperf"
    {"\350\251\246","试"},
#line 881 "zh_convert.gperf"
    {"\350\212\262","花"},
#line 651 "zh_convert.gperf"
    {"\345\251\246","妇"},
#line 971 "zh_convert.gperf"
    {"\350\255\217","讥"},
#line 301 "zh_convert.gperf"
    {"\347\261\214","筹"},
#line 2369 "zh_convert.gperf"
    {"\347\251\250","颓"},
#line 387 "zh_convert.gperf"
    {"\350\204\203","脆"},
#line 2067 "zh_convert.gperf"
    {"\347\270\237","缛"},
#line 1400 "zh_convert.gperf"
    {"\351\261\247","鳢"},
#line 2175 "zh_convert.gperf"
    {"\344\275\200","似"},
#line 951 "zh_convert.gperf"
    {"\345\244\245","伙"},
#line 1865 "zh_convert.gperf"
    {"\350\253\236","谝"},
#line 2880 "zh_convert.gperf"
    {"\346\253\236","橼"},
#line 1395 "zh_convert.gperf"
    {"\350\243\217","里"},
#line 2669 "zh_convert.gperf"
    {"\345\216\264","厣"},
#line 546 "zh_convert.gperf"
    {"\350\250\233","讹"},
#line 1825 "zh_convert.gperf"
    {"\350\276\262","农"},
#line 2841 "zh_convert.gperf"
    {"\345\250\233","娱"},
#line 362 "zh_convert.gperf"
    {"\350\263\234","赐"},
#line 1833 "zh_convert.gperf"
    {"\350\253\276","诺"},
#line 390 "zh_convert.gperf"
    {"\351\212\274","锉"},
#line 47 "zh_convert.gperf"
    {"\346\223\272","摆"},
#line 1871 "zh_convert.gperf"
    {"\351\243\204","飘"},
#line 1691 "zh_convert.gperf"
    {"\347\207\234","焖"},
#line 33 "zh_convert.gperf"
    {"\351\260\262","鳌"},
#line 1490 "zh_convert.gperf"
    {"\345\207\234","凛"},
#line 2724 "zh_convert.gperf"
    {"\345\243\204","野"},
#line 2798 "zh_convert.gperf"
    {"\347\275\214","罂"},
#line 673 "zh_convert.gperf"
    {"\345\260\262","尴"},
#line 1917 "zh_convert.gperf"
    {"\346\243\204","弃"},
#line 1182 "zh_convert.gperf"
    {"\351\213\246","锔"},
#line 2582 "zh_convert.gperf"
    {"\346\264\266","汹"},
#line 1811 "zh_convert.gperf"
    {"\351\275\247","啮"},
#line 2960 "zh_convert.gperf"
    {"\347\266\234","综"},
#line 1698 "zh_convert.gperf"
    {"\345\275\214","弥"},
#line 441 "zh_convert.gperf"
    {"\351\232\204","堤"},
#line 248 "zh_convert.gperf"
    {"\345\213\246","剿"},
#line 548 "zh_convert.gperf"
    {"\351\213\250","锇"},
#line 2329 "zh_convert.gperf"
    {"\350\271\217","蹄"},
#line 2233 "zh_convert.gperf"
    {"\350\201\263","耸"},
#line 3110 "zh_convert.gperf"
    {"\350\250\273","注"},
#line 2238 "zh_convert.gperf"
    {"\351\216\252","锼"},
#line 2959 "zh_convert.gperf"
    {"\347\271\222","缯"},
#line 811 "zh_convert.gperf"
    {"\345\233\257","国"},
#line 933 "zh_convert.gperf"
    {"\345\231\246","哕"},
#line 1552 "zh_convert.gperf"
    {"\347\230\272","瘘"},
#line 976 "zh_convert.gperf"
    {"\351\233\236","鸡"},
#line 1385 "zh_convert.gperf"
    {"\350\230\272","蓠"},
#line 2982 "zh_convert.gperf"
    {"\347\233\236","盏"},
#line 773 "zh_convert.gperf"
    {"\346\221\234","掼"},
#line 1565 "zh_convert.gperf"
    {"\350\211\253","舻"},
#line 2930 "zh_convert.gperf"
    {"\347\223\232","瓒"},
#line 3152 "zh_convert.gperf"
    {"\350\274\234","辎"},
#line 1181 "zh_convert.gperf"
    {"\346\223\232","据"},
#line 1982 "zh_convert.gperf"
    {"\351\215\245","锲"},
#line 3056 "zh_convert.gperf"
    {"\346\223\262","掷"},
#line 1844 "zh_convert.gperf"
    {"\351\267\227","鸥"},
#line 631 "zh_convert.gperf"
    {"\347\270\253","缝"},
#line 2525 "zh_convert.gperf"
    {"\347\267\227","缃"},
#line 367 "zh_convert.gperf"
    {"\350\201\260","聪"},
#line 1847 "zh_convert.gperf"
    {"\350\270\253","碰"},
#line 1347 "zh_convert.gperf"
    {"\347\272\234","缆"},
#line 2158 "zh_convert.gperf"
    {"\345\270\253","师"},
#line 2659 "zh_convert.gperf"
    {"\345\267\227","岩"},
#line 3023 "zh_convert.gperf"
    {"\351\264\206","鸩"},
#line 2840 "zh_convert.gperf"
    {"\347\264\206","纡"},
#line 1834 "zh_convert.gperf"
    {"\351\215\251","锘"},
#line 3160 "zh_convert.gperf"
    {"\346\244\266","棕"},
#line 45 "zh_convert.gperf"
    {"\350\246\207","霸"},
#line 2360 "zh_convert.gperf"
    {"\347\246\277","秃"},
#line 345 "zh_convert.gperf"
    {"\351\216\232","锤"},
#line 3164 "zh_convert.gperf"
    {"\351\250\243","鬃"},
#line 445 "zh_convert.gperf"
    {"\350\246\277","觌"},
#line 181 "zh_convert.gperf"
    {"\350\240\266","蚕"},
#line 282 "zh_convert.gperf"
    {"\351\264\237","鸱"},
#line 113 "zh_convert.gperf"
    {"\350\276\257","辩"},
#line 2117 "zh_convert.gperf"
    {"\351\250\270","骟"},
#line 1214 "zh_convert.gperf"
    {"\350\250\243","诀"},
#line 1898 "zh_convert.gperf"
    {"\346\246\277","桤"},
#line 2531 "zh_convert.gperf"
    {"\350\251\263","详"},
#line 1424 "zh_convert.gperf"
    {"\350\230\232","藓"},
#line 2634 "zh_convert.gperf"
    {"\351\261\230","鲟"},
#line 1404 "zh_convert.gperf"
    {"\345\216\262","厉"},
#line 2703 "zh_convert.gperf"
    {"\346\250\243","样"},
#line 1649 "zh_convert.gperf"
    {"\351\246\254","马"},
#line 1889 "zh_convert.gperf"
    {"\346\250\270","朴"},
#line 1556 "zh_convert.gperf"
    {"\346\223\274","撸"},
#line 363 "zh_convert.gperf"
    {"\345\276\236","从"},
#line 1506 "zh_convert.gperf"
    {"\351\275\241","龄"},
#line 1770 "zh_convert.gperf"
    {"\346\251\210","桡"},
#line 998 "zh_convert.gperf"
    {"\350\246\254","觊"},
#line 1003 "zh_convert.gperf"
    {"\351\250\216","骑"},
#line 517 "zh_convert.gperf"
    {"\345\246\254","妒"},
#line 1857 "zh_convert.gperf"
    {"\350\275\241","辔"},
#line 2562 "zh_convert.gperf"
    {"\350\253\247","谐"},
#line 2319 "zh_convert.gperf"
    {"\350\250\216","讨"},
#line 3093 "zh_convert.gperf"
    {"\346\253\247","槠"},
#line 404 "zh_convert.gperf"
    {"\347\260\236","箪"},
#line 152 "zh_convert.gperf"
    {"\345\211\235","剥"},
#line 2227 "zh_convert.gperf"
    {"\351\267\245","鸶"},
#line 1124 "zh_convert.gperf"
    {"\350\251\260","诘"},
#line 65 "zh_convert.gperf"
    {"\347\267\245","褓"},
#line 2316 "zh_convert.gperf"
    {"\351\237\234","韬"},
#line 541 "zh_convert.gperf"
    {"\350\267\245","跺"},
#line 2092 "zh_convert.gperf"
    {"\351\250\267","骚"},
#line 690 "zh_convert.gperf"
    {"\346\251\260","槔"},
#line 189 "zh_convert.gperf"
    {"\350\211\231","舱"},
#line 1392 "zh_convert.gperf"
    {"\351\270\235","鹂"},
#line 1583 "zh_convert.gperf"
    {"\346\267\245","渌"},
#line 125 "zh_convert.gperf"
    {"\351\260\276","鳔"},
#line 2723 "zh_convert.gperf"
    {"\345\237\234","野"},
#line 3018 "zh_convert.gperf"
    {"\347\270\235","缜"},
#line 1442 "zh_convert.gperf"
    {"\347\260\276","帘"},
#line 2219 "zh_convert.gperf"
    {"\351\240\206","顺"},
#line 373 "zh_convert.gperf"
    {"\346\250\267","丛"},
#line 899 "zh_convert.gperf"
    {"\347\267\251","缓"},
#line 212 "zh_convert.gperf"
    {"\350\240\206","虿"},
#line 2909 "zh_convert.gperf"
    {"\351\201\213","运"},
#line 595 "zh_convert.gperf"
    {"\346\260\276","泛"},
#line 368 "zh_convert.gperf"
    {"\350\223\257","苁"},
#line 1447 "zh_convert.gperf"
    {"\351\200\243","连"},
#line 583 "zh_convert.gperf"
    {"\347\201\213","法"},
#line 1500 "zh_convert.gperf"
    {"\346\267\251","凌"},
#line 2226 "zh_convert.gperf"
    {"\351\215\266","锶"},
#line 139 "zh_convert.gperf"
    {"\346\223\257","摈"},
#line 259 "zh_convert.gperf"
    {"\351\231\263","陈"},
#line 602 "zh_convert.gperf"
    {"\345\200\243","仿"},
#line 2627 "zh_convert.gperf"
    {"\345\213\263","勋"},
#line 903 "zh_convert.gperf"
    {"\346\270\231","涣"},
#line 419 "zh_convert.gperf"
    {"\346\252\224","档"},
#line 1316 "zh_convert.gperf"
    {"\350\240\237","蜡"},
#line 169 "zh_convert.gperf"
    {"\345\200\270","睬"},
#line 2394 "zh_convert.gperf"
    {"\347\233\214","碗"},
#line 2470 "zh_convert.gperf"
    {"\346\231\263","晰"},
#line 2243 "zh_convert.gperf"
    {"\345\233\214","苏"},
#line 1562 "zh_convert.gperf"
    {"\347\233\247","卢"},
#line 1144 "zh_convert.gperf"
    {"\350\227\216","荩"},
#line 1638 "zh_convert.gperf"
    {"\345\227\216","吗"},
#line 1398 "zh_convert.gperf"
    {"\351\213\260","锂"},
#line 654 "zh_convert.gperf"
    {"\350\250\203","讣"},
#line 2047 "zh_convert.gperf"
    {"\346\223\276","扰"},
#line 3052 "zh_convert.gperf"
    {"\351\230\257","址"},
#line 2779 "zh_convert.gperf"
    {"\351\231\260","阴"},
#line 2820 "zh_convert.gperf"
    {"\347\231\260","痈"},
#line 1254 "zh_convert.gperf"
    {"\351\250\215","骒"},
#line 2182 "zh_convert.gperf"
    {"\350\253\241","谥"},
#line 2552 "zh_convert.gperf"
    {"\345\230\257","啸"},
#line 2559 "zh_convert.gperf"
    {"\350\204\205","胁"},
#line 2204 "zh_convert.gperf"
    {"\350\227\267","薯"},
#line 413 "zh_convert.gperf"
    {"\345\204\205","当"},
#line 2760 "zh_convert.gperf"
    {"\347\230\236","瘗"},
#line 794 "zh_convert.gperf"
    {"\345\212\214","刿"},
#line 2471 "zh_convert.gperf"
    {"\347\212\247","牺"},
#line 1452 "zh_convert.gperf"
    {"\350\230\236","蔹"},
#line 1688 "zh_convert.gperf"
    {"\351\215\206","钔"},
#line 1969 "zh_convert.gperf"
    {"\346\251\213","桥"},
#line 110 "zh_convert.gperf"
    {"\347\267\266","缏"},
#line 3120 "zh_convert.gperf"
    {"\350\255\224","撰"},
#line 860 "zh_convert.gperf"
    {"\345\276\214","后"},
#line 1321 "zh_convert.gperf"
    {"\346\267\266","涞"},
#line 1419 "zh_convert.gperf"
    {"\347\244\253","砾"},
#line 2022 "zh_convert.gperf"
    {"\351\227\203","阒"},
#line 2005 "zh_convert.gperf"
    {"\351\260\214","鳅"},
#line 1071 "zh_convert.gperf"
    {"\350\263\244","贱"},
#line 649 "zh_convert.gperf"
    {"\351\240\253","俯"},
#line 2636 "zh_convert.gperf"
    {"\350\250\212","讯"},
#line 2019 "zh_convert.gperf"
    {"\351\264\235","鸲"},
#line 2110 "zh_convert.gperf"
    {"\351\207\244","钐"},
#line 1574 "zh_convert.gperf"
    {"\346\260\214","氇"},
#line 2135 "zh_convert.gperf"
    {"\347\201\204","滠"},
#line 1933 "zh_convert.gperf"
    {"\351\211\233","铅"},
#line 1133 "zh_convert.gperf"
    {"\347\233\241","尽"},
#line 2035 "zh_convert.gperf"
    {"\346\205\244","悫"},
#line 1488 "zh_convert.gperf"
    {"\351\261\227","鳞"},
#line 1337 "zh_convert.gperf"
    {"\350\227\215","蓝"},
#line 682 "zh_convert.gperf"
    {"\345\211\233","刚"},
#line 471 "zh_convert.gperf"
    {"\346\233\241","叠"},
#line 3050 "zh_convert.gperf"
    {"\347\264\231","纸"},
#line 1605 "zh_convert.gperf"
    {"\345\264\231","仑"},
#line 776 "zh_convert.gperf"
    {"\351\270\233","鹳"},
#line 70 "zh_convert.gperf"
    {"\351\221\244","刨"},
#line 642 "zh_convert.gperf"
    {"\347\270\233","缚"},
#line 2633 "zh_convert.gperf"
    {"\351\246\264","驯"},
#line 785 "zh_convert.gperf"
    {"\347\223\214","瑰"},
#line 2707 "zh_convert.gperf"
    {"\347\221\244","瑶"},
#line 3042 "zh_convert.gperf"
    {"\347\271\224","织"},
#line 708 "zh_convert.gperf"
    {"\351\226\244","合"},
#line 3091 "zh_convert.gperf"
    {"\350\221\244","荮"},
#line 2988 "zh_convert.gperf"
    {"\351\251\217","骣"},
#line 1051 "zh_convert.gperf"
    {"\346\270\233","减"},
#line 466 "zh_convert.gperf"
    {"\350\223\247","莜"},
#line 1306 "zh_convert.gperf"
    {"\351\257\244","鲲"},
#line 711 "zh_convert.gperf"
    {"\351\211\273","铬"},
#line 1187 "zh_convert.gperf"
    {"\346\223\247","举"},
#line 514 "zh_convert.gperf"
    {"\347\257\244","笃"},
#line 2741 "zh_convert.gperf"
    {"\350\251\222","诒"},
#line 919 "zh_convert.gperf"
    {"\345\233\230","回"},
#line 1314 "zh_convert.gperf"
    {"\351\227\212","阔"},
#line 2034 "zh_convert.gperf"
    {"\346\204\250","悫"},
#line 371 "zh_convert.gperf"
    {"\351\251\204","骢"},
#line 377 "zh_convert.gperf"
    {"\351\272\244","粗"},
#line 136 "zh_convert.gperf"
    {"\350\263\223","宾"},
#line 250 "zh_convert.gperf"
    {"\346\277\244","涛"},
#line 1735 "zh_convert.gperf"
    {"\351\212\230","铭"},
#line 1966 "zh_convert.gperf"
    {"\351\215\253","锹"},
#line 20 "zh_convert.gperf"
    {"\347\244\231","碍"},
#line 2509 "zh_convert.gperf"
    {"\347\215\253","猃"},
#line 663 "zh_convert.gperf"
    {"\351\207\223","钆"},
#line 1231 "zh_convert.gperf"
    {"\351\216\247","铠"},
#line 2890 "zh_convert.gperf"
    {"\347\261\245","钥"},
#line 806 "zh_convert.gperf"
    {"\345\240\235","埚"},
#line 2522 "zh_convert.gperf"
    {"\350\216\247","苋"},
#line 1687 "zh_convert.gperf"
    {"\346\215\253","扪"},
#line 1830 "zh_convert.gperf"
    {"\347\230\247","疟"},
#line 1054 "zh_convert.gperf"
    {"\347\260\241","简"},
#line 1107 "zh_convert.gperf"
    {"\350\246\272","觉"},
#line 217 "zh_convert.gperf"
    {"\347\246\252","禅"},
#line 1718 "zh_convert.gperf"
    {"\351\266\223","鹋"},
#line 1984 "zh_convert.gperf"
    {"\350\246\252","亲"},
#line 1150 "zh_convert.gperf"
    {"\347\266\223","经"},
#line 105 "zh_convert.gperf"
    {"\347\261\251","笾"},
#line 1650 "zh_convert.gperf"
    {"\346\246\252","杩"},
#line 1016 "zh_convert.gperf"
    {"\351\213\217","铗"},
#line 1040 "zh_convert.gperf"
    {"\351\226\223","间"},
#line 629 "zh_convert.gperf"
    {"\351\213\222","锋"},
#line 2733 "zh_convert.gperf"
    {"\351\240\201","页"},
#line 1023 "zh_convert.gperf"
    {"\351\211\270","铰"},
#line 1576 "zh_convert.gperf"
    {"\350\211\243","橹"},
#line 1755 "zh_convert.gperf"
    {"\346\213\217","拿"},
#line 192 "zh_convert.gperf"
    {"\350\211\270","艹"},
#line 2396 "zh_convert.gperf"
    {"\350\274\223","挽"},
#line 2861 "zh_convert.gperf"
    {"\347\231\222","愈"},
#line 1518 "zh_convert.gperf"
    {"\346\240\201","柳"},
#line 176 "zh_convert.gperf"
    {"\350\223\241","参"},
#line 2388 "zh_convert.gperf"
    {"\351\237\244","袜"},
#line 2877 "zh_convert.gperf"
    {"\345\223\241","员"},
#line 2520 "zh_convert.gperf"
    {"\347\270\243","县"},
#line 334 "zh_convert.gperf"
    {"\347\211\216","窗"},
#line 2673 "zh_convert.gperf"
    {"\345\275\245","彦"},
#line 2279 "zh_convert.gperf"
    {"\346\223\241","抬"},
#line 1970 "zh_convert.gperf"
    {"\347\231\204","憔"},
#line 2797 "zh_convert.gperf"
    {"\347\272\223","缨"},
#line 3069 "zh_convert.gperf"
    {"\350\272\223","踬"},
#line 1135 "zh_convert.gperf"
    {"\350\246\262","觐"},
#line 2876 "zh_convert.gperf"
    {"\351\264\233","鸳"},
#line 795 "zh_convert.gperf"
    {"\346\252\234","桧"},
#line 614 "zh_convert.gperf"
    {"\347\264\233","纷"},
#line 2145 "zh_convert.gperf"
    {"\350\253\227","谂"},
#line 2801 "zh_convert.gperf"
    {"\351\270\216","莺"},
#line 681 "zh_convert.gperf"
    {"\350\264\233","赣"},
#line 2857 "zh_convert.gperf"
    {"\345\253\227","妪"},
#line 3131 "zh_convert.gperf"
    {"\351\250\205","骓"},
#line 2215 "zh_convert.gperf"
    {"\347\250\205","税"},
#line 2678 "zh_convert.gperf"
    {"\350\211\267","艳"},
#line 223 "zh_convert.gperf"
    {"\345\211\267","铲"},
#line 484 "zh_convert.gperf"
    {"\344\270\237","丢"},
#line 366 "zh_convert.gperf"
    {"\346\250\205","枞"},
#line 336 "zh_convert.gperf"
    {"\347\230\241","疮"},
#line 171 "zh_convert.gperf"
    {"\346\216\241","采"},
#line 1632 "zh_convert.gperf"
    {"\347\270\267","缕"},
#line 1656 "zh_convert.gperf"
    {"\350\204\210","脉"},
#line 1828 "zh_convert.gperf"
    {"\347\205\226","暖"},
#line 1271 "zh_convert.gperf"
    {"\345\204\210","侩"},
#line 867 "zh_convert.gperf"
    {"\350\273\244","轷"},
#line 495 "zh_convert.gperf"
    {"\350\205\226","胨"},
#line 1640 "zh_convert.gperf"
    {"\345\254\244","嬷"},
#line 2495 "zh_convert.gperf"
    {"\351\215\201","锨"},
#line 856 "zh_convert.gperf"
    {"\351\264\273","鸿"},
#line 1646 "zh_convert.gperf"
    {"\347\215\201","犸"},
#line 1486 "zh_convert.gperf"
    {"\351\204\260","邻"},
#line 706 "zh_convert.gperf"
    {"\351\216\230","镉"},
#line 825 "zh_convert.gperf"
    {"\351\237\223","韩"},
#line 948 "zh_convert.gperf"
    {"\351\244\233","馄"},
#line 2488 "zh_convert.gperf"
    {"\347\241\244","硖"},
#line 2607 "zh_convert.gperf"
    {"\345\241\244","埙"},
#line 1892 "zh_convert.gperf"
    {"\350\255\234","谱"},
#line 1414 "zh_convert.gperf"
    {"\346\266\226","莅"},
#line 102 "zh_convert.gperf"
    {"\351\211\215","铋"},
#line 968 "zh_convert.gperf"
    {"\347\267\235","缉"},
#line 316 "zh_convert.gperf"
    {"\346\253\245","橱"},
#line 569 "zh_convert.gperf"
    {"\351\275\266","腭"},
#line 2804 "zh_convert.gperf"
    {"\347\200\205","滢"},
#line 143 "zh_convert.gperf"
    {"\351\253\251","鬓"},
#line 588 "zh_convert.gperf"
    {"\351\243\234","翻"},
#line 3072 "zh_convert.gperf"
    {"\351\267\231","鸷"},
#line 1995 "zh_convert.gperf"
    {"\351\257\226","鲭"},
#line 1252 "zh_convert.gperf"
    {"\347\267\231","缂"},
#line 164 "zh_convert.gperf"
    {"\350\243\234","补"},
#line 2292 "zh_convert.gperf"
    {"\345\243\234","坛"},
#line 394 "zh_convert.gperf"
    {"\351\201\224","达"},
#line 734 "zh_convert.gperf"
    {"\350\246\257","觏"},
#line 1127 "zh_convert.gperf"
    {"\345\261\206","届"},
#line 692 "zh_convert.gperf"
    {"\351\244\273","糕"},
#line 741 "zh_convert.gperf"
    {"\351\264\243","鸪"},
#line 2493 "zh_convert.gperf"
    {"\347\272\226","纤"},
#line 840 "zh_convert.gperf"
    {"\347\232\234","皓"},
#line 861 "zh_convert.gperf"
    {"\351\261\237","鲎"},
#line 2571 "zh_convert.gperf"
    {"\350\244\273","亵"},
#line 1327 "zh_convert.gperf"
    {"\347\261\237","籁"},
#line 257 "zh_convert.gperf"
    {"\350\250\246","谌"},
#line 3137 "zh_convert.gperf"
    {"\346\272\226","准"},
#line 1875 "zh_convert.gperf"
    {"\351\240\273","频"},
#line 1662 "zh_convert.gperf"
    {"\350\240\273","蛮"},
#line 1949 "zh_convert.gperf"
    {"\347\276\227","羌"},
#line 3117 "zh_convert.gperf"
    {"\351\241\223","颛"},
#line 1894 "zh_convert.gperf"
    {"\350\210\226","铺"},
#line 2210 "zh_convert.gperf"
    {"\350\241\223","术"},
#line 1065 "zh_convert.gperf"
    {"\346\276\227","涧"},
#line 1587 "zh_convert.gperf"
    {"\350\275\206","辘"},
#line 2762 "zh_convert.gperf"
    {"\347\270\212","缢"},
#line 130 "zh_convert.gperf"
    {"\345\275\206","别"},
#line 523 "zh_convert.gperf"
    {"\351\215\233","锻"},
#line 1190 "zh_convert.gperf"
    {"\351\275\237","龃"},
#line 2998 "zh_convert.gperf"
    {"\350\251\224","诏"},
#line 2737 "zh_convert.gperf"
    {"\351\212\245","铱"},
#line 851 "zh_convert.gperf"
    {"\350\275\237","轰"},
#line 1162 "zh_convert.gperf"
    {"\347\253\266","竞"},
#line 258 "zh_convert.gperf"
    {"\350\253\266","谌"},
#line 2480 "zh_convert.gperf"
    {"\346\275\237","舄"},
#line 1633 "zh_convert.gperf"
    {"\350\244\270","褛"},
#line 3095 "zh_convert.gperf"
    {"\347\200\246","潴"},
#line 485 "zh_convert.gperf"
    {"\351\212\251","铥"},
#line 717 "zh_convert.gperf"
    {"\351\240\270","颈"},
#line 1425 "zh_convert.gperf"
    {"\350\240\243","蛎"},
#line 323 "zh_convert.gperf"
    {"\347\244\216","础"},
#line 1324 "zh_convert.gperf"
    {"\347\200\250","濑"},
#line 1928 "zh_convert.gperf"
    {"\347\276\245","羟"},
#line 2516 "zh_convert.gperf"
    {"\347\215\273","献"},
#line 1909 "zh_convert.gperf"
    {"\351\240\216","颀"},
#line 2033 "zh_convert.gperf"
    {"\345\215\273","却"},
#line 205 "zh_convert.gperf"
    {"\351\244\267","馇"},
#line 2764 "zh_convert.gperf"
    {"\347\276\251","义"},
#line 767 "zh_convert.gperf"
    {"\351\260\245","鳏"},
#line 652 "zh_convert.gperf"
    {"\345\276\251","复"},
#line 1758 "zh_convert.gperf"
    {"\347\264\215","纳"},
#line 2624 "zh_convert.gperf"
    {"\346\276\251","泶"},
#line 2251 "zh_convert.gperf"
    {"\350\254\226","谡"},
#line 2115 "zh_convert.gperf"
    {"\350\264\215","赡"},
#line 832 "zh_convert.gperf"
    {"\351\240\267","颔"},
#line 1319 "zh_convert.gperf"
    {"\345\264\215","崃"},
#line 1346 "zh_convert.gperf"
    {"\346\254\226","榄"},
#line 2714 "zh_convert.gperf"
    {"\351\260\251","鳐"},
#line 3058 "zh_convert.gperf"
    {"\346\267\233","浙"},
#line 1145 "zh_convert.gperf"
    {"\350\263\256","赆"},
#line 3170 "zh_convert.gperf"
    {"\351\204\222","邹"},
#line 237 "zh_convert.gperf"
    {"\345\230\227","尝"},
#line 1540 "zh_convert.gperf"
    {"\350\241\226","弄"},
#line 1635 "zh_convert.gperf"
    {"\346\205\256","虑"},
#line 677 "zh_convert.gperf"
    {"\347\250\210","秆"},
#line 999 "zh_convert.gperf"
    {"\350\250\210","计"},
#line 2465 "zh_convert.gperf"
    {"\350\252\244","误"},
#line 1410 "zh_convert.gperf"
    {"\346\253\237","栎"},
#line 1024 "zh_convert.gperf"
    {"\351\244\203","饺"},
#line 461 "zh_convert.gperf"
    {"\345\275\253","雕"},
#line 2191 "zh_convert.gperf"
    {"\347\215\270","兽"},
#line 2753 "zh_convert.gperf"
    {"\345\204\204","亿"},
#line 3062 "zh_convert.gperf"
    {"\347\267\273","致"},
#line 2933 "zh_convert.gperf"
    {"\350\264\212","赞"},
#line 2323 "zh_convert.gperf"
    {"\351\250\260","腾"},
#line 1994 "zh_convert.gperf"
    {"\351\240\203","顷"},
#line 621 "zh_convert.gperf"
    {"\351\261\235","鲼"},
#line 1087 "zh_convert.gperf"
    {"\347\215\216","奖"},
#line 1302 "zh_convert.gperf"
    {"\345\240\203","坤"},
#line 710 "zh_convert.gperf"
    {"\347\256\207","个"},
#line 215 "zh_convert.gperf"
    {"\345\226\256","单"},
#line 3138 "zh_convert.gperf"
    {"\346\226\256","斫"},
#line 1196 "zh_convert.gperf"
    {"\351\211\205","钜"},
#line 2109 "zh_convert.gperf"
    {"\347\276\266","膻"},
#line 2554 "zh_convert.gperf"
    {"\350\240\215","蝎"},
#line 778 "zh_convert.gperf"
    {"\347\215\267","犷"},
#line 2448 "zh_convert.gperf"
    {"\346\261\231","污"},
#line 1409 "zh_convert.gperf"
    {"\346\233\206","历"},
#line 1482 "zh_convert.gperf"
    {"\347\227\263","淋"},
#line 2102 "zh_convert.gperf"
    {"\351\216\251","铩"},
#line 2411 "zh_convert.gperf"
    {"\351\227\210","闱"},
#line 1170 "zh_convert.gperf"
    {"\351\200\210","迥"},
#line 909 "zh_convert.gperf"
    {"\346\200\263","恍"},
#line 2702 "zh_convert.gperf"
    {"\351\244\212","养"},
#line 2882 "zh_convert.gperf"
    {"\347\267\243","缘"},
#line 337 "zh_convert.gperf"
    {"\347\252\223","窗"},
#line 880 "zh_convert.gperf"
    {"\345\230\251","哗"},
#line 2873 "zh_convert.gperf"
    {"\351\267\270","鹬"},
#line 1783 "zh_convert.gperf"
    {"\351\210\256","铌"},
#line 1340 "zh_convert.gperf"
    {"\350\256\225","谰"},
#line 1225 "zh_convert.gperf"
    {"\345\207\261","凯"},
#line 2476 "zh_convert.gperf"
    {"\350\246\241","觋"},
#line 2638 "zh_convert.gperf"
    {"\351\201\234","逊"},
#line 2595 "zh_convert.gperf"
    {"\351\240\212","顼"},
#line 686 "zh_convert.gperf"
    {"\347\266\261","纲"},
#line 63 "zh_convert.gperf"
    {"\351\275\231","龅"},
#line 1069 "zh_convert.gperf"
    {"\350\253\253","谏"},
#line 1699 "zh_convert.gperf"
    {"\347\200\260","弥"},
#line 556 "zh_convert.gperf"
    {"\345\240\212","垩"},
#line 3094 "zh_convert.gperf"
    {"\346\253\253","橥"},
#line 370 "zh_convert.gperf"
    {"\351\215\203","锪"},
#line 934 "zh_convert.gperf"
    {"\345\275\231","汇"},
#line 2895 "zh_convert.gperf"
    {"\351\226\261","阅"},
#line 397 "zh_convert.gperf"
    {"\347\215\203","呆"},
#line 784 "zh_convert.gperf"
    {"\346\275\231","沩"},
#line 115 "zh_convert.gperf"
    {"\347\276\206","罴"},
#line 502 "zh_convert.gperf"
    {"\350\256\200","读"},
#line 1723 "zh_convert.gperf"
    {"\345\223\266","咩"},
#line 2715 "zh_convert.gperf"
    {"\346\256\200","夭"},
#line 1097 "zh_convert.gperf"
    {"\346\276\206","浇"},
#line 518 "zh_convert.gperf"
    {"\351\215\215","镀"},
#line 1175 "zh_convert.gperf"
    {"\351\237\256","韭"},
#line 214 "zh_convert.gperf"
    {"\350\246\230","觇"},
#line 2814 "zh_convert.gperf"
    {"\346\275\201","颍"},
#line 3034 "zh_convert.gperf"
    {"\351\211\246","钲"},
#line 133 "zh_convert.gperf"
    {"\346\277\261","滨"},
#line 3163 "zh_convert.gperf"
    {"\350\271\244","踪"},
#line 1066 "zh_convert.gperf"
    {"\350\211\246","舰"},
#line 210 "zh_convert.gperf"
    {"\351\207\265","钗"},
#line 343 "zh_convert.gperf"
    {"\347\256\240","棰"},
#line 1210 "zh_convert.gperf"
    {"\346\251\234","橛"},
#line 1462 "zh_convert.gperf"
    {"\351\215\212","炼"},
#line 172 "zh_convert.gperf"
    {"\347\266\265","彩"},
#line 146 "zh_convert.gperf"
    {"\347\253\235","并"},
#line 1173 "zh_convert.gperf"
    {"\351\254\256","阄"},
#line 2474 "zh_convert.gperf"
    {"\350\223\206","席"},
#line 1151 "zh_convert.gperf"
    {"\350\215\212","荆"},
#line 807 "zh_convert.gperf"
    {"\346\270\246","涡"},
#line 2639 "zh_convert.gperf"
    {"\345\243\223","压"},
#line 775 "zh_convert.gperf"
    {"\351\221\265","罐"},
#line 506 "zh_convert.gperf"
    {"\346\253\235","椟"},
#line 2038 "zh_convert.gperf"
    {"\351\227\213","阕"},
#line 2099 "zh_convert.gperf"
    {"\351\212\253","铯"},
#line 2144 "zh_convert.gperf"
    {"\347\200\213","渖"},
#line 1727 "zh_convert.gperf"
    {"\347\267\215","缗"},
#line 852 "zh_convert.gperf"
    {"\347\264\205","红"},
#line 79 "zh_convert.gperf"
    {"\350\252\226","悖"},
#line 3135 "zh_convert.gperf"
    {"\350\264\205","赘"},
#line 709 "zh_convert.gperf"
    {"\345\200\213","个"},
#line 3140 "zh_convert.gperf"
    {"\346\226\265","斫"},
#line 1120 "zh_convert.gperf"
    {"\345\212\253","劫"},
#line 2989 "zh_convert.gperf"
    {"\345\274\265","张"},
#line 2603 "zh_convert.gperf"
    {"\346\274\265","溆"},
#line 1910 "zh_convert.gperf"
    {"\351\250\217","骐"},
#line 296 "zh_convert.gperf"
    {"\345\257\265","宠"},
#line 2593 "zh_convert.gperf"
    {"\350\250\217","吁"},
#line 73 "zh_convert.gperf"
    {"\346\241\256","杯"},
#line 3146 "zh_convert.gperf"
    {"\347\216\206","兹"},
#line 1717 "zh_convert.gperf"
    {"\351\272\265","面"},
#line 3144 "zh_convert.gperf"
    {"\351\213\234","镯"},
#line 1566 "zh_convert.gperf"
    {"\350\230\206","芦"},
#line 2301 "zh_convert.gperf"
    {"\345\230\206","叹"},
#line 1578 "zh_convert.gperf"
    {"\350\231\234","虏"},
#line 2823 "zh_convert.gperf"
    {"\351\233\235","雍"},
#line 1134 "zh_convert.gperf"
    {"\347\267\212","紧"},
#line 2543 "zh_convert.gperf"
    {"\347\260\253","箫"},
#line 1937 "zh_convert.gperf"
    {"\346\275\233","潜"},
#line 148 "zh_convert.gperf"
    {"\351\244\205","饼"},
#line 2452 "zh_convert.gperf"
    {"\351\204\224","邬"},
#line 2871 "zh_convert.gperf"
    {"\351\254\261","郁"},
#line 2214 "zh_convert.gperf"
    {"\351\233\231","双"},
#line 1992 "zh_convert.gperf"
    {"\346\260\253","氢"},
#line 298 "zh_convert.gperf"
    {"\345\204\224","俦"},
#line 2538 "zh_convert.gperf"
    {"\351\240\205","项"},
#line 2774 "zh_convert.gperf"
    {"\345\233\231","因"},
#line 1070 "zh_convert.gperf"
    {"\350\255\226","谮"},
#line 2811 "zh_convert.gperf"
    {"\350\240\205","蝇"},
#line 1027 "zh_convert.gperf"
    {"\345\240\205","坚"},
#line 1510 "zh_convert.gperf"
    {"\347\200\217","浏"},
#line 1569 "zh_convert.gperf"
    {"\351\241\261","颅"},
#line 2130 "zh_convert.gperf"
    {"\351\211\210","铊"},
#line 393 "zh_convert.gperf"
    {"\345\211\263","札"},
#line 2693 "zh_convert.gperf"
    {"\351\264\246","鸯"},
#line 1803 "zh_convert.gperf"
    {"\345\233\201","嗫"},
#line 1570 "zh_convert.gperf"
    {"\351\261\270","鲈"},
#line 2971 "zh_convert.gperf"
    {"\346\237\265","栅"},
#line 275 "zh_convert.gperf"
    {"\346\243\226","枨"},
#line 2642 "zh_convert.gperf"
    {"\351\264\250","鸭"},
#line 2466 "zh_convert.gperf"
    {"\351\232\226","坞"},
#line 2992 "zh_convert.gperf"
    {"\345\270\263","帐"},
#line 2809 "zh_convert.gperf"
    {"\347\270\210","萦"},
#line 2421 "zh_convert.gperf"
    {"\351\256\252","鲔"},
#line 2199 "zh_convert.gperf"
    {"\350\270\210","疏"},
#line 2211 "zh_convert.gperf"
    {"\350\261\216","竖"},
#line 2100 "zh_convert.gperf"
    {"\346\256\272","杀"},
#line 596 "zh_convert.gperf"
    {"\346\261\216","泛"},
#line 242 "zh_convert.gperf"
    {"\350\220\207","苌"},
#line 2772 "zh_convert.gperf"
    {"\351\220\277","镱"},
#line 2846 "zh_convert.gperf"
    {"\350\253\233","谀"},
#line 916 "zh_convert.gperf"
    {"\347\220\277","珲"},
#line 1989 "zh_convert.gperf"
    {"\346\220\207","揿"},
#line 2087 "zh_convert.gperf"
    {"\347\271\226","伞"},
#line 3057 "zh_convert.gperf"
    {"\346\253\233","栉"},
#line 567 "zh_convert.gperf"
    {"\351\261\267","鳄"},
#line 312 "zh_convert.gperf"
    {"\351\275\243","出"},
#line 2847 "zh_convert.gperf"
    {"\350\270\260","逾"},
#line 2630 "zh_convert.gperf"
    {"\345\273\265","巡"},
#line 1279 "zh_convert.gperf"
    {"\346\254\265","款"},
#line 2161 "zh_convert.gperf"
    {"\347\215\205","狮"},
#line 581 "zh_convert.gperf"
    {"\347\275\270","罚"},
#line 724 "zh_convert.gperf"
    {"\347\244\246","矿"},
#line 2097 "zh_convert.gperf"
    {"\346\276\201","涩"},
#line 1745 "zh_convert.gperf"
    {"\350\220\254","万"},
#line 1594 "zh_convert.gperf"
    {"\347\201\244","滦"},
#line 771 "zh_convert.gperf"
    {"\351\244\250","馆"},
#line 980 "zh_convert.gperf"
    {"\351\275\216","赍"},
#line 821 "zh_convert.gperf"
    {"\351\240\246","颏"},
#line 1126 "zh_convert.gperf"
    {"\351\256\232","鲒"},
#line 2295 "zh_convert.gperf"
    {"\347\275\216","坛"},
#line 256 "zh_convert.gperf"
    {"\345\241\265","尘"},
#line 1108 "zh_convert.gperf"
    {"\350\275\216","轿"},
#line 2931 "zh_convert.gperf"
    {"\350\256\232","赞"},
#line 2389 "zh_convert.gperf"
    {"\345\275\216","弯"},
#line 1110 "zh_convert.gperf"
    {"\345\240\246","阶"},
#line 2499 "zh_convert.gperf"
    {"\345\253\273","娴"},
#line 2794 "zh_convert.gperf"
    {"\346\253\273","樱"},
#line 1030 "zh_convert.gperf"
    {"\346\256\262","歼"},
#line 2228 "zh_convert.gperf"
    {"\347\246\251","祀"},
#line 2446 "zh_convert.gperf"
    {"\351\275\267","龌"},
#line 515 "zh_convert.gperf"
    {"\350\246\251","睹"},
#line 44 "zh_convert.gperf"
    {"\347\275\267","罢"},
#line 1336 "zh_convert.gperf"
    {"\347\261\203","篮"},
#line 321 "zh_convert.gperf"
    {"\351\233\233","雏"},
#line 95 "zh_convert.gperf"
    {"\346\275\267","滗"},
#line 2001 "zh_convert.gperf"
    {"\347\252\256","穷"},
#line 69 "zh_convert.gperf"
    {"\351\211\213","刨"},
#line 2357 "zh_convert.gperf"
    {"\345\252\256","偷"},
#line 1034 "zh_convert.gperf"
    {"\347\211\213","笺"},
#line 2157 "zh_convert.gperf"
    {"\345\261\215","尸"},
#line 1250 "zh_convert.gperf"
    {"\345\211\213","克"},
#line 2819 "zh_convert.gperf"
    {"\346\223\201","拥"},
#line 2530 "zh_convert.gperf"
    {"\351\251\244","骧"},
#line 1263 "zh_convert.gperf"
    {"\345\256\274","寇"},
#line 1380 "zh_convert.gperf"
    {"\347\212\233","牦"},
#line 605 "zh_convert.gperf"
    {"\351\253\243","仿"},
#line 1249 "zh_convert.gperf"
    {"\346\256\274","壳"},
#line 2132 "zh_convert.gperf"
    {"\345\216\231","厍"},
#line 2139 "zh_convert.gperf"
    {"\347\264\263","绅"},
#line 644 "zh_convert.gperf"
    {"\351\214\207","锫"},
#line 2070 "zh_convert.gperf"
    {"\346\251\244","蕊"},
#line 3027 "zh_convert.gperf"
    {"\346\216\231","挣"},
#line 3134 "zh_convert.gperf"
    {"\347\270\213","缒"},
#line 2691 "zh_convert.gperf"
    {"\351\264\210","雁"},
#line 2842 "zh_convert.gperf"
    {"\345\264\263","嵛"},
#line 2391 "zh_convert.gperf"
    {"\347\264\210","纨"},
#line 460 "zh_convert.gperf"
    {"\351\233\273","电"},
#line 3098 "zh_convert.gperf"
    {"\350\253\270","诸"},
#line 2961 "zh_convert.gperf"
    {"\350\264\210","赠"},
#line 1893 "zh_convert.gperf"
    {"\351\220\240","镨"},
#line 2216 "zh_convert.gperf"
    {"\350\233\273","蜕"},
#line 1188 "zh_convert.gperf"
    {"\346\253\270","榉"},
#line 203 "zh_convert.gperf"
    {"\346\214\277","插"},
#line 1056 "zh_convert.gperf"
    {"\350\245\207","裥"},
#line 1584 "zh_convert.gperf"
    {"\347\245\277","禄"},
#line 510 "zh_convert.gperf"
    {"\347\215\250","独"},
#line 756 "zh_convert.gperf"
    {"\351\264\260","鸹"},
#line 255 "zh_convert.gperf"
    {"\350\275\215","辙"},
#line 2481 "zh_convert.gperf"
    {"\347\264\260","细"},
#line 2131 "zh_convert.gperf"
    {"\346\215\250","舍"},
#line 2324 "zh_convert.gperf"
    {"\351\212\273","锑"},
#line 1305 "zh_convert.gperf"
    {"\351\214\225","锟"},
#line 318 "zh_convert.gperf"
    {"\350\212\273","刍"},
#line 1986 "zh_convert.gperf"
    {"\347\220\271","琴"},
#line 2036 "zh_convert.gperf"
    {"\346\220\211","榷"},
#line 1239 "zh_convert.gperf"
    {"\347\262\207","糠"},
#line 627 "zh_convert.gperf"
    {"\350\253\267","讽"},
#line 572 "zh_convert.gperf"
    {"\351\256\236","鲕"},
#line 140 "zh_convert.gperf"
    {"\346\256\257","殡"},
#line 2307 "zh_convert.gperf"
    {"\351\244\263","饧"},
#line 320 "zh_convert.gperf"
    {"\351\213\244","锄"},
#line 1085 "zh_convert.gperf"
    {"\345\245\254","奖"},
#line 1676 "zh_convert.gperf"
    {"\350\262\277","贸"},
#line 2681 "zh_convert.gperf"
    {"\350\256\236","谳"},
#line 1446 "zh_convert.gperf"
    {"\350\244\263","裢"},
#line 360 "zh_convert.gperf"
    {"\351\244\210","糍"},
#line 1704 "zh_convert.gperf"
    {"\347\245\225","秘"},
#line 2904 "zh_convert.gperf"
    {"\346\256\236","殒"},
#line 1111 "zh_convert.gperf"
    {"\347\231\244","疖"},
#line 1767 "zh_convert.gperf"
    {"\351\233\243","难"},
#line 1035 "zh_convert.gperf"
    {"\347\233\243","监"},
#line 1912 "zh_convert.gperf"
    {"\351\275\212","齐"},
#line 2594 "zh_convert.gperf"
    {"\351\240\210","须"},
#line 2013 "zh_convert.gperf"
    {"\347\262\254","曲"},
#line 2956 "zh_convert.gperf"
    {"\350\262\254","责"},
#line 1101 "zh_convert.gperf"
    {"\351\267\246","鹪"},
#line 1979 "zh_convert.gperf"
    {"\346\204\234","惬"},
#line 1628 "zh_convert.gperf"
    {"\344\276\266","侣"},
#line 1092 "zh_convert.gperf"
    {"\345\275\212","强"},
#line 2225 "zh_convert.gperf"
    {"\347\267\246","缌"},
#line 2195 "zh_convert.gperf"
    {"\346\233\270","书"},
#line 2345 "zh_convert.gperf"
    {"\351\211\204","铁"},
#line 1666 "zh_convert.gperf"
    {"\351\260\273","鳗"},
#line 2536 "zh_convert.gperf"
    {"\345\232\256","向"},
#line 106 "zh_convert.gperf"
    {"\347\267\250","编"},
#line 2065 "zh_convert.gperf"
    {"\351\212\243","铷"},
#line 1155 "zh_convert.gperf"
    {"\345\211\204","刭"},
#line 2948 "zh_convert.gperf"
    {"\347\253\203","灶"},
#line 1017 "zh_convert.gperf"
    {"\351\240\260","颊"},
#line 1160 "zh_convert.gperf"
    {"\346\267\250","净"},
#line 2609 "zh_convert.gperf"
    {"\350\225\277","萱"},
#line 796 "zh_convert.gperf"
    {"\346\253\203","柜"},
#line 1082 "zh_convert.gperf"
    {"\347\271\256","缰"},
#line 847 "zh_convert.gperf"
    {"\351\227\224","阖"},
#line 1941 "zh_convert.gperf"
    {"\351\214\242","钱"},
#line 3033 "zh_convert.gperf"
    {"\350\253\215","诤"},
#line 2154 "zh_convert.gperf"
    {"\350\201\226","圣"},
#line 483 "zh_convert.gperf"
    {"\351\214\240","锭"},
#line 2432 "zh_convert.gperf"
    {"\347\264\213","纹"},
#line 2040 "zh_convert.gperf"
    {"\347\276\243","群"},
#line 2684 "zh_convert.gperf"
    {"\350\264\213","赝"},
#line 1768 "zh_convert.gperf"
    {"\351\245\242","馕"},
#line 2347 "zh_convert.gperf"
    {"\345\216\233","厅"},
#line 2299 "zh_convert.gperf"
    {"\350\245\242","袒"},
#line 758 "zh_convert.gperf"
    {"\346\216\233","挂"},
#line 2263 "zh_convert.gperf"
    {"\351\243\261","飧"},
#line 2241 "zh_convert.gperf"
    {"\346\223\273","擞"},
#line 2832 "zh_convert.gperf"
    {"\350\225\225","莸"},
#line 516 "zh_convert.gperf"
    {"\350\263\255","赌"},
#line 2546 "zh_convert.gperf"
    {"\351\212\267","销"},
#line 416 "zh_convert.gperf"
    {"\350\245\240","裆"},
#line 1318 "zh_convert.gperf"
    {"\344\276\206","来"},
#line 2156 "zh_convert.gperf"
    {"\345\231\223","嘘"},
#line 2173 "zh_convert.gperf"
    {"\351\260\243","鲥"},
#line 1297 "zh_convert.gperf"
    {"\347\260\243","篑"},
#line 501 "zh_convert.gperf"
    {"\350\215\263","豆"},
#line 3101 "zh_convert.gperf"
    {"\347\207\255","烛"},
#line 1138 "zh_convert.gperf"
    {"\351\245\211","馑"},
#line 1918 "zh_convert.gperf"
    {"\346\260\243","气"},
#line 2787 "zh_convert.gperf"
    {"\351\232\261","隐"},
#line 271 "zh_convert.gperf"
    {"\351\220\272","铛"},
#line 726 "zh_convert.gperf"
    {"\350\262\242","贡"},
#line 1980 "zh_convert.gperf"
    {"\347\253\212","窃"},
#line 584 "zh_convert.gperf"
    {"\347\220\272","珐"},
#line 74 "zh_convert.gperf"
    {"\347\233\203","杯"},
#line 2409 "zh_convert.gperf"
    {"\347\266\255","维"},
#line 655 "zh_convert.gperf"
    {"\350\262\240","负"},
#line 1786 "zh_convert.gperf"
    {"\346\232\261","昵"},
#line 2725 "zh_convert.gperf"
    {"\344\272\261","夜"},
#line 1553 "zh_convert.gperf"
    {"\347\230\273","瘘"},
#line 1341 "zh_convert.gperf"
    {"\351\221\255","镧"},
#line 898 "zh_convert.gperf"
    {"\351\215\260","锾"},
#line 426 "zh_convert.gperf"
    {"\345\260\216","导"},
#line 803 "zh_convert.gperf"
    {"\351\256\214","鲧"},
#line 1816 "zh_convert.gperf"
    {"\347\215\260","狞"},
#line 1626 "zh_convert.gperf"
    {"\351\226\255","闾"},
#line 1388 "zh_convert.gperf"
    {"\351\207\220","厘"},
#line 2680 "zh_convert.gperf"
    {"\350\256\214","燕"},
#line 1481 "zh_convert.gperf"
    {"\347\207\220","磷"},
#line 2824 "zh_convert.gperf"
    {"\351\261\205","鳙"},
#line 297 "zh_convert.gperf"
    {"\351\212\203","铳"},
#line 2340 "zh_convert.gperf"
    {"\351\260\267","鲦"},
#line 2069 "zh_convert.gperf"
    {"\350\274\255","软"},
#line 2660 "zh_convert.gperf"
    {"\347\260\267","檐"},
#line 429 "zh_convert.gperf"
    {"\346\223\243","捣"},
#line 149 "zh_convert.gperf"
    {"\344\270\246","并"},
#line 882 "zh_convert.gperf"
    {"\345\212\203","划"},
#line 674 "zh_convert.gperf"
    {"\345\260\267","尴"},
#line 145 "zh_convert.gperf"
    {"\346\260\267","冰"},
#line 97 "zh_convert.gperf"
    {"\347\225\242","毕"},
#line 1299 "zh_convert.gperf"
    {"\350\225\242","蒉"},
#line 2812 "zh_convert.gperf"
    {"\350\264\217","赢"},
#line 2505 "zh_convert.gperf"
    {"\351\267\263","鹇"},
#line 3020 "zh_convert.gperf"
    {"\350\263\221","赈"},
#line 1061 "zh_convert.gperf"
    {"\345\212\215","剑"},
#line 3145 "zh_convert.gperf"
    {"\351\220\262","镯"},
#line 3104 "zh_convert.gperf"
    {"\347\205\221","煮"},
#line 2734 "zh_convert.gperf"
    {"\345\220\232","咿"},
#line 2608 "zh_convert.gperf"
    {"\350\220\262","萱"},
#line 2813 "zh_convert.gperf"
    {"\351\216\243","蓥"},
#line 2399 "zh_convert.gperf"
    {"\345\276\203","往"},
#line 1199 "zh_convert.gperf"
    {"\351\216\270","镌"},
#line 2704 "zh_convert.gperf"
    {"\347\264\204","约"},
#line 1534 "zh_convert.gperf"
    {"\351\276\215","龙"},
#line 3068 "zh_convert.gperf"
    {"\350\264\204","贽"},
#line 3028 "zh_convert.gperf"
    {"\347\210\255","争"},
#line 1308 "zh_convert.gperf"
    {"\347\266\221","捆"},
#line 1121 "zh_convert.gperf"
    {"\346\223\267","撷"},
#line 2692 "zh_convert.gperf"
    {"\351\267\260","燕"},
#line 646 "zh_convert.gperf"
    {"\345\230\270","呒"},
#line 2884 "zh_convert.gperf"
    {"\350\275\205","辕"},
#line 1489 "zh_convert.gperf"
    {"\351\272\220","麟"},
#line 1075 "zh_convert.gperf"
    {"\351\221\221","鉴"},
#line 865 "zh_convert.gperf"
    {"\350\231\226","呼"},
#line 2007 "zh_convert.gperf"
    {"\345\267\260","巯"},
#line 2504 "zh_convert.gperf"
    {"\351\226\221","闲"},
#line 2006 "zh_convert.gperf"
    {"\351\260\215","鳅"},
#line 1581 "zh_convert.gperf"
    {"\351\271\265","卤"},
#line 1551 "zh_convert.gperf"
    {"\347\260\215","篓"},
#line 1083 "zh_convert.gperf"
    {"\350\226\221","姜"},
#line 814 "zh_convert.gperf"
    {"\346\221\221","掴"},
#line 3173 "zh_convert.gperf"
    {"\350\271\265","蹴"},
#line 793 "zh_convert.gperf"
    {"\345\212\212","刽"},
#line 797 "zh_convert.gperf"
    {"\350\262\264","贵"},
#line 525 "zh_convert.gperf"
    {"\345\260\215","对"},
#line 1939 "zh_convert.gperf"
    {"\351\210\220","钤"},
#line 1778 "zh_convert.gperf"
    {"\351\244\222","馁"},
#line 810 "zh_convert.gperf"
    {"\351\215\213","锅"},
#line 1561 "zh_convert.gperf"
    {"\347\210\220","炉"},
#line 835 "zh_convert.gperf"
    {"\347\215\213","嗥"},
#line 553 "zh_convert.gperf"
    {"\346\244\217","桠"},
#line 834 "zh_convert.gperf"
    {"\351\240\217","颃"},
#line 2565 "zh_convert.gperf"
    {"\350\240\217","蟹"},
#line 51 "zh_convert.gperf"
    {"\351\240\222","颁"},
#line 1374 "zh_convert.gperf"
    {"\347\250\234","棱"},
#line 3049 "zh_convert.gperf"
    {"\350\272\221","踯"},
#line 3123 "zh_convert.gperf"
    {"\345\246\235","妆"},
#line 2387 "zh_convert.gperf"
    {"\350\245\252","袜"},
#line 535 "zh_convert.gperf"
    {"\345\245\252","夺"},
#line 53 "zh_convert.gperf"
    {"\351\210\221","钣"},
#line 1192 "zh_convert.gperf"
    {"\345\261\250","屦"},
#line 650 "zh_convert.gperf"
    {"\345\235\277","附"},
#line 50 "zh_convert.gperf"
    {"\347\262\272","稗"},
#line 1286 "zh_convert.gperf"
    {"\350\262\272","贶"},
#line 768 "zh_convert.gperf"
    {"\347\220\257","管"},
#line 2976 "zh_convert.gperf"
    {"\346\260\212","毡"},
#line 3035 "zh_convert.gperf"
    {"\351\214\232","铮"},
#line 2289 "zh_convert.gperf"
    {"\350\262\252","贪"},
#line 499 "zh_convert.gperf"
    {"\351\254\255","斗"},
#line 180 "zh_convert.gperf"
    {"\346\256\230","残"},
#line 2312 "zh_convert.gperf"
    {"\346\220\257","掏"},
#line 1976 "zh_convert.gperf"
    {"\347\253\205","窍"},
#line 3148 "zh_convert.gperf"
    {"\350\214\262","兹"},
#line 1762 "zh_convert.gperf"
    {"\345\254\255","奶"},
#line 1436 "zh_convert.gperf"
    {"\345\214\262","奁"},
#line 2094 "zh_convert.gperf"
    {"\346\216\203","扫"},
#line 1258 "zh_convert.gperf"
    {"\351\275\246","龈"},
#line 606 "zh_convert.gperf"
    {"\347\267\213","绯"},
#line 2171 "zh_convert.gperf"
    {"\350\235\225","蚀"},
#line 2698 "zh_convert.gperf"
    {"\347\230\215","疡"},
#line 1289 "zh_convert.gperf"
    {"\345\267\213","岿"},
#line 2475 "zh_convert.gperf"
    {"\350\245\262","袭"},
#line 2000 "zh_convert.gperf"
    {"\347\223\212","琼"},
#line 1543 "zh_convert.gperf"
    {"\345\230\215","喽"},
#line 766 "zh_convert.gperf"
    {"\351\227\234","关"},
#line 962 "zh_convert.gperf"
    {"\346\223\212","击"},
#line 2970 "zh_convert.gperf"
    {"\346\220\276","榨"},
#line 1707 "zh_convert.gperf"
    {"\350\254\220","谧"},
#line 1177 "zh_convert.gperf"
    {"\345\273\220","厩"},
#line 2455 "zh_convert.gperf"
    {"\350\225\252","芜"},
#line 2012 "zh_convert.gperf"
    {"\346\225\272","驱"},
#line 3150 "zh_convert.gperf"
    {"\350\262\262","赀"},
#line 2859 "zh_convert.gperf"
    {"\347\215\204","狱"},
#line 2025 "zh_convert.gperf"
    {"\350\251\256","诠"},
#line 62 "zh_convert.gperf"
    {"\351\216\212","镑"},
#line 1178 "zh_convert.gperf"
    {"\346\215\204","救"},
#line 3126 "zh_convert.gperf"
    {"\350\216\212","庄"},
#line 2908 "zh_convert.gperf"
    {"\350\230\212","蕴"},
#line 224 "zh_convert.gperf"
    {"\345\233\205","冁"},
#line 1585 "zh_convert.gperf"
    {"\350\263\202","赂"},
#line 2929 "zh_convert.gperf"
    {"\346\254\221","攒"},
#line 1206 "zh_convert.gperf"
    {"\347\235\240","眷"},
#line 2344 "zh_convert.gperf"
    {"\350\262\274","贴"},
#line 558 "zh_convert.gperf"
    {"\350\225\232","萼"},
#line 2826 "zh_convert.gperf"
    {"\346\205\202","恿"},
#line 391 "zh_convert.gperf"
    {"\351\214\257","错"},
#line 2351 "zh_convert.gperf"
    {"\351\212\205","铜"},
#line 2625 "zh_convert.gperf"
    {"\351\261\210","鳕"},
#line 451 "zh_convert.gperf"
    {"\350\253\246","谛"},
#line 2604 "zh_convert.gperf"
    {"\347\267\222","绪"},
#line 932 "zh_convert.gperf"
    {"\345\214\257","汇"},
#line 1229 "zh_convert.gperf"
    {"\350\261\210","岂"},
#line 1591 "zh_convert.gperf"
    {"\345\267\222","峦"},
#line 265 "zh_convert.gperf"
    {"\350\266\202","趁"},
#line 1899 "zh_convert.gperf"
    {"\346\267\222","凄"},
#line 278 "zh_convert.gperf"
    {"\351\213\256","铖"},
#line 979 "zh_convert.gperf"
    {"\351\267\204","鸡"},
#line 263 "zh_convert.gperf"
    {"\350\245\257","衬"},
#line 1559 "zh_convert.gperf"
    {"\346\253\250","栌"},
#line 2213 "zh_convert.gperf"
    {"\351\226\202","闩"},
#line 800 "zh_convert.gperf"
    {"\347\267\204","绲"},
#line 222 "zh_convert.gperf"
    {"\351\245\236","馋"},
#line 2785 "zh_convert.gperf"
    {"\347\231\256","瘾"},
#line 1629 "zh_convert.gperf"
    {"\345\221\202","吕"},
#line 2083 "zh_convert.gperf"
    {"\350\263\275","赛"},
#line 1609 "zh_convert.gperf"
    {"\347\276\205","罗"},
#line 2486 "zh_convert.gperf"
    {"\345\263\275","峡"},
#line 890 "zh_convert.gperf"
    {"\350\251\261","话"},
#line 1450 "zh_convert.gperf"
    {"\346\226\202","敛"},
#line 1058 "zh_convert.gperf"
    {"\351\220\247","锏"},
#line 594 "zh_convert.gperf"
    {"\351\242\277","帆"},
#line 1011 "zh_convert.gperf"
    {"\346\214\276","挟"},
#line 348 "zh_convert.gperf"
    {"\347\264\224","纯"},
#line 3106 "zh_convert.gperf"
    {"\350\262\257","贮"},
#line 1298 "zh_convert.gperf"
    {"\350\201\265","聩"},
#line 893 "zh_convert.gperf"
    {"\346\207\275","欢"},
#line 3009 "zh_convert.gperf"
    {"\345\201\265","侦"},
#line 2294 "zh_convert.gperf"
    {"\347\275\210","坛"},
#line 354 "zh_convert.gperf"
    {"\347\266\275","绰"},
#line 2021 "zh_convert.gperf"
    {"\350\246\273","觑"},
#line 1251 "zh_convert.gperf"
    {"\345\260\205","克"},
#line 3015 "zh_convert.gperf"
    {"\350\262\236","贞"},
#line 410 "zh_convert.gperf"
    {"\345\275\210","弹"},
#line 2888 "zh_convert.gperf"
    {"\345\266\275","岳"},
#line 3177 "zh_convert.gperf"
    {"\351\221\275","钻"},
#line 946 "zh_convert.gperf"
    {"\351\226\275","阍"},
#line 154 "zh_convert.gperf"
    {"\347\274\275","钵"},
#line 580 "zh_convert.gperf"
    {"\347\275\260","罚"},
#line 1005 "zh_convert.gperf"
    {"\351\257\275","鲫"},
#line 2902 "zh_convert.gperf"
    {"\351\204\226","郧"},
#line 937 "zh_convert.gperf"
    {"\346\275\260","溃"},
#line 2320 "zh_convert.gperf"
    {"\351\213\261","铽"},
#line 2778 "zh_convert.gperf"
    {"\351\212\246","铟"},
#line 1743 "zh_convert.gperf"
    {"\351\272\275","么"},
#line 1655 "zh_convert.gperf"
    {"\345\213\261","劢"},
#line 2288 "zh_convert.gperf"
    {"\347\231\261","瘫"},
#line 26 "zh_convert.gperf"
    {"\351\212\250","铵"},
#line 2141 "zh_convert.gperf"
    {"\350\251\265","诜"},
#line 554 "zh_convert.gperf"
    {"\345\225\236","哑"},
#line 837 "zh_convert.gperf"
    {"\350\240\224","蚝"},
#line 163 "zh_convert.gperf"
    {"\351\210\275","钸"},
#line 56 "zh_convert.gperf"
    {"\350\276\246","办"},
#line 1721 "zh_convert.gperf"
    {"\347\216\205","妙"},
#line 3013 "zh_convert.gperf"
    {"\347\246\216","祯"},
#line 21 "zh_convert.gperf"
    {"\350\253\263","谙"},
#line 2521 "zh_convert.gperf"
    {"\347\276\250","羡"},
#line 2949 "zh_convert.gperf"
    {"\347\253\210","灶"},
#line 1527 "zh_convert.gperf"
    {"\346\253\263","栊"},
#line 704 "zh_convert.gperf"
    {"\345\230\205","慨"},
#line 437 "zh_convert.gperf"
    {"\346\253\210","凳"},
#line 1345 "zh_convert.gperf"
    {"\346\224\254","揽"},
#line 2440 "zh_convert.gperf"
    {"\347\224\225","瓮"},
#line 3122 "zh_convert.gperf"
    {"\351\245\214","馔"},
#line 450 "zh_convert.gperf"
    {"\350\224\225","蒂"},
#line 2273 "zh_convert.gperf"
    {"\351\260\250","鳎"},
#line 2946 "zh_convert.gperf"
    {"\345\224\225","唣"},
#line 3063 "zh_convert.gperf"
    {"\350\242\240","帙"},
#line 2015 "zh_convert.gperf"
    {"\350\246\267","觑"},
#line 3076 "zh_convert.gperf"
    {"\351\220\230","钟"},
#line 2755 "zh_convert.gperf"
    {"\345\246\267","侄"},
#line 2973 "zh_convert.gperf"
    {"\351\275\213","斋"},
#line 2427 "zh_convert.gperf"
    {"\350\254\202","谓"},
#line 2441 "zh_convert.gperf"
    {"\347\275\213","瓮"},
#line 1780 "zh_convert.gperf"
    {"\345\253\260","嫩"},
#line 37 "zh_convert.gperf"
    {"\345\245\247","奥"},
#line 2524 "zh_convert.gperf"
    {"\345\273\202","厢"},
#line 1402 "zh_convert.gperf"
    {"\345\213\265","励"},
#line 2129 "zh_convert.gperf"
    {"\350\231\265","蛇"},
#line 1166 "zh_convert.gperf"
    {"\351\235\232","靓"},
#line 1330 "zh_convert.gperf"
    {"\351\241\202","赖"},
#line 561 "zh_convert.gperf"
    {"\351\215\224","锷"},
#line 930 "zh_convert.gperf"
    {"\350\255\255","毁"},
#line 1697 "zh_convert.gperf"
    {"\347\236\207","眯"},
#line 3125 "zh_convert.gperf"
    {"\347\262\247","妆"},
#line 1281 "zh_convert.gperf"
    {"\350\252\221","诳"},
#line 1874 "zh_convert.gperf"
    {"\350\262\247","贫"},
#line 2637 "zh_convert.gperf"
    {"\350\250\223","训"},
#line 2555 "zh_convert.gperf"
    {"\345\215\224","协"},
#line 1185 "zh_convert.gperf"
    {"\344\276\267","局"},
#line 1545 "zh_convert.gperf"
    {"\346\250\223","楼"},
#line 290 "zh_convert.gperf"
    {"\351\243\255","饬"},
#line 3181 "zh_convert.gperf"
    {"\351\261\222","鳟"},
#line 1714 "zh_convert.gperf"
    {"\351\273\275","黾"},
#line 2754 "zh_convert.gperf"
    {"\345\233\210","呓"},
#line 225 "zh_convert.gperf"
    {"\347\224\242","产"},
#line 954 "zh_convert.gperf"
    {"\347\246\215","祸"},
#line 1983 "zh_convert.gperf"
    {"\346\254\275","钦"},
#line 1515 "zh_convert.gperf"
    {"\351\216\246","镏"},
#line 2074 "zh_convert.gperf"
    {"\351\212\263","锐"},
#line 615 "zh_convert.gperf"
    {"\351\233\260","氛"},
#line 383 "zh_convert.gperf"
    {"\346\224\242","攒"},
#line 1839 "zh_convert.gperf"
    {"\346\255\220","欧"},
#line 1212 "zh_convert.gperf"
    {"\347\216\250","珏"},
#line 563 "zh_convert.gperf"
    {"\351\230\250","厄"},
#line 1599 "zh_convert.gperf"
    {"\347\225\247","略"},
#line 981 "zh_convert.gperf"
    {"\351\275\217","齑"},
#line 1055 "zh_convert.gperf"
    {"\347\271\255","茧"},
#line 1563 "zh_convert.gperf"
    {"\347\275\217","垆"},
#line 2317 "zh_convert.gperf"
    {"\351\236\200","鼗"},
#line 287 "zh_convert.gperf"
    {"\351\275\222","齿"},
#line 1997 "zh_convert.gperf"
    {"\350\253\213","请"},
#line 2125 "zh_convert.gperf"
    {"\347\267\224","绱"},
#line 1826 "zh_convert.gperf"
    {"\350\276\263","农"},
#line 1796 "zh_convert.gperf"
    {"\345\253\213","袅"},
#line 970 "zh_convert.gperf"
    {"\347\276\210","羁"},
#line 453 "zh_convert.gperf"
    {"\345\267\224","巅"},
#line 344 "zh_convert.gperf"
    {"\351\214\230","锤"},
#line 238 "zh_convert.gperf"
    {"\345\232\220","尝"},
#line 1421 "zh_convert.gperf"
    {"\350\214\230","荔"},
#line 1366 "zh_convert.gperf"
    {"\351\260\263","鳓"},
#line 168 "zh_convert.gperf"
    {"\350\262\241","财"},
#line 2489 "zh_convert.gperf"
    {"\350\275\204","辖"},
#line 1222 "zh_convert.gperf"
    {"\351\247\277","骏"},
#line 683 "zh_convert.gperf"
    {"\345\262\241","冈"},
#line 476 "zh_convert.gperf"
    {"\351\260\210","鲽"},
#line 2900 "zh_convert.gperf"
    {"\347\264\234","纭"},
#line 2208 "zh_convert.gperf"
    {"\346\275\204","漱"},
#line 2937 "zh_convert.gperf"
    {"\350\264\234","赃"},
#line 2898 "zh_convert.gperf"
    {"\346\260\263","氲"},
#line 3114 "zh_convert.gperf"
    {"\345\260\210","专"},
#line 2883 "zh_convert.gperf"
    {"\350\235\257","猿"},
#line 2975 "zh_convert.gperf"
    {"\346\260\210","毡"},
#line 2700 "zh_convert.gperf"
    {"\351\242\272","扬"},
#line 2468 "zh_convert.gperf"
    {"\351\250\226","骛"},
#line 2037 "zh_convert.gperf"
    {"\347\242\272","确"},
#line 1326 "zh_convert.gperf"
    {"\347\235\236","睐"},
#line 2810 "zh_convert.gperf"
    {"\350\236\242","萤"},
#line 1920 "zh_convert.gperf"
    {"\350\250\226","讫"},
#line 3012 "zh_convert.gperf"
    {"\347\242\252","砧"},
#line 530 "zh_convert.gperf"
    {"\345\242\252","墩"},
#line 1026 "zh_convert.gperf"
    {"\351\247\225","驾"},
#line 1208 "zh_convert.gperf"
    {"\351\233\213","隽"},
#line 376 "zh_convert.gperf"
    {"\350\247\225","粗"},
#line 1381 "zh_convert.gperf"
    {"\347\223\210","璃"},
#line 2318 "zh_convert.gperf"
    {"\351\236\211","鼗"},
#line 3141 "zh_convert.gperf"
    {"\346\247\225","桌"},
#line 1641 "zh_convert.gperf"
    {"\350\224\264","麻"},
#line 912 "zh_convert.gperf"
    {"\345\271\221","徽"},
#line 1549 "zh_convert.gperf"
    {"\351\253\217","髅"},
#line 3169 "zh_convert.gperf"
    {"\350\253\217","诹"},
#line 2939 "zh_convert.gperf"
    {"\351\253\222","脏"},
#line 428 "zh_convert.gperf"
    {"\346\220\227","捣"},
#line 764 "zh_convert.gperf"
    {"\350\247\200","观"},
#line 1469 "zh_convert.gperf"
    {"\350\253\222","谅"},
#line 831 "zh_convert.gperf"
    {"\351\240\234","颌"},
#line 1244 "zh_convert.gperf"
    {"\346\247\200","稿"},
#line 1807 "zh_convert.gperf"
    {"\351\216\263","镍"},
#line 1814 "zh_convert.gperf"
    {"\346\223\260","拧"},
#line 384 "zh_convert.gperf"
    {"\347\253\204","窜"},
#line 340 "zh_convert.gperf"
    {"\351\227\226","闯"},
#line 3136 "zh_convert.gperf"
    {"\350\253\204","谆"},
#line 2045 "zh_convert.gperf"
    {"\350\225\230","荛"},
#line 2602 "zh_convert.gperf"
    {"\346\225\230","叙"},
#line 2580 "zh_convert.gperf"
    {"\345\200\226","幸"},
#line 575 "zh_convert.gperf"
    {"\351\202\207","迩"},
#line 1702 "zh_convert.gperf"
    {"\347\276\213","芈"},
#line 1866 "zh_convert.gperf"
    {"\351\247\242","骈"},
#line 2771 "zh_convert.gperf"
    {"\351\216\260","镒"},
#line 693 "zh_convert.gperf"
    {"\346\224\252","搅"},
#line 1100 "zh_convert.gperf"
    {"\351\256\253","鲛"},
#line 730 "zh_convert.gperf"
    {"\351\211\244","钩"},
#line 244 "zh_convert.gperf"
    {"\345\216\260","厂"},
#line 2239 "zh_convert.gperf"
    {"\351\242\274","飕"},
#line 2749 "zh_convert.gperf"
    {"\350\211\244","舣"},
#line 960 "zh_convert.gperf"
    {"\345\230\260","叽"},
#line 1648 "zh_convert.gperf"
    {"\347\242\274","码"},
#line 402 "zh_convert.gperf"
    {"\346\256\253","殚"},
#line 2177 "zh_convert.gperf"
    {"\346\230\260","是"},
#line 2575 "zh_convert.gperf"
    {"\345\260\213","寻"},
#line 342 "zh_convert.gperf"
    {"\346\220\245","捶"},
#line 760 "zh_convert.gperf"
    {"\346\236\264","拐"},
#line 2537 "zh_convert.gperf"
    {"\346\233\217","向"},
#line 3157 "zh_convert.gperf"
    {"\345\247\211","姊"},
#line 2372 "zh_convert.gperf"
    {"\351\252\275","腿"},
#line 1639 "zh_convert.gperf"
    {"\345\252\275","妈"},
#line 1988 "zh_convert.gperf"
    {"\345\224\232","吣"},
#line 2726 "zh_convert.gperf"
    {"\346\233\204","晔"},
#line 669 "zh_convert.gperf"
    {"\350\223\213","盖"},
#line 2205 "zh_convert.gperf"
    {"\345\204\265","倏"},
#line 1062 "zh_convert.gperf"
    {"\345\212\222","剑"},
#line 417 "zh_convert.gperf"
    {"\346\223\213","挡"},
#line 2080 "zh_convert.gperf"
    {"\351\242\257","飒"},
#line 2534 "zh_convert.gperf"
    {"\351\245\227","飨"},
#line 2119 "zh_convert.gperf"
    {"\351\261\224","鳝"},
#line 2965 "zh_convert.gperf"
    {"\345\212\204","札"},
#line 2683 "zh_convert.gperf"
    {"\350\261\224","艳"},
#line 58 "zh_convert.gperf"
    {"\347\211\223","榜"},
#line 801 "zh_convert.gperf"
    {"\350\242\236","衮"},
#line 2490 "zh_convert.gperf"
    {"\351\216\213","辖"},
#line 625 "zh_convert.gperf"
    {"\347\230\213","疯"},
#line 1873 "zh_convert.gperf"
    {"\350\230\213","苹"},
#line 660 "zh_convert.gperf"
    {"\351\260\222","鳆"},
#line 2781 "zh_convert.gperf"
    {"\351\232\202","阴"},
#line 386 "zh_convert.gperf"
    {"\347\260\222","篡"},
#line 1255 "zh_convert.gperf"
    {"\345\242\276","垦"},
#line 2123 "zh_convert.gperf"
    {"\350\247\264","觞"},
#line 2479 "zh_convert.gperf"
    {"\344\277\202","系"},
#line 1007 "zh_convert.gperf"
    {"\345\202\242","家"},
#line 1709 "zh_convert.gperf"
    {"\347\267\234","绵"},
#line 2865 "zh_convert.gperf"
    {"\350\255\275","誉"},
#line 1517 "zh_convert.gperf"
    {"\351\250\256","骝"},
#line 165 "zh_convert.gperf"
    {"\344\275\210","布"},
#line 3078 "zh_convert.gperf"
    {"\347\250\256","种"},
#line 1598 "zh_convert.gperf"
    {"\344\272\202","乱"},
#line 339 "zh_convert.gperf"
    {"\346\220\266","抢"},
#line 46 "zh_convert.gperf"
    {"\351\256\201","鲅"},
#line 266 "zh_convert.gperf"
    {"\351\275\224","龀"},
#line 3005 "zh_convert.gperf"
    {"\350\256\201","谪"},
#line 66 "zh_convert.gperf"
    {"\351\243\275","饱"},
#line 1485 "zh_convert.gperf"
    {"\350\275\224","辚"},
#line 1963 "zh_convert.gperf"
    {"\347\243\275","硗"},
#line 2621 "zh_convert.gperf"
    {"\351\217\207","旋"},
#line 1631 "zh_convert.gperf"
    {"\347\251\255","稆"},
#line 3064 "zh_convert.gperf"
    {"\350\243\275","制"},
#line 1122 "zh_convert.gperf"
    {"\346\275\224","洁"},
#line 791 "zh_convert.gperf"
    {"\350\251\255","诡"},
#line 1529 "zh_convert.gperf"
    {"\347\223\217","珑"},
#line 2189 "zh_convert.gperf"
    {"\345\243\275","寿"},
#line 2647 "zh_convert.gperf"
    {"\345\251\255","娅"},
#line 2618 "zh_convert.gperf"
    {"\346\245\245","楦"},
#line 2078 "zh_convert.gperf"
    {"\347\201\221","洒"},
#line 2862 "zh_convert.gperf"
    {"\347\246\246","御"},
#line 2845 "zh_convert.gperf"
    {"\350\246\246","觎"},
#line 408 "zh_convert.gperf"
    {"\345\225\227","啖"},
#line 679 "zh_convert.gperf"
    {"\346\246\246","干"},
#line 49 "zh_convert.gperf"
    {"\346\225\227","败"},
#line 1547 "zh_convert.gperf"
    {"\350\224\236","蒌"},
#line 1438 "zh_convert.gperf"
    {"\345\245\251","奁"},
#line 1860 "zh_convert.gperf"
    {"\351\265\254","鹏"},
#line 3045 "zh_convert.gperf"
    {"\345\247\252","侄"},
#line 1052 "zh_convert.gperf"
    {"\347\236\274","睑"},
#line 1572 "zh_convert.gperf"
    {"\346\223\204","掳"},
#line 2972 "zh_convert.gperf"
    {"\350\251\220","诈"},
#line 2666 "zh_convert.gperf"
    {"\351\271\275","盐"},
#line 1213 "zh_convert.gperf"
    {"\347\265\225","绝"},
#line 135 "zh_convert.gperf"
    {"\347\271\275","缤"},
#line 1384 "zh_convert.gperf"
    {"\350\224\276","藜"},
#line 732 "zh_convert.gperf"
    {"\346\220\206","构"},
#line 598 "zh_convert.gperf"
    {"\350\262\251","贩"},
#line 1364 "zh_convert.gperf"
    {"\350\200\256","耢"},
#line 262 "zh_convert.gperf"
    {"\347\250\261","称"},
#line 874 "zh_convert.gperf"
    {"\350\250\261","许"},
#line 11 "zh_convert.gperf"
    {"\351\216\204","锿"},
#line 325 "zh_convert.gperf"
    {"\347\265\200","绌"},
#line 2815 "zh_convert.gperf"
    {"\347\231\255","瘿"},
#line 2333 "zh_convert.gperf"
    {"\351\253\224","体"},
#line 1906 "zh_convert.gperf"
    {"\350\230\204","蕲"},
#line 1601 "zh_convert.gperf"
    {"\346\216\204","抡"},
#line 1047 "zh_convert.gperf"
    {"\346\217\200","拣"},
#line 124 "zh_convert.gperf"
    {"\351\214\266","表"},
#line 2852 "zh_convert.gperf"
    {"\345\202\264","伛"},
#line 2831 "zh_convert.gperf"
    {"\347\214\266","犹"},
#line 2747 "zh_convert.gperf"
    {"\351\240\244","颐"},
#line 2198 "zh_convert.gperf"
    {"\347\264\223","纾"},
#line 2936 "zh_convert.gperf"
    {"\350\264\223","赃"},
#line 425 "zh_convert.gperf"
    {"\350\225\251","荡"},
#line 2769 "zh_convert.gperf"
    {"\350\256\233","呓"},
#line 1661 "zh_convert.gperf"
    {"\347\236\236","瞒"},
#line 1886 "zh_convert.gperf"
    {"\345\203\225","仆"},
#line 1642 "zh_convert.gperf"
    {"\350\236\236","蚂"},
#line 117 "zh_convert.gperf"
    {"\351\217\242","镖"},
#line 2619 "zh_convert.gperf"
    {"\347\265\242","绚"},
#line 748 "zh_convert.gperf"
    {"\351\265\240","鹄"},
#line 2622 "zh_convert.gperf"
    {"\351\236\276","靴"},
#line 372 "zh_convert.gperf"
    {"\345\217\242","丛"},
#line 3083 "zh_convert.gperf"
    {"\351\200\261","周"},
#line 2407 "zh_convert.gperf"
    {"\347\202\272","为"},
#line 109 "zh_convert.gperf"
    {"\350\262\266","贬"},
#line 781 "zh_convert.gperf"
    {"\346\247\274","规"},
#line 364 "zh_convert.gperf"
    {"\346\200\261","匆"},
#line 284 "zh_convert.gperf"
    {"\351\246\263","驰"},
#line 1951 "zh_convert.gperf"
    {"\351\214\206","锖"},
#line 565 "zh_convert.gperf"
    {"\351\244\223","饿"},
#line 1200 "zh_convert.gperf"
    {"\351\220\253","镌"},
#line 1953 "zh_convert.gperf"
    {"\351\217\271","镪"},
#line 2616 "zh_convert.gperf"
    {"\347\222\277","璇"},
#line 1207 "zh_convert.gperf"
    {"\347\265\271","绢"},
#line 1842 "zh_convert.gperf"
    {"\347\224\214","瓯"},
#line 1761 "zh_convert.gperf"
    {"\345\246\263","你"},
#line 845 "zh_convert.gperf"
    {"\350\246\210","核"},
#line 1048 "zh_convert.gperf"
    {"\346\222\277","捡"},
#line 1009 "zh_convert.gperf"
    {"\346\265\271","浃"},
#line 512 "zh_convert.gperf"
    {"\351\240\223","顿"},
#line 72 "zh_convert.gperf"
    {"\346\217\271","背"},
#line 2298 "zh_convert.gperf"
    {"\351\214\237","锬"},
#line 204 "zh_convert.gperf"
    {"\351\215\244","锸"},
#line 1890 "zh_convert.gperf"
    {"\350\245\206","幞"},
#line 1241 "zh_convert.gperf"
    {"\345\214\237","炕"},
#line 415 "zh_convert.gperf"
    {"\347\225\266","当"},
#line 1701 "zh_convert.gperf"
    {"\347\246\260","祢"},
#line 2014 "zh_convert.gperf"
    {"\350\246\260","觑"},
#line 1063 "zh_convert.gperf"
    {"\345\212\224","剑"},
#line 2382 "zh_convert.gperf"
    {"\347\261\234","箨"},
#line 2550 "zh_convert.gperf"
    {"\345\202\232","效"},
#line 2334 "zh_convert.gperf"
    {"\345\261\234","屉"},
#line 723 "zh_convert.gperf"
    {"\351\276\224","龚"},
#line 1922 "zh_convert.gperf"
    {"\345\203\211","佥"},
#line 2201 "zh_convert.gperf"
    {"\350\264\226","赎"},
#line 1025 "zh_convert.gperf"
    {"\345\203\271","价"},
#line 1049 "zh_convert.gperf"
    {"\346\242\230","枧"},
#line 1788 "zh_convert.gperf"
    {"\351\256\216","鲇"},
#line 27 "zh_convert.gperf"
    {"\350\217\264","庵"},
#line 1216 "zh_convert.gperf"
    {"\351\220\235","镢"},
#line 304 "zh_convert.gperf"
    {"\350\256\216","雠"},
#line 22 "zh_convert.gperf"
    {"\351\236\214","鞍"},
#line 3156 "zh_convert.gperf"
    {"\351\275\234","龇"},
#line 2570 "zh_convert.gperf"
    {"\347\267\244","绁"},
#line 436 "zh_convert.gperf"
    {"\351\220\231","镫"},
#line 2739 "zh_convert.gperf"
    {"\345\275\234","彝"},
#line 227 "zh_convert.gperf"
    {"\350\225\206","蒇"},
#line 2920 "zh_convert.gperf"
    {"\347\201\275","灾"},
#line 1512 "zh_convert.gperf"
    {"\347\222\242","琉"},
#line 2336 "zh_convert.gperf"
    {"\351\214\253","锡"},
#line 2350 "zh_convert.gperf"
    {"\350\201\275","听"},
#line 2422 "zh_convert.gperf"
    {"\345\201\275","伪"},
#line 177 "zh_convert.gperf"
    {"\351\251\202","骖"},
#line 1914 "zh_convert.gperf"
    {"\345\225\237","启"},
#line 2795 "zh_convert.gperf"
    {"\347\223\224","璎"},
#line 757 "zh_convert.gperf"
    {"\345\211\256","剐"},
#line 23 "zh_convert.gperf"
    {"\351\265\252","鹌"},
#line 1068 "zh_convert.gperf"
    {"\350\246\213","见"},
#line 1156 "zh_convert.gperf"
    {"\347\203\264","烃"},
#line 401 "zh_convert.gperf"
    {"\346\223\224","担"},
#line 1916 "zh_convert.gperf"
    {"\346\206\207","憩"},
#line 1824 "zh_convert.gperf"
    {"\350\206\277","脓"},
#line 1773 "zh_convert.gperf"
    {"\345\240\226","垴"},
#line 1441 "zh_convert.gperf"
    {"\347\222\211","琏"},
#line 1604 "zh_convert.gperf"
    {"\345\234\207","囵"},
#line 2248 "zh_convert.gperf"
    {"\347\270\256","缩"},
#line 3166 "zh_convert.gperf"
    {"\345\202\257","偬"},
#line 1881 "zh_convert.gperf"
    {"\351\256\203","鲆"},
#line 1094 "zh_convert.gperf"
    {"\351\206\254","酱"},
#line 774 "zh_convert.gperf"
    {"\350\262\253","贯"},
#line 3008 "zh_convert.gperf"
    {"\351\267\223","鹧"},
#line 352 "zh_convert.gperf"
    {"\351\206\225","醇"},
#line 1837 "zh_convert.gperf"
    {"\345\230\224","呕"},
#line 2003 "zh_convert.gperf"
    {"\347\247\214","秋"},
#line 1921 "zh_convert.gperf"
    {"\351\217\232","戚"},
#line 1991 "zh_convert.gperf"
    {"\345\202\276","倾"},
#line 1975 "zh_convert.gperf"
    {"\351\265\262","鹊"},
#line 475 "zh_convert.gperf"
    {"\350\253\234","谍"},
#line 2224 "zh_convert.gperf"
    {"\347\265\262","丝"},
#line 2434 "zh_convert.gperf"
    {"\350\236\241","蚊"},
#line 2694 "zh_convert.gperf"
    {"\346\217\232","扬"},
#line 3039 "zh_convert.gperf"
    {"\351\204\255","郑"},
#line 1946 "zh_convert.gperf"
    {"\346\247\247","椠"},
#line 1471 "zh_convert.gperf"
    {"\347\231\202","疗"},
#line 1039 "zh_convert.gperf"
    {"\350\211\261","艰"},
#line 3153 "zh_convert.gperf"
    {"\351\214\231","锱"},
#line 1060 "zh_convert.gperf"
    {"\345\211\261","剑"},
#line 1742 "zh_convert.gperf"
    {"\351\245\235","馍"},
#line 2168 "zh_convert.gperf"
    {"\346\231\202","时"},
#line 3029 "zh_convert.gperf"
    {"\347\214\231","狰"},
#line 889 "zh_convert.gperf"
    {"\347\225\253","画"},
#line 1453 "zh_convert.gperf"
    {"\350\245\235","裣"},
#line 786 "zh_convert.gperf"
    {"\350\246\217","规"},
#line 3162 "zh_convert.gperf"
    {"\347\270\261","纵"},
#line 1262 "zh_convert.gperf"
    {"\347\236\230","眍"},
#line 111 "zh_convert.gperf"
    {"\350\256\212","变"},
#line 2750 "zh_convert.gperf"
    {"\350\236\230","蚁"},
#line 817 "zh_convert.gperf"
    {"\351\214\201","锞"},
#line 131 "zh_convert.gperf"
    {"\345\204\220","傧"},
#line 78 "zh_convert.gperf"
    {"\347\213\275","狈"},
#line 80 "zh_convert.gperf"
    {"\350\262\235","贝"},
#line 2699 "zh_convert.gperf"
    {"\351\231\275","阳"},
#line 2919 "zh_convert.gperf"
    {"\351\233\234","杂"},
#line 432 "zh_convert.gperf"
    {"\347\233\234","盗"},
#line 2906 "zh_convert.gperf"
    {"\346\203\262","恽"},
#line 1098 "zh_convert.gperf"
    {"\350\206\240","胶"},
#line 2402 "zh_convert.gperf"
    {"\346\234\242","望"},
#line 2916 "zh_convert.gperf"
    {"\347\264\256","扎"},
#line 1652 "zh_convert.gperf"
    {"\351\247\241","骂"},
#line 2503 "zh_convert.gperf"
    {"\351\212\234","衔"},
#line 75 "zh_convert.gperf"
    {"\351\265\257","鹎"},
#line 331 "zh_convert.gperf"
    {"\345\211\265","创"},
#line 2658 "zh_convert.gperf"
    {"\345\267\226","岩"},
#line 1751 "zh_convert.gperf"
    {"\347\225\235","亩"},
#line 885 "zh_convert.gperf"
    {"\350\217\257","华"},
#line 551 "zh_convert.gperf"
    {"\351\265\236","鹅"},
#line 2822 "zh_convert.gperf"
    {"\351\217\236","镛"},
#line 1854 "zh_convert.gperf"
    {"\350\202\247","胚"},
#line 1020 "zh_convert.gperf"
    {"\347\265\236","绞"},
#line 1669 "zh_convert.gperf"
    {"\347\270\265","缦"},
#line 1926 "zh_convert.gperf"
    {"\347\261\244","签"},
#line 789 "zh_convert.gperf"
    {"\351\276\234","龟"},
#line 2984 "zh_convert.gperf"
    {"\344\275\224","占"},
#line 2282 "zh_convert.gperf"
    {"\351\247\230","骀"},
#line 202 "zh_convert.gperf"
    {"\345\261\244","层"},
#line 2517 "zh_convert.gperf"
    {"\347\217\276","现"},
#line 2424 "zh_convert.gperf"
    {"\350\235\237","猬"},
#line 2169 "zh_convert.gperf"
    {"\347\242\251","硕"},
#line 1853 "zh_convert.gperf"
    {"\347\244\256","炮"},
#line 1938 "zh_convert.gperf"
    {"\350\225\201","荨"},
#line 1790 "zh_convert.gperf"
    {"\346\222\232","捻"},
#line 1887 "zh_convert.gperf"
    {"\346\222\262","扑"},
#line 536 "zh_convert.gperf"
    {"\351\220\270","铎"},
#line 86 "zh_convert.gperf"
    {"\351\214\233","锛"},
#line 640 "zh_convert.gperf"
    {"\347\264\261","绂"},
#line 1567 "zh_convert.gperf"
    {"\350\275\244","轳"},
#line 2423 "zh_convert.gperf"
    {"\345\203\236","伪"},
#line 2075 "zh_convert.gperf"
    {"\346\275\244","润"},
#line 2118 "zh_convert.gperf"
    {"\351\261\223","鳝"},
#line 190 "zh_convert.gperf"
    {"\350\222\274","苍"},
#line 805 "zh_convert.gperf"
    {"\345\222\274","呙"},
#line 2682 "zh_convert.gperf"
    {"\350\261\223","艳"},
#line 369 "zh_convert.gperf"
    {"\350\224\245","葱"},
#line 2261 "zh_convert.gperf"
    {"\347\214\273","狲"},
#line 895 "zh_convert.gperf"
    {"\350\262\233","獾"},
#line 2146 "zh_convert.gperf"
    {"\350\256\205","审"},
#line 859 "zh_convert.gperf"
    {"\351\244\261","糇"},
#line 1530 "zh_convert.gperf"
    {"\347\244\261","砻"},
#line 1197 "zh_convert.gperf"
    {"\351\242\266","飓"},
#line 1729 "zh_convert.gperf"
    {"\345\206\272","泯"},
#line 418 "zh_convert.gperf"
    {"\346\224\251","挡"},
#line 1703 "zh_convert.gperf"
    {"\345\206\252","幂"},
#line 1782 "zh_convert.gperf"
    {"\350\234\272","霓"},
#line 3071 "zh_convert.gperf"
    {"\351\250\255","骘"},
#line 1112 "zh_convert.gperf"
    {"\347\250\255","秸"},
#line 745 "zh_convert.gperf"
    {"\350\240\261","蛊"},
#line 2137 "zh_convert.gperf"
    {"\350\250\255","设"},
#line 1645 "zh_convert.gperf"
    {"\345\230\234","唛"},
#line 68 "zh_convert.gperf"
    {"\345\240\261","报"},
#line 2085 "zh_convert.gperf"
    {"\345\202\230","伞"},
#line 1747 "zh_convert.gperf"
    {"\351\217\214","镆"},
#line 1772 "zh_convert.gperf"
    {"\351\220\203","铙"},
#line 612 "zh_convert.gperf"
    {"\350\262\273","费"},
#line 1422 "zh_convert.gperf"
    {"\350\222\236","莅"},
#line 559 "zh_convert.gperf"
    {"\350\253\244","谔"},
#line 1323 "zh_convert.gperf"
    {"\351\214\270","铼"},
#line 2689 "zh_convert.gperf"
    {"\351\250\220","验"},
#line 1416 "zh_convert.gperf"
    {"\347\220\215","璃"},
#line 637 "zh_convert.gperf"
    {"\350\206\232","肤"},
#line 1123 "zh_convert.gperf"
    {"\350\250\220","讦"},
#line 2264 "zh_convert.gperf"
    {"\346\220\215","损"},
#line 411 "zh_convert.gperf"
    {"\346\206\232","惮"},
#line 2515 "zh_convert.gperf"
    {"\346\206\262","宪"},
#line 2442 "zh_convert.gperf"
    {"\346\222\276","挝"},
#line 1821 "zh_convert.gperf"
    {"\345\204\202","侬"},
#line 2430 "zh_convert.gperf"
    {"\351\244\265","喂"},
#line 1706 "zh_convert.gperf"
    {"\350\246\224","觅"},
#line 798 "zh_convert.gperf"
    {"\351\261\226","鳜"},
#line 2541 "zh_convert.gperf"
    {"\346\242\237","枭"},
#line 2686 "zh_convert.gperf"
    {"\351\206\274","燕"},
#line 400 "zh_convert.gperf"
    {"\350\262\270","贷"},
#line 1464 "zh_convert.gperf"
    {"\346\250\221","梁"},
#line 1322 "zh_convert.gperf"
    {"\350\220\212","莱"},
#line 1846 "zh_convert.gperf"
    {"\347\233\244","盘"},
#line 2338 "zh_convert.gperf"
    {"\351\227\220","阗"},
#line 2461 "zh_convert.gperf"
    {"\351\265\241","鹉"},
#line 922 "zh_convert.gperf"
    {"\347\227\220","蛔"},
#line 1165 "zh_convert.gperf"
    {"\351\217\241","镜"},
#line 1363 "zh_convert.gperf"
    {"\347\265\241","络"},
#line 157 "zh_convert.gperf"
    {"\346\204\275","博"},
#line 1573 "zh_convert.gperf"
    {"\346\253\223","橹"},
#line 2193 "zh_convert.gperf"
    {"\345\200\220","倏"},
#line 2073 "zh_convert.gperf"
    {"\345\217\241","睿"},
#line 1654 "zh_convert.gperf"
    {"\350\262\267","买"},
#line 2497 "zh_convert.gperf"
    {"\345\225\243","衔"},
#line 1375 "zh_convert.gperf"
    {"\350\224\206","菱"},
#line 666 "zh_convert.gperf"
    {"\345\214\203","丐"},
#line 1791 "zh_convert.gperf"
    {"\346\224\206","撵"},
#line 2203 "zh_convert.gperf"
    {"\346\225\270","数"},
#line 1741 "zh_convert.gperf"
    {"\351\245\203","馍"},
#line 1952 "zh_convert.gperf"
    {"\351\217\230","锵"},
#line 728 "zh_convert.gperf"
    {"\347\267\261","缑"},
#line 519 "zh_convert.gperf"
    {"\350\200\221","端"},
#line 2912 "zh_convert.gperf"
    {"\351\206\236","酝"},
#line 1686 "zh_convert.gperf"
    {"\345\200\221","们"},
#line 1972 "zh_convert.gperf"
    {"\350\225\216","荞"},
#line 1074 "zh_convert.gperf"
    {"\351\215\265","键"},
#line 2456 "zh_convert.gperf"
    {"\345\225\216","忤"},
#line 358 "zh_convert.gperf"
    {"\350\276\244","辞"},
#line 1479 "zh_convert.gperf"
    {"\347\215\265","猎"},
#line 2116 "zh_convert.gperf"
    {"\351\245\215","膳"},
#line 2955 "zh_convert.gperf"
    {"\346\276\244","泽"},
#line 668 "zh_convert.gperf"
    {"\346\247\251","概"},
#line 2918 "zh_convert.gperf"
    {"\350\245\215","杂"},
#line 243 "zh_convert.gperf"
    {"\351\225\267","长"},
#line 552 "zh_convert.gperf"
    {"\346\203\241","恶"},
#line 289 "zh_convert.gperf"
    {"\347\206\276","炽"},
#line 91 "zh_convert.gperf"
    {"\347\262\203","秕"},
#line 2863 "zh_convert.gperf"
    {"\350\225\267","蓣"},
#line 1275 "zh_convert.gperf"
    {"\350\206\276","脍"},
#line 3080 "zh_convert.gperf"
    {"\347\234\276","众"},
#line 1386 "zh_convert.gperf"
    {"\350\262\215","狸"},
#line 2028 "zh_convert.gperf"
    {"\351\212\223","铨"},
#line 876 "zh_convert.gperf"
    {"\346\262\215","冱"},
#line 2088 "zh_convert.gperf"
    {"\351\245\212","馓"},
#line 1278 "zh_convert.gperf"
    {"\351\253\226","髋"},
#line 1607 "zh_convert.gperf"
    {"\350\253\226","论"},
#line 2696 "zh_convert.gperf"
    {"\346\245\212","杨"},
#line 3040 "zh_convert.gperf"
    {"\345\267\265","卮"},
#line 2874 "zh_convert.gperf"
    {"\346\267\265","渊"},
#line 3065 "zh_convert.gperf"
    {"\350\247\266","觯"},
#line 2082 "zh_convert.gperf"
    {"\351\260\223","鳃"},
#line 1140 "zh_convert.gperf"
    {"\345\224\253","吟"},
#line 2601 "zh_convert.gperf"
    {"\346\225\215","叙"},
#line 1962 "zh_convert.gperf"
    {"\345\242\235","硗"},
#line 2339 "zh_convert.gperf"
    {"\346\242\235","条"},
#line 191 "zh_convert.gperf"
    {"\346\222\241","操"},
#line 1403 "zh_convert.gperf"
    {"\345\216\244","历"},
#line 2418 "zh_convert.gperf"
    {"\350\230\244","花"},
#line 481 "zh_convert.gperf"
    {"\350\250\202","订"},
#line 2255 "zh_convert.gperf"
    {"\351\233\226","虽"},
#line 1613 "zh_convert.gperf"
    {"\347\261\256","箩"},
#line 1365 "zh_convert.gperf"
    {"\346\250\202","乐"},
#line 2300 "zh_convert.gperf"
    {"\351\211\255","钽"},
#line 1903 "zh_convert.gperf"
    {"\347\242\201","棋"},
#line 714 "zh_convert.gperf"
    {"\347\225\212","耕"},
#line 18 "zh_convert.gperf"
    {"\346\233\226","暧"},
#line 2467 "zh_convert.gperf"
    {"\351\234\247","雾"},
#line 3100 "zh_convert.gperf"
    {"\351\212\226","铢"},
#line 1383 "zh_convert.gperf"
    {"\347\270\255","缡"},
#line 1623 "zh_convert.gperf"
    {"\347\212\226","荦"},
#line 1526 "zh_convert.gperf"
    {"\346\234\247","胧"},
#line 2343 "zh_convert.gperf"
    {"\350\246\234","眺"},
#line 2230 "zh_convert.gperf"
    {"\351\247\237","驷"},
#line 1259 "zh_convert.gperf"
    {"\351\217\227","铿"},
#line 2966 "zh_convert.gperf"
    {"\347\211\220","闸"},
#line 1715 "zh_convert.gperf"
    {"\351\235\243","面"},
#line 2257 "zh_convert.gperf"
    {"\345\265\227","岁"},
#line 2134 "zh_convert.gperf"
    {"\346\224\235","摄"},
#line 1036 "zh_convert.gperf"
    {"\347\256\213","笺"},
#line 905 "zh_convert.gperf"
    {"\347\230\223","痪"},
#line 754 "zh_convert.gperf"
    {"\350\235\270","蜗"},
#line 213 "zh_convert.gperf"
    {"\346\224\231","搀"},
#line 3090 "zh_convert.gperf"
    {"\347\270\220","绉"},
#line 1072 "zh_convert.gperf"
    {"\350\270\220","践"},
#line 1901 "zh_convert.gperf"
    {"\346\227\202","旗"},
#line 1223 "zh_convert.gperf"
    {"\351\220\246","锎"},
#line 1685 "zh_convert.gperf"
    {"\346\202\266","闷"},
#line 158 "zh_convert.gperf"
    {"\351\211\221","铂"},
#line 613 "zh_convert.gperf"
    {"\351\220\250","镄"},
#line 2274 "zh_convert.gperf"
    {"\346\220\250","拓"},
#line 1665 "zh_convert.gperf"
    {"\351\245\205","馒"},
#line 1038 "zh_convert.gperf"
    {"\347\270\221","缣"},
#line 439 "zh_convert.gperf"
    {"\347\234\241","视"},
#line 586 "zh_convert.gperf"
    {"\351\253\256","发"},
#line 52 "zh_convert.gperf"
    {"\345\262\205","坂"},
#line 3032 "zh_convert.gperf"
    {"\347\256\217","筝"},
#line 3149 "zh_convert.gperf"
    {"\350\253\256","谘"},
#line 659 "zh_convert.gperf"
    {"\351\256\222","鲋"},
#line 3085 "zh_convert.gperf"
    {"\347\256\222","帚"},
#line 220 "zh_convert.gperf"
    {"\350\256\222","谗"},
#line 2366 "zh_convert.gperf"
    {"\345\234\230","团"},
#line 2270 "zh_convert.gperf"
    {"\351\216\226","锁"},
#line 1954 "zh_convert.gperf"
    {"\345\242\273","墙"},
#line 1152 "zh_convert.gperf"
    {"\350\216\226","茎"},
#line 2776 "zh_convert.gperf"
    {"\347\230\226","喑"},
#line 1102 "zh_convert.gperf"
    {"\345\203\245","侥"},
#line 2825 "zh_convert.gperf"
    {"\346\203\245","恿"},
#line 2952 "zh_convert.gperf"
    {"\345\230\226","啧"},
#line 1137 "zh_convert.gperf"
    {"\351\214\246","锦"},
#line 1819 "zh_convert.gperf"
    {"\347\264\220","纽"},
#line 1146 "zh_convert.gperf"
    {"\350\264\220","赆"},
#line 1672 "zh_convert.gperf"
    {"\351\214\250","锚"},
#line 1303 "zh_convert.gperf"
    {"\345\264\220","昆"},
#line 2881 "zh_convert.gperf"
    {"\347\214\250","猿"},
#line 380 "zh_convert.gperf"
    {"\346\224\233","撺"},
#line 2643 "zh_convert.gperf"
    {"\351\265\266","鸦"},
#line 1369 "zh_convert.gperf"
    {"\351\220\263","镭"},
#line 1651 "zh_convert.gperf"
    {"\347\275\265","骂"},
#line 2378 "zh_convert.gperf"
    {"\351\247\235","驼"},
#line 447 "zh_convert.gperf"
    {"\350\247\235","抵"},
#line 2454 "zh_convert.gperf"
    {"\345\220\263","吴"},
#line 943 "zh_convert.gperf"
    {"\350\253\261","讳"},
#line 3010 "zh_convert.gperf"
    {"\346\245\250","桢"},
#line 2358 "zh_convert.gperf"
    {"\351\240\255","头"},
#line 658 "zh_convert.gperf"
    {"\351\247\231","驸"},
#line 626 "zh_convert.gperf"
    {"\347\242\270","砜"},
#line 1483 "zh_convert.gperf"
    {"\347\262\246","磷"},
#line 2050 "zh_convert.gperf"
    {"\345\247\231","妊"},
#line 1304 "zh_convert.gperf"
    {"\345\264\221","昆"},
#line 957 "zh_convert.gperf"
    {"\350\262\250","货"},
#line 159 "zh_convert.gperf"
    {"\351\247\201","驳"},
#line 2868 "zh_convert.gperf"
    {"\351\240\220","预"},
#line 153 "zh_convert.gperf"
    {"\346\222\245","拨"},
#line 1907 "zh_convert.gperf"
    {"\350\240\220","蛴"},
#line 112 "zh_convert.gperf"
    {"\350\276\256","辫"},
#line 55 "zh_convert.gperf"
    {"\347\265\206","绊"},
#line 884 "zh_convert.gperf"
    {"\346\276\256","浍"},
#line 156 "zh_convert.gperf"
    {"\351\244\221","饽"},
#line 229 "zh_convert.gperf"
    {"\351\217\237","铲"},
#line 2924 "zh_convert.gperf"
    {"\347\260\256","簪"},
#line 226 "zh_convert.gperf"
    {"\347\224\243","产"},
#line 2392 "zh_convert.gperf"
    {"\351\240\221","顽"},
#line 1089 "zh_convert.gperf"
    {"\350\224\243","蒋"},
#line 3161 "zh_convert.gperf"
    {"\347\270\202","总"},
#line 2458 "zh_convert.gperf"
    {"\345\253\265","妩"},
#line 2063 "zh_convert.gperf"
    {"\350\240\221","蝾"},
#line 1592 "zh_convert.gperf"
    {"\346\224\243","挛"},
#line 1793 "zh_convert.gperf"
    {"\345\224\270","念"},
#line 470 "zh_convert.gperf"
    {"\351\212\261","铞"},
#line 1961 "zh_convert.gperf"
    {"\347\206\227","炝"},
#line 1695 "zh_convert.gperf"
    {"\351\214\263","锰"},
#line 3115 "zh_convert.gperf"
    {"\347\224\216","砖"},
#line 1548 "zh_convert.gperf"
    {"\350\236\273","蝼"},
#line 1203 "zh_convert.gperf"
    {"\351\214\210","锩"},
#line 42 "zh_convert.gperf"
    {"\345\236\273","坝"},
#line 1924 "zh_convert.gperf"
    {"\347\211\275","牵"},
#line 1437 "zh_convert.gperf"
    {"\345\214\263","奁"},
#line 2306 "zh_convert.gperf"
    {"\351\220\213","铴"},
#line 1445 "zh_convert.gperf"
    {"\350\223\256","莲"},
#line 76 "zh_convert.gperf"
    {"\345\202\231","备"},
#line 2585 "zh_convert.gperf"
    {"\351\245\210","馐"},
#line 1015 "zh_convert.gperf"
    {"\351\203\237","郏"},
#line 1677 "zh_convert.gperf"
    {"\346\245\263","梅"},
#line 3167 "zh_convert.gperf"
    {"\347\270\275","总"},
#line 1243 "zh_convert.gperf"
    {"\346\224\267","考"},
#line 458 "zh_convert.gperf"
    {"\346\276\261","淀"},
#line 1658 "zh_convert.gperf"
    {"\351\202\201","迈"},
#line 2174 "zh_convert.gperf"
    {"\351\247\233","驶"},
#line 1449 "zh_convert.gperf"
    {"\351\260\261","鲢"},
#line 578 "zh_convert.gperf"
    {"\350\262\263","贰"},
#line 3021 "zh_convert.gperf"
    {"\351\216\256","镇"},
#line 1705 "zh_convert.gperf"
    {"\350\246\223","觅"},
#line 1357 "zh_convert.gperf"
    {"\345\230\256","唠"},
#line 457 "zh_convert.gperf"
    {"\345\242\212","垫"},
#line 3159 "zh_convert.gperf"
    {"\347\234\245","眦"},
#line 1171 "zh_convert.gperf"
    {"\346\217\253","揪"},
#line 636 "zh_convert.gperf"
    {"\347\262\260","麸"},
#line 2184 "zh_convert.gperf"
    {"\350\262\260","贳"},
#line 1787 "zh_convert.gperf"
    {"\350\206\251","腻"},
#line 2062 "zh_convert.gperf"
    {"\350\236\216","融"},
#line 592 "zh_convert.gperf"
    {"\347\267\220","繁"},
#line 699 "zh_convert.gperf"
    {"\346\223\261","搁"},
#line 3089 "zh_convert.gperf"
    {"\347\264\202","纣"},
#line 1361 "zh_convert.gperf"
    {"\351\220\222","铹"},
#line 3026 "zh_convert.gperf"
    {"\345\276\265","征"},
#line 1734 "zh_convert.gperf"
    {"\351\260\265","鳘"},
#line 1018 "zh_convert.gperf"
    {"\346\222\237","挢"},
#line 2759 "zh_convert.gperf"
    {"\347\225\260","异"},
#line 1157 "zh_convert.gperf"
    {"\351\230\261","井"},
#line 1301 "zh_convert.gperf"
    {"\351\245\213","馈"},
#line 550 "zh_convert.gperf"
    {"\351\265\235","鹅"},
#line 1670 "zh_convert.gperf"
    {"\351\217\235","镘"},
#line 1268 "zh_convert.gperf"
    {"\347\265\235","绔"},
#line 326 "zh_convert.gperf"
    {"\350\247\270","触"},
#line 1713 "zh_convert.gperf"
    {"\351\235\246","腼"},
#line 2180 "zh_convert.gperf"
    {"\350\246\226","视"},
#line 819 "zh_convert.gperf"
    {"\350\235\246","虾"},
#line 2732 "zh_convert.gperf"
    {"\351\235\250","靥"},
#line 2757 "zh_convert.gperf"
    {"\346\206\266","忆"},
#line 478 "zh_convert.gperf"
    {"\351\240\202","顶"},
#line 2162 "zh_convert.gperf"
    {"\350\235\250","虱"},
#line 538 "zh_convert.gperf"
    {"\346\234\266","朵"},
#line 1602 "zh_convert.gperf"
    {"\344\276\226","仑"},
#line 1010 "zh_convert.gperf"
    {"\351\216\265","镓"},
#line 1300 "zh_convert.gperf"
    {"\351\244\275","馈"},
#line 10 "zh_convert.gperf"
    {"\351\214\222","锕"},
#line 647 "zh_convert.gperf"
    {"\346\222\253","抚"},
#line 2539 "zh_convert.gperf"
    {"\345\230\265","哓"},
#line 2371 "zh_convert.gperf"
    {"\351\240\275","颓"},
#line 2071 "zh_convert.gperf"
    {"\350\225\213","蕊"},
#line 2046 "zh_convert.gperf"
    {"\351\245\222","饶"},
#line 1588 "zh_convert.gperf"
    {"\351\214\204","录"},
#line 2511 "zh_convert.gperf"
    {"\350\234\206","蚬"},
#line 667 "zh_convert.gperf"
    {"\345\214\204","丐"},
#line 1845 "zh_convert.gperf"
    {"\346\247\203","盘"},
#line 1006 "zh_convert.gperf"
    {"\351\261\255","鲚"},
#line 2108 "zh_convert.gperf"
    {"\345\247\215","姗"},
#line 1948 "zh_convert.gperf"
    {"\346\247\215","枪"},
#line 1679 "zh_convert.gperf"
    {"\346\262\222","没"},
#line 1257 "zh_convert.gperf"
    {"\350\202\216","肯"},
#line 2313 "zh_convert.gperf"
    {"\347\265\233","绦"},
#line 2321 "zh_convert.gperf"
    {"\347\261\220","藤"},
#line 511 "zh_convert.gperf"
    {"\350\235\263","玳"},
#line 1504 "zh_convert.gperf"
    {"\351\235\210","灵"},
#line 628 "zh_convert.gperf"
    {"\350\261\220","丰"},
#line 902 "zh_convert.gperf"
    {"\346\217\233","换"},
#line 2120 "zh_convert.gperf"
    {"\345\202\267","伤"},
#line 2439 "zh_convert.gperf"
    {"\345\225\217","问"},
#line 1653 "zh_convert.gperf"
    {"\350\225\222","荬"},
#line 2720 "zh_convert.gperf"
    {"\351\267\202","鹞"},
#line 1217 "zh_convert.gperf"
    {"\351\222\201","镢"},
#line 2736 "zh_convert.gperf"
    {"\351\206\253","医"},
#line 1168 "zh_convert.gperf"
    {"\345\235\260","垧"},
#line 420 "zh_convert.gperf"
    {"\350\256\234","谠"},
#line 630 "zh_convert.gperf"
    {"\351\242\250","风"},
#line 1730 "zh_convert.gperf"
    {"\346\206\253","悯"},
#line 150 "zh_convert.gperf"
    {"\344\275\265","并"},
#line 632 "zh_convert.gperf"
    {"\351\246\256","冯"},
#line 221 "zh_convert.gperf"
    {"\351\220\224","镡"},
#line 1394 "zh_convert.gperf"
    {"\347\246\256","礼"},
#line 2058 "zh_convert.gperf"
    {"\346\246\256","荣"},
#line 1882 "zh_convert.gperf"
    {"\346\275\221","泼"},
#line 197 "zh_convert.gperf"
    {"\346\203\273","恻"},
#line 2864 "zh_convert.gperf"
    {"\350\253\255","谕"},
#line 2244 "zh_convert.gperf"
    {"\347\224\246","苏"},
#line 1798 "zh_convert.gperf"
    {"\350\224\246","茑"},
#line 107 "zh_convert.gperf"
    {"\351\202\212","边"},
#line 833 "zh_convert.gperf"
    {"\347\265\216","绗"},
#line 3011 "zh_convert.gperf"
    {"\347\217\216","珍"},
#line 1929 "zh_convert.gperf"
    {"\350\253\220","愆"},
#line 542 "zh_convert.gperf"
    {"\351\246\261","驮"},
#line 1891 "zh_convert.gperf"
    {"\351\217\267","镤"},
#line 430 "zh_convert.gperf"
    {"\347\246\261","祷"},
#line 1943 "zh_convert.gperf"
    {"\350\206\201","肷"},
#line 755 "zh_convert.gperf"
    {"\351\242\263","刮"},
#line 616 "zh_convert.gperf"
    {"\345\242\263","坟"},
#line 3143 "zh_convert.gperf"
    {"\350\253\221","诼"},
#line 2004 "zh_convert.gperf"
    {"\351\236\246","秋"},
#line 2275 "zh_convert.gperf"
    {"\346\222\273","挞"},
#line 379 "zh_convert.gperf"
    {"\351\217\203","镞"},
#line 2501 "zh_convert.gperf"
    {"\347\265\203","弦"},
#line 175 "zh_convert.gperf"
    {"\345\217\203","参"},
#line 2583 "zh_convert.gperf"
    {"\350\203\267","胸"},
#line 2290 "zh_convert.gperf"
    {"\345\242\260","坛"},
#line 1616 "zh_convert.gperf"
    {"\351\217\215","镙"},
#line 1310 "zh_convert.gperf"
    {"\347\235\217","困"},
#line 15 "zh_convert.gperf"
    {"\351\235\204","霭"},
#line 359 "zh_convert.gperf"
    {"\350\276\255","辞"},
#line 964 "zh_convert.gperf"
    {"\347\222\243","玑"},
#line 705 "zh_convert.gperf"
    {"\351\203\203","合"},
#line 1911 "zh_convert.gperf"
    {"\351\260\255","鳍"},
#line 406 "zh_convert.gperf"
    {"\346\222\243","掸"},
#line 3103 "zh_convert.gperf"
    {"\345\233\221","嘱"},
#line 1849 "zh_convert.gperf"
    {"\351\276\220","庞"},
#line 2478 "zh_convert.gperf"
    {"\351\212\221","铣"},
#line 1503 "zh_convert.gperf"
    {"\351\234\233","灵"},
#line 991 "zh_convert.gperf"
    {"\345\212\221","剂"},
#line 566 "zh_convert.gperf"
    {"\351\260\220","鳄"},
#line 1028 "zh_convert.gperf"
    {"\345\247\246","奸"},
#line 739 "zh_convert.gperf"
    {"\350\275\202","毂"},
#line 2249 "zh_convert.gperf"
    {"\350\202\205","肃"},
#line 2889 "zh_convert.gperf"
    {"\346\202\205","悦"},
#line 815 "zh_convert.gperf"
    {"\346\247\250","椁"},
#line 952 "zh_convert.gperf"
    {"\346\223\255","护"},
#line 2121 "zh_convert.gperf"
    {"\346\256\244","殇"},
#line 308 "zh_convert.gperf"
    {"\351\206\273","酬"},
#line 1159 "zh_convert.gperf"
    {"\345\276\221","径"},
#line 2491 "zh_convert.gperf"
    {"\345\203\212","仙"},
#line 2267 "zh_convert.gperf"
    {"\347\260\221","蓑"},
#line 2650 "zh_convert.gperf"
    {"\345\216\255","厌"},
#line 1338 "zh_convert.gperf"
    {"\350\230\255","兰"},
#line 2043 "zh_convert.gperf"
    {"\350\256\223","让"},
#line 228 "zh_convert.gperf"
    {"\350\253\202","谄"},
#line 2611 "zh_convert.gperf"
    {"\350\230\220","萱"},
#line 2996 "zh_convert.gperf"
    {"\346\253\202","棹"},
#line 388 "zh_convert.gperf"
    {"\351\202\250","村"},
#line 2179 "zh_convert.gperf"
    {"\347\234\216","视"},
#line 843 "zh_convert.gperf"
    {"\345\222\212","和"},
#line 862 "zh_convert.gperf"
    {"\345\230\221","呼"},
#line 2492 "zh_convert.gperf"
    {"\347\247\210","籼"},
#line 1086 "zh_convert.gperf"
    {"\346\247\263","桨"},
#line 2688 "zh_convert.gperf"
    {"\351\245\234","餍"},
#line 30 "zh_convert.gperf"
    {"\345\233\202","嚣"},
#line 1537 "zh_convert.gperf"
    {"\346\224\217","拢"},
#line 2654 "zh_convert.gperf"
    {"\351\206\203","腌"},
#line 1379 "zh_convert.gperf"
    {"\347\212\202","犁"},
#line 2386 "zh_convert.gperf"
    {"\350\206\203","腽"},
#line 48 "zh_convert.gperf"
    {"\345\224\204","呗"},
#line 264 "zh_convert.gperf"
    {"\350\256\226","谶"},
#line 935 "zh_convert.gperf"
    {"\346\234\203","会"},
#line 2194 "zh_convert.gperf"
    {"\346\224\204","摅"},
#line 1130 "zh_convert.gperf"
    {"\345\203\205","仅"},
#line 2403 "zh_convert.gperf"
    {"\345\234\215","围"},
#line 276 "zh_convert.gperf"
    {"\346\276\202","澄"},
#line 328 "zh_convert.gperf"
    {"\345\202\263","传"},
#line 712 "zh_convert.gperf"
    {"\347\265\246","给"},
#line 433 "zh_convert.gperf"
    {"\346\202\263","德"},
#line 1377 "zh_convert.gperf"
    {"\346\260\202","牦"},
#line 725 "zh_convert.gperf"
    {"\351\236\217","巩"},
#line 2934 "zh_convert.gperf"
    {"\351\217\250","錾"},
#line 194 "zh_convert.gperf"
    {"\345\206\212","册"},
#line 2060 "zh_convert.gperf"
    {"\347\265\250","绒"},
#line 77 "zh_convert.gperf"
    {"\346\206\212","惫"},
#line 1765 "zh_convert.gperf"
    {"\346\236\217","楠"},
#line 733 "zh_convert.gperf"
    {"\346\247\213","构"},
#line 2644 "zh_convert.gperf"
    {"\346\236\222","丫"},
#line 2163 "zh_convert.gperf"
    {"\350\236\204","蛳"},
#line 1925 "zh_convert.gperf"
    {"\347\260\275","签"},
#line 1683 "zh_convert.gperf"
    {"\351\216\202","镁"},
#line 617 "zh_convert.gperf"
    {"\345\203\250","偾"},
#line 2646 "zh_convert.gperf"
    {"\347\230\202","痖"},
#line 2072 "zh_convert.gperf"
    {"\350\230\202","蕊"},
#line 100 "zh_convert.gperf"
    {"\350\223\275","荜"},
#line 1184 "zh_convert.gperf"
    {"\351\247\222","驹"},
#line 2870 "zh_convert.gperf"
    {"\351\246\255","驭"},
#line 527 "zh_convert.gperf"
    {"\351\220\223","镦"},
#line 3041 "zh_convert.gperf"
    {"\346\242\224","栀"},
#line 1861 "zh_convert.gperf"
    {"\346\216\275","碰"},
#line 1093 "zh_convert.gperf"
    {"\347\265\263","绛"},
#line 1463 "zh_convert.gperf"
    {"\351\217\210","链"},
#line 19 "zh_convert.gperf"
    {"\347\222\246","瑷"},
#line 253 "zh_convert.gperf"
    {"\346\222\246","扯"},
#line 2496 "zh_convert.gperf"
    {"\351\256\256","鲜"},
#line 464 "zh_convert.gperf"
    {"\351\265\260","雕"},
#line 721 "zh_convert.gperf"
    {"\345\256\256","宫"},
#line 1457 "zh_convert.gperf"
    {"\346\256\256","殓"},
#line 1339 "zh_convert.gperf"
    {"\350\245\244","褴"},
#line 1167 "zh_convert.gperf"
    {"\351\235\234","静"},
#line 824 "zh_convert.gperf"
    {"\345\234\205","函"},
#line 3031 "zh_convert.gperf"
    {"\347\235\234","睁"},
#line 162 "zh_convert.gperf"
    {"\350\224\224","卜"},
#line 1615 "zh_convert.gperf"
    {"\351\202\217","逻"},
#line 1332 "zh_convert.gperf"
    {"\346\224\224","拦"},
#line 820 "zh_convert.gperf"
    {"\351\202\204","还"},
#line 2706 "zh_convert.gperf"
    {"\346\220\226","摇"},
#line 623 "zh_convert.gperf"
    {"\346\245\223","枫"},
#line 1671 "zh_convert.gperf"
    {"\350\262\223","猫"},
#line 1990 "zh_convert.gperf"
    {"\346\222\263","揿"},
#line 1355 "zh_convert.gperf"
    {"\346\222\210","捞"},
#line 474 "zh_convert.gperf"
    {"\350\234\250","蝶"},
#line 896 "zh_convert.gperf"
    {"\347\222\260","环"},
#line 2901 "zh_convert.gperf"
    {"\350\225\223","芸"},
#line 1913 "zh_convert.gperf"
    {"\345\225\223","启"},
#line 2569 "zh_convert.gperf"
    {"\347\265\217","绁"},
#line 2872 "zh_convert.gperf"
    {"\351\265\222","鹆"},
#line 2940 "zh_convert.gperf"
    {"\351\247\224","驵"},
#line 36 "zh_convert.gperf"
    {"\350\245\226","袄"},
#line 1129 "zh_convert.gperf"
    {"\350\247\224","斤"},
#line 3132 "zh_convert.gperf"
    {"\345\242\234","坠"},
#line 3174 "zh_convert.gperf"
    {"\347\265\204","组"},
#line 292 "zh_convert.gperf"
    {"\346\262\226","冲"},
#line 2450 "zh_convert.gperf"
    {"\347\203\217","乌"},
#line 1480 "zh_convert.gperf"
    {"\346\203\217","婪"},
#line 1448 "zh_convert.gperf"
    {"\351\220\256","镰"},
#line 1348 "zh_convert.gperf"
    {"\350\246\275","览"},
#line 2557 "zh_convert.gperf"
    {"\346\224\234","携"},
#line 462 "zh_convert.gperf"
    {"\347\220\261","雕"},
#line 537 "zh_convert.gperf"
    {"\345\236\234","垛"},
#line 1352 "zh_convert.gperf"
    {"\350\234\213","螂"},
#line 750 "zh_convert.gperf"
    {"\351\214\256","锢"},
#line 812 "zh_convert.gperf"
    {"\345\234\213","国"},
#line 618 "zh_convert.gperf"
    {"\345\245\256","奋"},
#line 2346 "zh_convert.gperf"
    {"\351\220\265","铁"},
#line 2444 "zh_convert.gperf"
    {"\350\220\265","莴"},
#line 2806 "zh_convert.gperf"
    {"\347\206\222","荧"},
#line 1293 "zh_convert.gperf"
    {"\345\214\261","匮"},
#line 1295 "zh_convert.gperf"
    {"\346\206\222","愦"},
#line 2266 "zh_convert.gperf"
    {"\346\214\261","挲"},
#line 2878 "zh_convert.gperf"
    {"\345\234\222","园"},
#line 2042 "zh_convert.gperf"
    {"\345\206\204","冉"},
#line 2286 "zh_convert.gperf"
    {"\346\224\244","摊"},
#line 505 "zh_convert.gperf"
    {"\345\214\265","椟"},
#line 1513 "zh_convert.gperf"
    {"\347\225\261","留"},
#line 983 "zh_convert.gperf"
    {"\346\245\265","极"},
#line 788 "zh_convert.gperf"
    {"\351\256\255","鲑"},
#line 2891 "zh_convert.gperf"
    {"\347\262\265","粤"},
#line 1080 "zh_convert.gperf"
    {"\346\256\255","僵"},
#line 2170 "zh_convert.gperf"
    {"\350\222\224","莳"},
#line 2283 "zh_convert.gperf"
    {"\351\256\220","鲐"},
#line 305 "zh_convert.gperf"
    {"\350\256\220","雠"},
#line 442 "zh_convert.gperf"
    {"\346\225\265","敌"},
#line 71 "zh_convert.gperf"
    {"\351\256\221","鲍"},
#line 396 "zh_convert.gperf"
    {"\345\242\226","塔"},
#line 2331 "zh_convert.gperf"
    {"\351\265\234","鹈"},
#line 2305 "zh_convert.gperf"
    {"\351\217\234","镗"},
#line 2796 "zh_convert.gperf"
    {"\347\224\226","罂"},
#line 2793 "zh_convert.gperf"
    {"\346\224\226","撄"},
#line 488 "zh_convert.gperf"
    {"\346\235\261","东"},
#line 689 "zh_convert.gperf"
    {"\346\247\223","杠"},
#line 2761 "zh_convert.gperf"
    {"\347\236\226","翳"},
#line 2997 "zh_convert.gperf"
    {"\347\202\244","照"},
#line 365 "zh_convert.gperf"
    {"\346\202\244","匆"},
#line 2002 "zh_convert.gperf"
    {"\345\235\265","丘"},
#line 119 "zh_convert.gperf"
    {"\351\242\256","飑"},
#line 2064 "zh_convert.gperf"
    {"\345\256\202","冗"},
#line 540 "zh_convert.gperf"
    {"\345\242\256","堕"},
#line 1474 "zh_convert.gperf"
    {"\351\220\220","镣"},
#line 2281 "zh_convert.gperf"
    {"\351\242\261","台"},
#line 1307 "zh_convert.gperf"
    {"\346\242\261","捆"},
#line 1554 "zh_convert.gperf"
    {"\351\217\244","镂"},
#line 311 "zh_convert.gperf"
    {"\351\206\234","丑"},
#line 790 "zh_convert.gperf"
    {"\345\214\255","匦"},
#line 2727 "zh_convert.gperf"
    {"\346\245\255","业"},
#line 3130 "zh_convert.gperf"
    {"\351\214\220","锥"},
#line 187 "zh_convert.gperf"
    {"\345\202\226","伧"},
#line 2482 "zh_convert.gperf"
    {"\351\203\244","郄"},
#line 1756 "zh_convert.gperf"
    {"\346\214\220","拿"},
#line 2838 "zh_convert.gperf"
    {"\347\245\220","佑"},
#line 901 "zh_convert.gperf"
    {"\345\245\220","奂"},
#line 161 "zh_convert.gperf"
    {"\351\265\223","鹁"},
#line 816 "zh_convert.gperf"
    {"\350\217\223","果"},
#line 978 "zh_convert.gperf"
    {"\351\245\221","饥"},
#line 3060 "zh_convert.gperf"
    {"\347\245\221","帙"},
#line 2545 "zh_convert.gperf"
    {"\350\225\255","萧"},
#line 2695 "zh_convert.gperf"
    {"\346\225\255","扬"},
#line 160 "zh_convert.gperf"
    {"\351\247\256","驳"},
#line 1109 "zh_convert.gperf"
    {"\345\225\221","喋"},
#line 2563 "zh_convert.gperf"
    {"\351\236\265","鞋"},
#line 24 "zh_convert.gperf"
    {"\345\236\265","埯"},
#line 1624 "zh_convert.gperf"
    {"\351\247\261","骆"},
#line 350 "zh_convert.gperf"
    {"\350\222\223","莼"},
#line 1769 "zh_convert.gperf"
    {"\346\222\223","挠"},
#line 2921 "zh_convert.gperf"
    {"\347\203\226","灾"},
#line 1524 "zh_convert.gperf"
    {"\351\234\244","溜"},
#line 828 "zh_convert.gperf"
    {"\347\214\202","悍"},
#line 619 "zh_convert.gperf"
    {"\346\206\244","愤"},
#line 2054 "zh_convert.gperf"
    {"\351\235\255","韧"},
#line 2879 "zh_convert.gperf"
    {"\345\234\223","圆"},
#line 2743 "zh_convert.gperf"
    {"\350\262\275","贻"},
#line 1264 "zh_convert.gperf"
    {"\346\225\202","叩"},
#line 1856 "zh_convert.gperf"
    {"\347\217\256","佩"},
#line 913 "zh_convert.gperf"
    {"\346\217\256","挥"},
#line 2974 "zh_convert.gperf"
    {"\345\202\265","债"},
#line 246 "zh_convert.gperf"
    {"\346\202\265","怅"},
#line 2911 "zh_convert.gperf"
    {"\351\206\226","酝"},
#line 2353 "zh_convert.gperf"
    {"\347\265\261","统"},
#line 925 "zh_convert.gperf"
    {"\350\234\226","蛔"},
#line 2362 "zh_convert.gperf"
    {"\345\234\226","图"},
#line 424 "zh_convert.gperf"
    {"\347\242\255","砀"},
#line 749 "zh_convert.gperf"
    {"\345\203\261","雇"},
#line 1774 "zh_convert.gperf"
    {"\346\203\261","恼"},
#line 887 "zh_convert.gperf"
    {"\351\217\265","铧"},
#line 2777 "zh_convert.gperf"
    {"\350\224\255","荫"},
#line 1432 "zh_convert.gperf"
    {"\351\235\202","雳"},
#line 2834 "zh_convert.gperf"
    {"\351\203\265","邮"},
#line 1477 "zh_convert.gperf"
    {"\347\236\255","了"},
#line 2460 "zh_convert.gperf"
    {"\346\206\256","怃"},
#line 822 "zh_convert.gperf"
    {"\351\247\255","骇"},
#line 2049 "zh_convert.gperf"
    {"\347\206\261","热"},
#line 3112 "zh_convert.gperf"
    {"\351\247\220","驻"},
#line 1827 "zh_convert.gperf"
    {"\351\247\221","驽"},
#line 1678 "zh_convert.gperf"
    {"\346\247\221","梅"},
#line 291 "zh_convert.gperf"
    {"\345\202\255","佣"},
#line 1397 "zh_convert.gperf"
    {"\351\202\220","逦"},
#line 701 "zh_convert.gperf"
    {"\350\202\220","胳"},
#line 1116 "zh_convert.gperf"
    {"\345\202\221","杰"},
#line 1209 "zh_convert.gperf"
    {"\351\236\275","鞒"},
#line 1114 "zh_convert.gperf"
    {"\347\265\220","结"},
#line 1331 "zh_convert.gperf"
    {"\345\265\220","岚"},
#line 1201 "zh_convert.gperf"
    {"\351\265\221","鹃"},
#line 440 "zh_convert.gperf"
    {"\351\217\221","镝"},
#line 2922 "zh_convert.gperf"
    {"\350\217\221","灾"},
#line 1801 "zh_convert.gperf"
    {"\346\217\221","捏"},
#line 1968 "zh_convert.gperf"
    {"\345\203\221","侨"},
#line 2237 "zh_convert.gperf"
    {"\350\222\220","搜"},
#line 1895 "zh_convert.gperf"
    {"\346\202\275","凄"},
#line 267 "zh_convert.gperf"
    {"\346\222\220","撑"},
#line 2586 "zh_convert.gperf"
    {"\351\265\202","鸺"},
#line 3073 "zh_convert.gperf"
    {"\347\265\202","终"},
#line 1675 "zh_convert.gperf"
    {"\345\206\220","冒"},
#line 2590 "zh_convert.gperf"
    {"\351\217\275","锈"},
#line 1439 "zh_convert.gperf"
    {"\346\206\220","怜"},
#line 1542 "zh_convert.gperf"
    {"\345\203\202","偻"},
#line 2979 "zh_convert.gperf"
    {"\351\234\221","沾"},
#line 1878 "zh_convert.gperf"
    {"\346\206\221","凭"},
#line 2477 "zh_convert.gperf"
    {"\347\222\275","玺"},
#line 2830 "zh_convert.gperf"
    {"\346\206\202","忧"},
#line 407 "zh_convert.gperf"
    {"\350\206\275","胆"},
#line 1002 "zh_convert.gperf"
    {"\351\234\275","霁"}
  };

static const short lookup[] =
  {
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,    0,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,    1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,    2,   -1,   -1,   -1,   -1,
       3,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
       4,   -1,   -1,   -1,    5,   -1,   -1,   -1,
      -1,    6,   -1,   -1,   -1,   -1,   -1,    7,
      -1,   -1,   -1,   -1,    8,   -1,   -1,    9,
      10,   11,   -1,   -1,   -1,   12,   13,   -1,
      -1,   -1,   14,   15,   -1,   -1,   16,   17,
      -1,   -1,   -1,   18,   -1,   19,   -1,   -1,
      -1,   20,   21,   -1,   -1,   22,   23,   -1,
      -1,   -1,   -1,   24,   25,   -1,   -1,   -1,
      26,   27,   -1,   -1,   -1,   28,   -1,   -1,
      -1,   -1,   29,   30,   -1,   -1,   -1,   -1,
      31,   -1,   -1,   -1,   32,   33,   -1,   -1,
      -1,   -1,   34,   -1,   -1,   -1,   -1,   35,
      -1,   -1,   -1,   -1,   36,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   37,   38,   -1,   -1,
      -1,   -1,   -1,   39,   -1,   -1,   40,   41,
      42,   -1,   -1,   -1,   43,   44,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   45,   46,
      -1,   -1,   -1,   47,   48,   -1,   -1,   -1,
      49,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      50,   -1,   51,   -1,   -1,   52,   53,   -1,
      54,   -1,   -1,   -1,   -1,   55,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   56,
      57,   -1,   -1,   58,   59,   -1,   -1,   60,
      -1,   61,   -1,   -1,   62,   63,   64,   -1,
      -1,   65,   66,   -1,   -1,   -1,   67,   -1,
      -1,   -1,   -1,   68,   -1,   -1,   -1,   -1,
      -1,   69,   70,   -1,   -1,   71,   -1,   72,
      73,   -1,   -1,   74,   75,   76,   -1,   -1,
      -1,   77,   78,   -1,   -1,   79,   80,   -1,
      -1,   81,   -1,   82,   -1,   -1,   83,   84,
      85,   -1,   -1,   -1,   86,   -1,   -1,   -1,
      87,   88,   -1,   -1,   -1,   89,   -1,   90,
      -1,   -1,   91,   -1,   92,   -1,   93,   -1,
      94,   -1,   -1,   -1,   -1,   95,   96,   -1,
      -1,   -1,   97,   98,   -1,   -1,   -1,   -1,
      99,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  100,   -1,   -1,   -1,  101,  102,
      -1,   -1,   -1,   -1,  103,   -1,   -1,   -1,
     104,  105,   -1,   -1,  106,  107,  108,   -1,
      -1,  109,  110,  111,   -1,   -1,   -1,   -1,
     112,   -1,   -1,   -1,  113,  114,   -1,   -1,
      -1,  115,  116,   -1,   -1,  117,   -1,  118,
      -1,   -1,   -1,  119,  120,   -1,   -1,   -1,
     121,  122,   -1,   -1,   -1,  123,  124,   -1,
      -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  126,  127,   -1,   -1,
      -1,  128,   -1,   -1,   -1,  129,  130,  131,
      -1,   -1,   -1,  132,   -1,   -1,   -1,   -1,
     133,   -1,   -1,   -1,   -1,   -1,  134,   -1,
      -1,   -1,   -1,  135,   -1,   -1,  136,   -1,
      -1,   -1,   -1,   -1,  137,  138,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  139,
      -1,   -1,   -1,   -1,  140,  141,   -1,   -1,
      -1,  142,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  143,   -1,  144,   -1,   -1,  145,   -1,
      -1,   -1,   -1,   -1,   -1,  146,   -1,   -1,
      -1,  147,   -1,   -1,   -1,   -1,   -1,  148,
     149,  150,   -1,   -1,   -1,  151,   -1,  152,
      -1,  153,   -1,   -1,  154,   -1,   -1,  155,
      -1,  156,  157,  158,   -1,   -1,  159,  160,
      -1,   -1,  161,  162,   -1,   -1,   -1,   -1,
     163,   -1,   -1,   -1,   -1,   -1,   -1,  164,
      -1,  165,   -1,  166,  167,   -1,   -1,  168,
     169,   -1,   -1,   -1,   -1,  170,  171,  172,
      -1,   -1,  173,  174,   -1,   -1,   -1,   -1,
      -1,  175,   -1,   -1,   -1,  176,   -1,   -1,
      -1,  177,  178,   -1,   -1,   -1,   -1,  179,
      -1,   -1,  180,   -1,  181,   -1,   -1,  182,
      -1,  183,   -1,   -1,  184,   -1,  185,   -1,
      -1,   -1,  186,   -1,   -1,   -1,  187,   -1,
     188,   -1,   -1,   -1,   -1,  189,   -1,   -1,
     190,   -1,  191,   -1,   -1,  192,  193,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  194,   -1,   -1,   -1,   -1,  195,   -1,
      -1,   -1,   -1,   -1,   -1,  196,   -1,   -1,
     197,   -1,   -1,   -1,   -1,  198,   -1,   -1,
     199,  200,  201,   -1,   -1,   -1,   -1,  202,
      -1,   -1,   -1,   -1,  203,   -1,   -1,   -1,
     204,  205,   -1,   -1,   -1,   -1,  206,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  207,
     208,   -1,   -1,   -1,   -1,  209,   -1,   -1,
      -1,  210,   -1,   -1,   -1,   -1,  211,  212,
      -1,   -1,   -1,   -1,  213,   -1,   -1,  214,
      -1,   -1,   -1,   -1,   -1,   -1,  215,   -1,
      -1,   -1,  216,  217,   -1,   -1,   -1,   -1,
     218,   -1,   -1,  219,   -1,  220,   -1,   -1,
      -1,  221,  222,   -1,   -1,  223,   -1,   -1,
      -1,   -1,  224,  225,   -1,   -1,  226,  227,
     228,  229,   -1,   -1,  230,   -1,  231,   -1,
      -1,  232,   -1,  233,   -1,   -1,   -1,  234,
     235,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  236,  237,   -1,   -1,   -1,   -1,  238,
      -1,   -1,  239,  240,  241,   -1,   -1,  242,
     243,   -1,   -1,   -1,  244,   -1,  245,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  246,
      -1,   -1,   -1,  247,  248,   -1,   -1,  249,
      -1,  250,  251,   -1,   -1,  252,   -1,   -1,
      -1,   -1,   -1,  253,  254,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  255,   -1,
      -1,  256,  257,   -1,   -1,   -1,  258,  259,
     260,   -1,   -1,   -1,   -1,  261,   -1,   -1,
      -1,   -1,  262,   -1,   -1,  263,   -1,   -1,
      -1,   -1,  264,   -1,   -1,   -1,   -1,   -1,
     265,   -1,   -1,   -1,  266,   -1,  267,   -1,
      -1,   -1,   -1,  268,   -1,   -1,   -1,   -1,
     269,   -1,   -1,  270,  271,   -1,   -1,   -1,
      -1,  272,  273,   -1,   -1,   -1,  274,  275,
      -1,   -1,  276,  277,  278,   -1,   -1,   -1,
      -1,  279,   -1,   -1,  280,   -1,  281,   -1,
      -1,  282,   -1,  283,  284,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  285,  286,   -1,   -1,
     287,  288,   -1,   -1,   -1,  289,  290,   -1,
      -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  292,   -1,   -1,  293,
      -1,   -1,   -1,  294,   -1,  295,   -1,   -1,
      -1,   -1,   -1,  296,   -1,  297,  298,  299,
      -1,   -1,   -1,   -1,  300,   -1,   -1,  301,
     302,  303,   -1,   -1,  304,   -1,   -1,   -1,
      -1,   -1,   -1,  305,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  306,  307,   -1,   -1,   -1,
      -1,  308,  309,   -1,   -1,  310,   -1,  311,
     312,   -1,  313,   -1,   -1,   -1,   -1,  314,
     315,  316,   -1,  317,   -1,  318,   -1,   -1,
      -1,  319,  320,  321,   -1,   -1,   -1,  322,
      -1,   -1,   -1,   -1,  323,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  324,   -1,  325,
      -1,  326,   -1,  327,   -1,   -1,   -1,   -1,
      -1,  328,   -1,   -1,   -1,   -1,  329,   -1,
      -1,  330,   -1,  331,   -1,   -1,  332,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  333,  334,   -1,   -1,   -1,  335,  336,
      -1,   -1,   -1,   -1,  337,   -1,   -1,   -1,
     338,   -1,   -1,   -1,   -1,  339,  340,   -1,
     341,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     342,   -1,   -1,   -1,   -1,  343,   -1,   -1,
     344,  345,  346,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  347,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  348,   -1,   -1,   -1,   -1,  349,
     350,   -1,   -1,   -1,   -1,   -1,   -1,  351,
      -1,   -1,  352,   -1,   -1,   -1,  353,  354,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  355,  356,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  357,  358,  359,
      -1,   -1,  360,   -1,   -1,  361,   -1,   -1,
     362,   -1,  363,   -1,   -1,  364,   -1,   -1,
      -1,   -1,   -1,   -1,  365,   -1,   -1,  366,
      -1,  367,   -1,  368,   -1,   -1,  369,   -1,
      -1,   -1,   -1,  370,   -1,   -1,   -1,  371,
      -1,   -1,   -1,   -1,  372,   -1,   -1,  373,
     374,   -1,   -1,   -1,   -1,  375,  376,   -1,
      -1,   -1,   -1,   -1,  377,   -1,   -1,   -1,
     378,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  379,   -1,  380,   -1,   -1,   -1,   -1,
     381,   -1,   -1,   -1,   -1,  382,   -1,   -1,
     383,   -1,   -1,   -1,   -1,   -1,  384,  385,
      -1,   -1,   -1,   -1,  386,   -1,   -1,   -1,
     387,  388,   -1,   -1,   -1,   -1,  389,   -1,
      -1,   -1,   -1,  390,   -1,   -1,   -1,   -1,
     391,   -1,   -1,   -1,   -1,  392,   -1,   -1,
     393,   -1,   -1,   -1,   -1,   -1,  394,  395,
      -1,   -1,   -1,   -1,  396,   -1,   -1,   -1,
     397,  398,   -1,   -1,  399,  400,   -1,   -1,
      -1,   -1,  401,  402,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  403,  404,   -1,   -1,
      -1,  405,   -1,   -1,  406,   -1,   -1,  407,
      -1,   -1,   -1,   -1,   -1,   -1,  408,   -1,
     409,  410,   -1,   -1,   -1,   -1,  411,  412,
     413,   -1,  414,   -1,   -1,   -1,   -1,  415,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  416,
      -1,   -1,   -1,  417,  418,   -1,   -1,   -1,
      -1,  419,   -1,   -1,  420,   -1,   -1,  421,
      -1,   -1,  422,  423,   -1,   -1,   -1,  424,
     425,   -1,   -1,   -1,   -1,  426,   -1,   -1,
      -1,   -1,  427,   -1,   -1,   -1,  428,  429,
      -1,   -1,   -1,  430,   -1,  431,  432,   -1,
     433,  434,   -1,  435,  436,  437,   -1,   -1,
      -1,   -1,  438,  439,   -1,   -1,  440,   -1,
      -1,   -1,   -1,   -1,  441,   -1,  442,   -1,
      -1,  443,   -1,   -1,   -1,  444,   -1,  445,
      -1,   -1,   -1,   -1,  446,   -1,   -1,  447,
      -1,  448,   -1,   -1,  449,   -1,  450,   -1,
      -1,  451,   -1,   -1,   -1,   -1,  452,   -1,
     453,   -1,   -1,  454,   -1,  455,  456,  457,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     458,   -1,  459,  460,  461,   -1,   -1,  462,
     463,  464,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  465,   -1,   -1,  466,  467,
      -1,   -1,  468,   -1,   -1,   -1,   -1,   -1,
     469,   -1,  470,   -1,  471,   -1,  472,  473,
      -1,   -1,   -1,   -1,  474,   -1,   -1,   -1,
      -1,  475,   -1,   -1,   -1,  476,   -1,  477,
      -1,   -1,   -1,  478,   -1,   -1,  479,   -1,
      -1,  480,   -1,   -1,  481,  482,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  483,  484,  485,   -1,  486,  487,
     488,   -1,   -1,  489,   -1,  490,  491,   -1,
      -1,   -1,   -1,  492,   -1,   -1,  493,  494,
      -1,   -1,   -1,   -1,  495,   -1,   -1,   -1,
     496,   -1,   -1,   -1,   -1,  497,   -1,  498,
      -1,  499,   -1,   -1,  500,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  501,  502,   -1,
      -1,   -1,   -1,  503,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  504,  505,   -1,   -1,   -1,
      -1,   -1,  506,   -1,   -1,   -1,  507,   -1,
      -1,   -1,   -1,  508,   -1,   -1,   -1,   -1,
     509,  510,   -1,   -1,  511,   -1,   -1,   -1,
     512,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     513,   -1,  514,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  515,   -1,
      -1,   -1,   -1,  516,  517,   -1,   -1,   -1,
      -1,  518,   -1,   -1,   -1,   -1,  519,   -1,
      -1,  520,  521,   -1,   -1,  522,   -1,   -1,
      -1,   -1,   -1,   -1,  523,  524,   -1,  525,
      -1,   -1,   -1,   -1,   -1,   -1,  526,  527,
      -1,  528,   -1,   -1,  529,   -1,   -1,  530,
     531,  532,   -1,   -1,   -1,   -1,  533,   -1,
      -1,   -1,  534,  535,   -1,  536,   -1,  537,
     538,   -1,   -1,   -1,  539,   -1,   -1,  540,
      -1,  541,  542,  543,  544,   -1,   -1,   -1,
      -1,   -1,   -1,  545,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  546,   -1,   -1,
      -1,   -1,   -1,  547,   -1,  548,  549,   -1,
      -1,   -1,  550,   -1,  551,  552,   -1,   -1,
      -1,  553,   -1,   -1,   -1,   -1,   -1,  554,
      -1,   -1,  555,  556,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  557,   -1,  558,   -1,
      -1,   -1,  559,   -1,   -1,   -1,  560,   -1,
     561,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  562,   -1,   -1,   -1,   -1,  563,  564,
      -1,   -1,   -1,   -1,  565,   -1,   -1,   -1,
      -1,  566,   -1,   -1,   -1,  567,  568,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  569,   -1,
     570,   -1,   -1,   -1,  571,   -1,   -1,   -1,
     572,   -1,  573,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  574,   -1,   -1,   -1,  575,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  576,   -1,  577,   -1,   -1,
     578,   -1,  579,   -1,   -1,   -1,  580,   -1,
      -1,   -1,   -1,   -1,  581,   -1,   -1,   -1,
      -1,  582,   -1,   -1,   -1,   -1,  583,   -1,
      -1,   -1,  584,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  585,   -1,   -1,
      -1,   -1,  586,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  587,  588,   -1,
      -1,  589,   -1,   -1,   -1,   -1,  590,   -1,
     591,  592,   -1,   -1,   -1,  593,  594,   -1,
      -1,   -1,  595,   -1,   -1,  596,   -1,   -1,
     597,   -1,   -1,   -1,  598,   -1,  599,   -1,
      -1,  600,   -1,  601,  602,  603,   -1,   -1,
     604,  605,   -1,   -1,   -1,  606,  607,  608,
     609,   -1,  610,  611,   -1,   -1,   -1,  612,
      -1,   -1,  613,   -1,   -1,   -1,   -1,   -1,
      -1,  614,  615,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  616,  617,   -1,   -1,   -1,
     618,  619,   -1,   -1,   -1,   -1,  620,  621,
     622,   -1,  623,   -1,   -1,   -1,  624,   -1,
      -1,   -1,   -1,   -1,  625,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  626,
     627,   -1,   -1,   -1,  628,   -1,   -1,   -1,
      -1,  629,   -1,   -1,   -1,   -1,  630,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     631,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  632,  633,   -1,  634,   -1,  635,
      -1,   -1,   -1,   -1,  636,   -1,   -1,   -1,
     637,   -1,   -1,   -1,   -1,   -1,  638,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  639,  640,   -1,   -1,
      -1,   -1,  641,   -1,   -1,   -1,   -1,  642,
      -1,   -1,  643,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  644,  645,   -1,
      -1,   -1,  646,  647,  648,   -1,  649,   -1,
      -1,  650,   -1,   -1,   -1,  651,   -1,   -1,
      -1,   -1,  652,   -1,   -1,  653,   -1,   -1,
      -1,  654,   -1,   -1,  655,   -1,   -1,  656,
      -1,   -1,   -1,   -1,  657,  658,   -1,  659,
     660,   -1,  661,   -1,   -1,   -1,   -1,   -1,
     662,   -1,   -1,   -1,  663,   -1,  664,   -1,
      -1,   -1,  665,   -1,   -1,  666,  667,  668,
      -1,   -1,   -1,   -1,  669,   -1,  670,   -1,
     671,  672,   -1,   -1,   -1,  673,   -1,   -1,
      -1,   -1,  674,   -1,  675,   -1,  676,  677,
     678,   -1,  679,   -1,  680,  681,  682,   -1,
      -1,  683,  684,  685,  686,   -1,   -1,  687,
      -1,   -1,   -1,  688,   -1,   -1,   -1,   -1,
     689,  690,   -1,   -1,  691,  692,  693,   -1,
      -1,  694,   -1,  695,   -1,   -1,   -1,  696,
      -1,   -1,   -1,   -1,   -1,   -1,  697,   -1,
      -1,  698,   -1,   -1,  699,   -1,  700,  701,
      -1,   -1,  702,  703,  704,  705,   -1,   -1,
      -1,  706,   -1,   -1,   -1,  707,   -1,   -1,
      -1,   -1,  708,  709,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  710,   -1,  711,
      -1,  712,  713,   -1,   -1,  714,   -1,   -1,
      -1,   -1,   -1,   -1,  715,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  716,   -1,   -1,
     717,   -1,  718,  719,   -1,   -1,   -1,  720,
      -1,   -1,  721,  722,   -1,   -1,   -1,   -1,
      -1,   -1,  723,  724,   -1,   -1,  725,  726,
      -1,  727,  728,   -1,   -1,   -1,   -1,   -1,
     729,  730,   -1,   -1,   -1,   -1,  731,   -1,
      -1,   -1,  732,  733,   -1,  734,  735,   -1,
      -1,   -1,  736,  737,  738,  739,  740,   -1,
     741,  742,  743,   -1,   -1,   -1,   -1,  744,
     745,   -1,  746,   -1,   -1,   -1,  747,   -1,
      -1,  748,   -1,  749,   -1,  750,  751,   -1,
      -1,  752,  753,   -1,   -1,   -1,   -1,   -1,
     754,   -1,  755,  756,   -1,   -1,   -1,  757,
      -1,  758,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  759,
      -1,  760,   -1,   -1,   -1,   -1,  761,   -1,
     762,  763,   -1,  764,   -1,   -1,   -1,  765,
     766,   -1,  767,  768,   -1,  769,   -1,   -1,
      -1,   -1,  770,   -1,   -1,  771,  772,   -1,
      -1,   -1,   -1,  773,  774,   -1,  775,  776,
      -1,  777,   -1,   -1,  778,  779,   -1,   -1,
      -1,  780,   -1,  781,  782,   -1,   -1,  783,
      -1,   -1,  784,  785,   -1,  786,   -1,   -1,
     787,  788,   -1,   -1,   -1,   -1,   -1,  789,
      -1,   -1,  790,  791,  792,  793,   -1,   -1,
      -1,   -1,  794,   -1,   -1,  795,   -1,  796,
      -1,   -1,  797,   -1,   -1,   -1,  798,  799,
     800,   -1,   -1,   -1,  801,   -1,  802,  803,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  804,
      -1,  805,  806,  807,  808,   -1,   -1,   -1,
     809,   -1,   -1,   -1,   -1,  810,   -1,   -1,
     811,   -1,  812,   -1,   -1,  813,   -1,  814,
     815,  816,   -1,  817,  818,   -1,   -1,   -1,
     819,   -1,  820,   -1,   -1,  821,  822,  823,
     824,   -1,   -1,   -1,  825,   -1,   -1,   -1,
      -1,  826,   -1,   -1,   -1,   -1,  827,   -1,
      -1,   -1,  828,   -1,   -1,   -1,   -1,  829,
      -1,   -1,   -1,  830,   -1,  831,   -1,   -1,
      -1,  832,   -1,   -1,  833,  834,  835,   -1,
      -1,   -1,   -1,  836,  837,  838,   -1,   -1,
     839,  840,  841,   -1,  842,  843,  844,   -1,
      -1,   -1,   -1,  845,  846,   -1,  847,  848,
      -1,  849,  850,   -1,  851,  852,   -1,  853,
      -1,  854,   -1,  855,   -1,   -1,   -1,   -1,
     856,  857,   -1,  858,  859,   -1,   -1,   -1,
     860,  861,  862,  863,  864,   -1,   -1,   -1,
     865,   -1,   -1,   -1,   -1,  866,   -1,  867,
      -1,   -1,   -1,   -1,  868,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  869,   -1,   -1,  870,
      -1,   -1,  871,  872,   -1,   -1,   -1,   -1,
     873,   -1,   -1,   -1,   -1,  874,  875,   -1,
      -1,   -1,   -1,  876,   -1,   -1,   -1,  877,
     878,   -1,   -1,   -1,  879,   -1,   -1,   -1,
     880,  881,   -1,  882,   -1,   -1,   -1,  883,
     884,   -1,   -1,  885,   -1,   -1,   -1,  886,
      -1,   -1,   -1,   -1,  887,  888,  889,   -1,
      -1,  890,   -1,   -1,   -1,   -1,  891,   -1,
     892,   -1,  893,   -1,  894,  895,   -1,   -1,
      -1,  896,   -1,   -1,   -1,   -1,   -1,  897,
     898,   -1,   -1,  899,   -1,   -1,   -1,   -1,
     900,  901,   -1,  902,   -1,  903,  904,   -1,
      -1,   -1,  905,   -1,   -1,   -1,  906,  907,
     908,   -1,   -1,  909,   -1,  910,  911,   -1,
      -1,   -1,  912,   -1,  913,   -1,   -1,   -1,
      -1,   -1,  914,   -1,  915,  916,  917,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  918,   -1,
      -1,  919,  920,   -1,   -1,   -1,  921,  922,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  923,  924,  925,
      -1,   -1,  926,  927,  928,  929,   -1,  930,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  931,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  932,
      -1,  933,   -1,   -1,  934,  935,   -1,  936,
      -1,   -1,  937,   -1,  938,   -1,  939,  940,
      -1,   -1,   -1,   -1,   -1,  941,  942,   -1,
      -1,  943,  944,  945,   -1,   -1,   -1,   -1,
     946,   -1,   -1,   -1,   -1,  947,   -1,   -1,
      -1,   -1,  948,  949,   -1,  950,  951,   -1,
      -1,   -1,   -1,  952,  953,   -1,   -1,   -1,
      -1,   -1,  954,   -1,   -1,  955,  956,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  957,
     958,   -1,   -1,  959,   -1,   -1,   -1,   -1,
      -1,   -1,  960,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  961,  962,  963,   -1,   -1,  964,
      -1,  965,   -1,   -1,   -1,   -1,  966,   -1,
     967,   -1,   -1,   -1,   -1,   -1,   -1,  968,
     969,   -1,  970,   -1,   -1,   -1,   -1,   -1,
      -1,  971,   -1,   -1,  972,  973,  974,   -1,
      -1,   -1,  975,  976,   -1,   -1,  977,  978,
      -1,  979,  980,   -1,   -1,   -1,  981,   -1,
      -1,  982,   -1,  983,   -1,  984,  985,   -1,
     986,   -1,   -1,   -1,  987,  988,  989,  990,
      -1,   -1,  991,   -1,  992,   -1,  993,  994,
      -1,   -1,   -1,   -1,  995,   -1,   -1,   -1,
     996,  997,  998,   -1,   -1,  999, 1000,   -1,
    1001,   -1, 1002, 1003,   -1, 1004,   -1,   -1,
    1005, 1006,   -1,   -1,   -1,   -1, 1007, 1008,
      -1,   -1, 1009,   -1,   -1, 1010,   -1,   -1,
      -1, 1011,   -1,   -1,   -1,   -1,   -1, 1012,
      -1,   -1,   -1,   -1,   -1, 1013,   -1,   -1,
      -1,   -1, 1014, 1015, 1016, 1017, 1018,   -1,
      -1,   -1,   -1, 1019, 1020, 1021,   -1, 1022,
    1023,   -1, 1024,   -1,   -1,   -1, 1025,   -1,
      -1,   -1,   -1,   -1, 1026,   -1,   -1,   -1,
      -1, 1027, 1028,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1029,   -1,   -1,   -1, 1030,
    1031,   -1,   -1,   -1,   -1, 1032, 1033,   -1,
    1034, 1035,   -1,   -1, 1036,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1037,   -1,   -1, 1038,
    1039, 1040,   -1,   -1, 1041,   -1, 1042,   -1,
    1043, 1044, 1045, 1046,   -1,   -1,   -1, 1047,
      -1,   -1, 1048,   -1,   -1,   -1,   -1, 1049,
    1050, 1051, 1052,   -1,   -1,   -1,   -1, 1053,
      -1,   -1,   -1,   -1,   -1, 1054, 1055,   -1,
    1056, 1057,   -1,   -1, 1058,   -1, 1059,   -1,
      -1, 1060, 1061, 1062,   -1,   -1,   -1,   -1,
    1063, 1064,   -1,   -1,   -1, 1065,   -1,   -1,
    1066,   -1, 1067,   -1,   -1,   -1,   -1, 1068,
      -1, 1069,   -1, 1070,   -1,   -1,   -1, 1071,
    1072, 1073,   -1,   -1, 1074, 1075,   -1,   -1,
      -1,   -1, 1076, 1077, 1078, 1079,   -1, 1080,
    1081,   -1,   -1,   -1,   -1, 1082, 1083,   -1,
    1084, 1085,   -1,   -1, 1086, 1087,   -1, 1088,
      -1,   -1,   -1, 1089,   -1,   -1, 1090, 1091,
      -1,   -1,   -1, 1092, 1093, 1094,   -1,   -1,
    1095, 1096, 1097, 1098,   -1, 1099,   -1,   -1,
      -1, 1100,   -1, 1101, 1102,   -1,   -1,   -1,
    1103,   -1,   -1,   -1,   -1,   -1,   -1, 1104,
      -1,   -1,   -1, 1105,   -1,   -1,   -1, 1106,
      -1, 1107,   -1,   -1,   -1, 1108, 1109,   -1,
      -1, 1110,   -1, 1111,   -1,   -1, 1112,   -1,
    1113,   -1,   -1, 1114,   -1, 1115,   -1,   -1,
    1116, 1117, 1118,   -1,   -1,   -1,   -1, 1119,
      -1,   -1,   -1,   -1, 1120,   -1,   -1,   -1,
      -1, 1121,   -1,   -1,   -1, 1122, 1123,   -1,
      -1,   -1,   -1, 1124,   -1, 1125, 1126, 1127,
      -1, 1128,   -1,   -1,   -1,   -1,   -1,   -1,
    1129,   -1, 1130, 1131, 1132,   -1, 1133, 1134,
      -1, 1135,   -1, 1136, 1137,   -1, 1138,   -1,
      -1,   -1,   -1, 1139,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1140,   -1, 1141,
      -1,   -1,   -1,   -1, 1142,   -1,   -1,   -1,
      -1, 1143, 1144,   -1,   -1,   -1,   -1, 1145,
      -1,   -1, 1146, 1147, 1148,   -1,   -1,   -1,
    1149, 1150,   -1,   -1,   -1,   -1, 1151,   -1,
      -1, 1152,   -1, 1153,   -1,   -1, 1154, 1155,
    1156,   -1,   -1, 1157, 1158,   -1,   -1,   -1,
    1159,   -1, 1160,   -1,   -1, 1161, 1162, 1163,
      -1, 1164, 1165,   -1,   -1,   -1,   -1,   -1,
    1166,   -1,   -1,   -1, 1167,   -1,   -1, 1168,
      -1, 1169,   -1, 1170,   -1,   -1, 1171, 1172,
    1173,   -1,   -1,   -1,   -1,   -1, 1174,   -1,
    1175, 1176,   -1,   -1, 1177,   -1, 1178, 1179,
    1180,   -1, 1181,   -1,   -1,   -1,   -1, 1182,
    1183, 1184, 1185,   -1, 1186, 1187, 1188,   -1,
    1189,   -1, 1190, 1191, 1192,   -1, 1193, 1194,
    1195,   -1,   -1,   -1, 1196, 1197,   -1,   -1,
    1198,   -1,   -1,   -1, 1199,   -1,   -1, 1200,
    1201,   -1,   -1,   -1, 1202,   -1, 1203, 1204,
    1205,   -1, 1206, 1207, 1208, 1209,   -1,   -1,
      -1,   -1, 1210, 1211,   -1, 1212, 1213,   -1,
    1214,   -1, 1215, 1216,   -1,   -1, 1217,   -1,
      -1,   -1, 1218,   -1, 1219,   -1, 1220,   -1,
    1221, 1222,   -1,   -1, 1223,   -1,   -1, 1224,
      -1, 1225,   -1, 1226,   -1, 1227, 1228,   -1,
    1229, 1230,   -1, 1231, 1232,   -1,   -1,   -1,
      -1, 1233,   -1,   -1, 1234, 1235,   -1,   -1,
    1236,   -1, 1237,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1238,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1239, 1240,   -1,   -1,
      -1, 1241, 1242, 1243,   -1, 1244, 1245,   -1,
      -1,   -1, 1246,   -1,   -1, 1247,   -1,   -1,
    1248, 1249, 1250,   -1,   -1, 1251, 1252,   -1,
      -1, 1253,   -1,   -1,   -1, 1254,   -1, 1255,
      -1, 1256,   -1,   -1, 1257, 1258, 1259,   -1,
      -1,   -1,   -1, 1260,   -1,   -1, 1261,   -1,
      -1,   -1,   -1, 1262,   -1,   -1,   -1,   -1,
    1263, 1264,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1265, 1266,   -1,   -1,   -1,   -1,
      -1,   -1, 1267,   -1, 1268, 1269,   -1, 1270,
      -1,   -1, 1271, 1272,   -1,   -1,   -1, 1273,
      -1,   -1,   -1, 1274, 1275,   -1,   -1,   -1,
      -1, 1276,   -1,   -1, 1277,   -1,   -1,   -1,
      -1, 1278, 1279, 1280,   -1,   -1,   -1,   -1,
      -1, 1281,   -1, 1282,   -1,   -1, 1283,   -1,
      -1,   -1, 1284, 1285, 1286, 1287, 1288, 1289,
    1290,   -1,   -1,   -1,   -1,   -1,   -1, 1291,
      -1, 1292, 1293, 1294,   -1,   -1,   -1,   -1,
    1295,   -1, 1296,   -1, 1297,   -1,   -1, 1298,
    1299,   -1, 1300, 1301, 1302, 1303,   -1,   -1,
      -1,   -1, 1304,   -1, 1305,   -1, 1306, 1307,
    1308, 1309, 1310,   -1, 1311,   -1,   -1, 1312,
      -1,   -1, 1313, 1314,   -1,   -1, 1315, 1316,
      -1,   -1,   -1,   -1, 1317,   -1, 1318, 1319,
      -1, 1320,   -1,   -1, 1321,   -1, 1322,   -1,
      -1, 1323,   -1, 1324,   -1, 1325, 1326, 1327,
      -1,   -1, 1328,   -1, 1329,   -1,   -1,   -1,
      -1,   -1,   -1, 1330,   -1,   -1, 1331,   -1,
    1332, 1333,   -1, 1334,   -1,   -1,   -1, 1335,
      -1,   -1,   -1,   -1, 1336,   -1,   -1,   -1,
      -1, 1337,   -1,   -1,   -1,   -1,   -1,   -1,
    1338,   -1, 1339, 1340, 1341,   -1,   -1,   -1,
      -1, 1342, 1343,   -1,   -1,   -1,   -1, 1344,
      -1,   -1, 1345,   -1, 1346,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1347, 1348,   -1,
      -1,   -1,   -1, 1349, 1350, 1351,   -1, 1352,
    1353,   -1, 1354,   -1,   -1, 1355, 1356, 1357,
    1358, 1359,   -1,   -1,   -1,   -1,   -1,   -1,
    1360,   -1, 1361,   -1, 1362, 1363,   -1, 1364,
    1365, 1366, 1367,   -1,   -1,   -1, 1368,   -1,
    1369, 1370,   -1, 1371,   -1,   -1,   -1,   -1,
      -1,   -1, 1372, 1373, 1374, 1375,   -1,   -1,
    1376, 1377, 1378,   -1, 1379, 1380,   -1, 1381,
      -1,   -1,   -1, 1382, 1383,   -1,   -1,   -1,
    1384,   -1,   -1, 1385, 1386, 1387, 1388,   -1,
      -1,   -1, 1389, 1390,   -1,   -1, 1391,   -1,
    1392,   -1,   -1,   -1, 1393,   -1,   -1,   -1,
    1394, 1395,   -1, 1396,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1397,   -1,   -1, 1398,   -1,
    1399, 1400,   -1,   -1, 1401,   -1,   -1, 1402,
      -1,   -1, 1403,   -1, 1404,   -1,   -1, 1405,
    1406, 1407,   -1, 1408, 1409, 1410,   -1,   -1,
    1411, 1412,   -1,   -1,   -1, 1413, 1414,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1415,   -1,   -1,   -1,   -1,   -1, 1416,   -1,
      -1, 1417,   -1, 1418,   -1,   -1,   -1, 1419,
      -1,   -1, 1420, 1421, 1422, 1423,   -1,   -1,
      -1,   -1, 1424, 1425, 1426, 1427,   -1, 1428,
      -1,   -1,   -1, 1429, 1430,   -1, 1431,   -1,
    1432,   -1,   -1,   -1,   -1, 1433, 1434,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1435,   -1,
      -1,   -1, 1436, 1437, 1438, 1439,   -1,   -1,
      -1,   -1, 1440,   -1, 1441, 1442,   -1, 1443,
      -1,   -1,   -1, 1444, 1445,   -1, 1446,   -1,
      -1, 1447,   -1,   -1,   -1, 1448,   -1, 1449,
      -1,   -1, 1450,   -1,   -1, 1451,   -1, 1452,
      -1,   -1, 1453,   -1,   -1,   -1, 1454,   -1,
    1455,   -1,   -1,   -1,   -1,   -1,   -1, 1456,
      -1,   -1, 1457, 1458, 1459,   -1,   -1,   -1,
      -1, 1460,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1461,   -1, 1462,   -1,   -1, 1463,   -1,
      -1,   -1,   -1,   -1, 1464,   -1,   -1,   -1,
      -1, 1465, 1466,   -1,   -1,   -1, 1467, 1468,
      -1, 1469,   -1,   -1, 1470,   -1, 1471, 1472,
      -1, 1473,   -1, 1474,   -1,   -1, 1475,   -1,
    1476,   -1, 1477,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1478,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1479,   -1, 1480, 1481,
      -1,   -1, 1482,   -1, 1483, 1484,   -1,   -1,
      -1, 1485,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1486, 1487,   -1,   -1,   -1,   -1,
    1488, 1489,   -1,   -1, 1490,   -1,   -1,   -1,
      -1,   -1,   -1, 1491,   -1,   -1,   -1, 1492,
      -1,   -1, 1493, 1494, 1495,   -1,   -1, 1496,
    1497, 1498, 1499,   -1, 1500,   -1,   -1,   -1,
      -1,   -1, 1501,   -1,   -1,   -1, 1502,   -1,
    1503,   -1, 1504, 1505, 1506,   -1,   -1, 1507,
    1508, 1509, 1510,   -1, 1511, 1512,   -1,   -1,
      -1, 1513, 1514, 1515, 1516,   -1,   -1,   -1,
    1517, 1518,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1519,
      -1,   -1,   -1, 1520,   -1, 1521, 1522,   -1,
      -1,   -1, 1523, 1524,   -1,   -1, 1525, 1526,
      -1,   -1,   -1, 1527, 1528, 1529, 1530,   -1,
      -1,   -1,   -1, 1531,   -1,   -1, 1532,   -1,
      -1, 1533,   -1, 1534,   -1,   -1,   -1,   -1,
      -1, 1535,   -1, 1536,   -1, 1537, 1538, 1539,
      -1,   -1, 1540,   -1,   -1, 1541, 1542, 1543,
    1544,   -1,   -1, 1545,   -1, 1546, 1547,   -1,
    1548, 1549,   -1,   -1,   -1,   -1,   -1, 1550,
      -1,   -1, 1551, 1552,   -1, 1553,   -1, 1554,
    1555, 1556, 1557,   -1,   -1,   -1, 1558,   -1,
      -1, 1559, 1560,   -1, 1561,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1562,   -1,   -1, 1563,
      -1,   -1,   -1, 1564, 1565,   -1, 1566,   -1,
      -1, 1567,   -1, 1568,   -1,   -1, 1569, 1570,
    1571,   -1,   -1,   -1, 1572,   -1,   -1, 1573,
    1574, 1575, 1576,   -1, 1577,   -1, 1578, 1579,
      -1,   -1,   -1, 1580, 1581,   -1,   -1,   -1,
      -1, 1582,   -1,   -1, 1583, 1584, 1585, 1586,
      -1, 1587,   -1, 1588,   -1,   -1,   -1, 1589,
    1590,   -1,   -1,   -1, 1591,   -1, 1592, 1593,
      -1, 1594, 1595,   -1,   -1, 1596,   -1, 1597,
      -1,   -1,   -1,   -1,   -1,   -1, 1598,   -1,
    1599,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1600,   -1, 1601, 1602,   -1,   -1,   -1,   -1,
    1603,   -1,   -1, 1604,   -1,   -1,   -1,   -1,
    1605,   -1, 1606,   -1, 1607,   -1,   -1, 1608,
      -1,   -1,   -1,   -1, 1609, 1610,   -1,   -1,
    1611,   -1,   -1, 1612, 1613,   -1,   -1,   -1,
    1614, 1615,   -1,   -1, 1616, 1617,   -1, 1618,
      -1, 1619,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1620,   -1,   -1,   -1,   -1,   -1,   -1,
    1621,   -1,   -1,   -1,   -1, 1622, 1623,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1624,   -1,   -1, 1625,   -1,   -1,   -1,
      -1, 1626,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1627, 1628,   -1,
      -1,   -1, 1629,   -1, 1630, 1631,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1632,   -1,   -1,
      -1, 1633, 1634,   -1, 1635, 1636,   -1,   -1,
    1637, 1638,   -1,   -1,   -1, 1639, 1640,   -1,
      -1,   -1,   -1,   -1, 1641,   -1,   -1, 1642,
    1643,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1644,   -1,   -1,   -1,   -1,   -1,
    1645,   -1,   -1,   -1, 1646, 1647, 1648,   -1,
    1649, 1650, 1651, 1652,   -1,   -1, 1653,   -1,
      -1, 1654,   -1,   -1, 1655,   -1,   -1,   -1,
      -1, 1656,   -1,   -1,   -1,   -1,   -1, 1657,
      -1,   -1, 1658, 1659, 1660,   -1, 1661, 1662,
      -1,   -1, 1663,   -1,   -1,   -1,   -1, 1664,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1665,
      -1,   -1,   -1, 1666,   -1, 1667,   -1,   -1,
      -1,   -1, 1668,   -1,   -1, 1669, 1670,   -1,
      -1, 1671,   -1, 1672, 1673,   -1,   -1, 1674,
    1675,   -1,   -1,   -1,   -1, 1676,   -1,   -1,
      -1, 1677, 1678,   -1, 1679, 1680,   -1,   -1,
    1681,   -1,   -1, 1682,   -1, 1683,   -1,   -1,
    1684,   -1, 1685, 1686,   -1,   -1,   -1,   -1,
      -1,   -1, 1687,   -1,   -1,   -1,   -1,   -1,
    1688,   -1,   -1,   -1,   -1,   -1, 1689,   -1,
      -1,   -1,   -1, 1690,   -1, 1691, 1692, 1693,
      -1,   -1,   -1,   -1, 1694,   -1,   -1,   -1,
    1695, 1696,   -1,   -1, 1697,   -1,   -1,   -1,
      -1, 1698,   -1,   -1,   -1,   -1,   -1, 1699,
    1700,   -1,   -1,   -1, 1701, 1702,   -1, 1703,
    1704, 1705,   -1,   -1,   -1,   -1,   -1, 1706,
      -1,   -1,   -1, 1707,   -1,   -1,   -1,   -1,
    1708,   -1, 1709,   -1,   -1,   -1, 1710, 1711,
      -1,   -1,   -1, 1712, 1713, 1714,   -1,   -1,
    1715, 1716,   -1, 1717,   -1,   -1,   -1,   -1,
    1718, 1719,   -1,   -1,   -1,   -1, 1720,   -1,
      -1,   -1,   -1,   -1, 1721,   -1,   -1, 1722,
      -1,   -1, 1723,   -1,   -1,   -1,   -1,   -1,
      -1, 1724,   -1,   -1,   -1,   -1,   -1, 1725,
    1726,   -1,   -1,   -1, 1727, 1728, 1729,   -1,
      -1, 1730, 1731,   -1,   -1,   -1,   -1, 1732,
      -1,   -1,   -1, 1733, 1734,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1735,   -1,
      -1,   -1, 1736, 1737,   -1,   -1,   -1, 1738,
    1739,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1740, 1741,   -1,   -1,   -1,   -1,
    1742,   -1,   -1,   -1,   -1, 1743, 1744,   -1,
      -1,   -1,   -1,   -1, 1745, 1746,   -1,   -1,
      -1,   -1, 1747, 1748, 1749,   -1,   -1, 1750,
      -1, 1751,   -1,   -1, 1752,   -1, 1753,   -1,
      -1,   -1,   -1, 1754,   -1,   -1, 1755,   -1,
      -1,   -1,   -1,   -1,   -1, 1756,   -1,   -1,
    1757,   -1,   -1,   -1, 1758,   -1, 1759,   -1,
      -1,   -1, 1760, 1761,   -1, 1762, 1763,   -1,
      -1,   -1, 1764,   -1,   -1, 1765,   -1,   -1,
      -1, 1766,   -1,   -1, 1767,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1768,   -1,
      -1,   -1,   -1,   -1,   -1, 1769, 1770, 1771,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1772,   -1,   -1,   -1, 1773,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1774,   -1, 1775,   -1,   -1, 1776,   -1,
      -1, 1777,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1778,   -1,   -1,   -1,   -1,
    1779,   -1, 1780,   -1,   -1, 1781,   -1,   -1,
      -1, 1782,   -1,   -1,   -1,   -1, 1783, 1784,
      -1,   -1, 1785,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1786,   -1,   -1, 1787,   -1,   -1,
    1788, 1789,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1790,   -1, 1791,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1792,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1793, 1794,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1795,   -1,   -1,
      -1, 1796,   -1,   -1,   -1,   -1, 1797,   -1,
      -1,   -1, 1798,   -1,   -1,   -1,   -1,   -1,
    1799,   -1,   -1, 1800,   -1, 1801,   -1, 1802,
    1803, 1804,   -1,   -1,   -1, 1805,   -1,   -1,
      -1, 1806,   -1,   -1,   -1, 1807, 1808,   -1,
      -1,   -1,   -1,   -1, 1809,   -1, 1810,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1811,   -1,   -1,   -1,   -1,   -1,   -1, 1812,
      -1,   -1,   -1, 1813, 1814,   -1,   -1,   -1,
      -1, 1815, 1816,   -1,   -1,   -1, 1817,   -1,
    1818,   -1,   -1, 1819,   -1,   -1,   -1, 1820,
    1821,   -1,   -1,   -1, 1822,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1823, 1824,
    1825,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1826,   -1,   -1, 1827,   -1,   -1,   -1, 1828,
      -1,   -1,   -1, 1829, 1830,   -1,   -1,   -1,
      -1, 1831,   -1, 1832,   -1,   -1,   -1, 1833,
      -1, 1834,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1835,   -1, 1836,   -1,   -1,   -1,   -1, 1837,
    1838,   -1, 1839,   -1,   -1,   -1, 1840,   -1,
      -1, 1841,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1842,   -1,   -1, 1843,   -1, 1844,
    1845, 1846,   -1, 1847,   -1, 1848,   -1,   -1,
      -1, 1849, 1850,   -1,   -1,   -1, 1851,   -1,
      -1,   -1,   -1, 1852,   -1, 1853,   -1,   -1,
      -1, 1854,   -1,   -1, 1855, 1856, 1857,   -1,
      -1,   -1,   -1,   -1, 1858,   -1,   -1, 1859,
      -1,   -1, 1860, 1861,   -1, 1862,   -1, 1863,
    1864, 1865, 1866,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1867,   -1, 1868,   -1,   -1,   -1,
    1869, 1870,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1871, 1872,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1873,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1874, 1875,   -1,   -1,   -1,
      -1, 1876,   -1,   -1,   -1, 1877,   -1,   -1,
      -1,   -1,   -1, 1878,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1879,   -1,   -1,   -1,   -1,   -1,   -1, 1880,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1881,
      -1, 1882, 1883,   -1,   -1, 1884,   -1, 1885,
      -1, 1886, 1887, 1888,   -1,   -1, 1889,   -1,
      -1, 1890,   -1,   -1,   -1,   -1, 1891,   -1,
      -1,   -1,   -1,   -1,   -1, 1892, 1893, 1894,
      -1, 1895,   -1,   -1, 1896,   -1, 1897,   -1,
    1898, 1899,   -1,   -1, 1900, 1901,   -1,   -1,
      -1,   -1, 1902,   -1, 1903,   -1,   -1,   -1,
    1904,   -1,   -1,   -1,   -1,   -1, 1905,   -1,
      -1, 1906, 1907,   -1,   -1, 1908,   -1,   -1,
      -1,   -1, 1909,   -1,   -1,   -1,   -1, 1910,
      -1,   -1,   -1,   -1, 1911,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1912,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1913,   -1,   -1, 1914,   -1,   -1,
      -1,   -1, 1915, 1916,   -1, 1917,   -1,   -1,
    1918,   -1,   -1,   -1,   -1, 1919,   -1,   -1,
    1920, 1921,   -1,   -1,   -1,   -1,   -1, 1922,
      -1,   -1,   -1,   -1,   -1, 1923,   -1, 1924,
      -1,   -1, 1925,   -1,   -1,   -1,   -1, 1926,
      -1,   -1,   -1,   -1, 1927,   -1,   -1,   -1,
      -1,   -1,   -1, 1928,   -1, 1929,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1930,
      -1,   -1,   -1, 1931, 1932,   -1,   -1,   -1,
    1933,   -1, 1934,   -1,   -1,   -1, 1935, 1936,
      -1,   -1,   -1,   -1,   -1, 1937,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1938,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1939, 1940,
      -1,   -1,   -1, 1941, 1942,   -1,   -1,   -1,
    1943,   -1,   -1,   -1,   -1,   -1,   -1, 1944,
      -1,   -1, 1945, 1946, 1947,   -1,   -1,   -1,
    1948, 1949,   -1,   -1,   -1, 1950, 1951,   -1,
      -1,   -1, 1952, 1953,   -1,   -1,   -1, 1954,
      -1,   -1,   -1,   -1, 1955, 1956,   -1,   -1,
      -1, 1957,   -1,   -1, 1958, 1959,   -1,   -1,
      -1,   -1, 1960,   -1,   -1,   -1, 1961,   -1,
      -1, 1962,   -1,   -1,   -1, 1963, 1964,   -1,
      -1,   -1,   -1,   -1, 1965, 1966,   -1, 1967,
      -1, 1968,   -1,   -1, 1969,   -1, 1970,   -1,
      -1, 1971,   -1, 1972, 1973,   -1,   -1,   -1,
      -1,   -1, 1974,   -1,   -1,   -1,   -1, 1975,
      -1, 1976,   -1,   -1,   -1,   -1, 1977,   -1,
      -1, 1978,   -1, 1979,   -1,   -1, 1980, 1981,
      -1,   -1,   -1, 1982,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1983,   -1, 1984,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1985,
      -1, 1986,   -1,   -1, 1987,   -1,   -1,   -1,
    1988,   -1,   -1,   -1,   -1,   -1, 1989, 1990,
    1991,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1992,   -1,   -1, 1993, 1994, 1995,
      -1, 1996, 1997, 1998, 1999,   -1, 2000, 2001,
    2002,   -1,   -1,   -1, 2003, 2004,   -1,   -1,
    2005, 2006, 2007,   -1,   -1,   -1, 2008,   -1,
      -1,   -1, 2009, 2010,   -1,   -1,   -1,   -1,
      -1,   -1, 2011,   -1,   -1,   -1, 2012,   -1,
      -1,   -1,   -1,   -1, 2013, 2014,   -1,   -1,
    2015, 2016,   -1,   -1,   -1, 2017,   -1,   -1,
      -1,   -1,   -1,   -1, 2018, 2019,   -1,   -1,
      -1,   -1,   -1,   -1, 2020,   -1,   -1, 2021,
      -1, 2022, 2023,   -1, 2024,   -1,   -1,   -1,
      -1,   -1, 2025, 2026, 2027,   -1, 2028, 2029,
      -1, 2030,   -1,   -1, 2031, 2032,   -1,   -1,
    2033, 2034, 2035,   -1,   -1,   -1,   -1, 2036,
    2037,   -1,   -1, 2038,   -1,   -1,   -1,   -1,
    2039,   -1,   -1,   -1,   -1, 2040,   -1,   -1,
      -1, 2041, 2042,   -1,   -1,   -1,   -1, 2043,
    2044, 2045, 2046,   -1, 2047, 2048,   -1,   -1,
    2049,   -1, 2050,   -1,   -1, 2051,   -1,   -1,
      -1,   -1,   -1,   -1, 2052,   -1, 2053,   -1,
    2054, 2055,   -1,   -1, 2056,   -1,   -1,   -1,
      -1, 2057,   -1,   -1,   -1, 2058,   -1,   -1,
      -1, 2059,   -1, 2060,   -1,   -1, 2061,   -1,
    2062,   -1, 2063,   -1,   -1,   -1,   -1,   -1,
    2064,   -1,   -1,   -1, 2065,   -1,   -1,   -1,
    2066,   -1,   -1,   -1,   -1, 2067,   -1,   -1,
      -1, 2068, 2069, 2070,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2071, 2072,   -1,   -1,
      -1, 2073,   -1, 2074,   -1,   -1, 2075, 2076,
    2077,   -1, 2078, 2079, 2080, 2081,   -1,   -1,
    2082,   -1,   -1,   -1,   -1, 2083,   -1,   -1,
      -1,   -1, 2084,   -1, 2085,   -1,   -1,   -1,
      -1, 2086,   -1,   -1, 2087, 2088, 2089,   -1,
    2090, 2091,   -1, 2092,   -1,   -1,   -1,   -1,
      -1, 2093,   -1,   -1,   -1, 2094, 2095,   -1,
      -1, 2096,   -1,   -1,   -1, 2097,   -1, 2098,
      -1,   -1, 2099, 2100, 2101,   -1,   -1, 2102,
    2103, 2104,   -1,   -1,   -1,   -1, 2105,   -1,
      -1, 2106,   -1, 2107,   -1,   -1,   -1, 2108,
      -1, 2109, 2110,   -1, 2111,   -1,   -1, 2112,
      -1, 2113,   -1,   -1,   -1,   -1, 2114,   -1,
    2115, 2116,   -1,   -1,   -1,   -1, 2117,   -1,
    2118,   -1,   -1,   -1,   -1, 2119,   -1, 2120,
      -1, 2121,   -1, 2122,   -1,   -1,   -1, 2123,
    2124,   -1,   -1, 2125,   -1,   -1,   -1,   -1,
      -1, 2126, 2127,   -1,   -1, 2128,   -1,   -1,
      -1,   -1,   -1,   -1, 2129,   -1, 2130,   -1,
    2131,   -1,   -1,   -1, 2132, 2133, 2134,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2135,   -1,   -1, 2136, 2137, 2138,   -1, 2139,
    2140,   -1,   -1,   -1,   -1, 2141,   -1, 2142,
      -1,   -1,   -1, 2143, 2144,   -1,   -1,   -1,
    2145, 2146,   -1,   -1,   -1, 2147, 2148,   -1,
      -1, 2149,   -1, 2150,   -1, 2151, 2152, 2153,
    2154, 2155,   -1, 2156,   -1, 2157,   -1,   -1,
    2158,   -1, 2159,   -1,   -1,   -1, 2160,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2161, 2162,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2163,   -1,   -1, 2164,   -1,
      -1,   -1, 2165, 2166,   -1,   -1,   -1,   -1,
    2167,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2168,   -1,   -1, 2169,
      -1, 2170,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2171,   -1,   -1,   -1,   -1, 2172,   -1,
    2173,   -1, 2174,   -1, 2175,   -1, 2176,   -1,
      -1, 2177, 2178,   -1,   -1,   -1,   -1, 2179,
      -1, 2180,   -1,   -1, 2181,   -1,   -1,   -1,
    2182, 2183, 2184,   -1,   -1, 2185,   -1,   -1,
      -1, 2186, 2187,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2188, 2189,   -1, 2190,   -1,   -1,
    2191,   -1,   -1,   -1, 2192, 2193,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2194,
      -1, 2195,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2196,   -1,   -1,   -1,   -1,   -1,
    2197,   -1,   -1, 2198,   -1, 2199,   -1,   -1,
    2200,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2201, 2202,   -1,   -1,   -1,
      -1,   -1,   -1, 2203,   -1,   -1,   -1,   -1,
      -1,   -1, 2204,   -1,   -1, 2205,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2206,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2207,   -1, 2208,   -1,   -1,   -1,   -1,   -1,
    2209,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2210,   -1,   -1,   -1,   -1, 2211, 2212,
      -1, 2213,   -1,   -1,   -1, 2214, 2215,   -1,
      -1,   -1,   -1, 2216,   -1,   -1, 2217,   -1,
      -1, 2218,   -1,   -1, 2219, 2220,   -1,   -1,
      -1,   -1,   -1, 2221, 2222,   -1,   -1,   -1,
    2223, 2224,   -1,   -1,   -1,   -1,   -1, 2225,
    2226, 2227,   -1, 2228, 2229,   -1,   -1,   -1,
      -1, 2230, 2231, 2232,   -1, 2233,   -1, 2234,
      -1,   -1, 2235,   -1, 2236,   -1,   -1, 2237,
      -1,   -1,   -1,   -1,   -1,   -1, 2238,   -1,
      -1, 2239,   -1, 2240,   -1,   -1,   -1, 2241,
      -1,   -1,   -1, 2242, 2243,   -1,   -1,   -1,
    2244, 2245,   -1,   -1,   -1,   -1, 2246,   -1,
      -1,   -1, 2247, 2248,   -1, 2249, 2250,   -1,
    2251,   -1,   -1,   -1, 2252,   -1,   -1, 2253,
      -1,   -1,   -1,   -1,   -1,   -1, 2254,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2255,   -1, 2256,   -1,
      -1,   -1, 2257,   -1, 2258,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2259,   -1,   -1,
      -1, 2260,   -1,   -1,   -1,   -1, 2261,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2262,   -1,
    2263,   -1, 2264,   -1,   -1,   -1,   -1, 2265,
      -1,   -1,   -1,   -1, 2266,   -1,   -1,   -1,
    2267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2268, 2269,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2270,   -1,   -1,   -1,
    2271,   -1,   -1,   -1,   -1,   -1, 2272, 2273,
    2274,   -1,   -1,   -1,   -1, 2275,   -1,   -1,
      -1, 2276, 2277,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2278, 2279,   -1,   -1,
      -1, 2280,   -1,   -1,   -1, 2281, 2282, 2283,
      -1,   -1,   -1, 2284,   -1, 2285,   -1,   -1,
    2286, 2287,   -1,   -1,   -1, 2288,   -1,   -1,
      -1, 2289,   -1,   -1,   -1, 2290, 2291, 2292,
    2293,   -1,   -1, 2294,   -1,   -1,   -1,   -1,
    2295,   -1,   -1,   -1,   -1,   -1,   -1, 2296,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2297,   -1,   -1, 2298,   -1, 2299, 2300,   -1,
    2301, 2302,   -1, 2303,   -1,   -1, 2304,   -1,
    2305,   -1,   -1,   -1, 2306,   -1, 2307,   -1,
      -1,   -1, 2308,   -1,   -1,   -1,   -1, 2309,
      -1,   -1,   -1, 2310,   -1,   -1,   -1, 2311,
      -1,   -1,   -1,   -1, 2312,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2313,
      -1, 2314, 2315, 2316,   -1,   -1,   -1, 2317,
      -1,   -1,   -1,   -1,   -1, 2318, 2319, 2320,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2321,   -1,   -1, 2322,   -1, 2323,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2324,   -1,
      -1,   -1, 2325, 2326,   -1, 2327,   -1,   -1,
      -1, 2328, 2329, 2330,   -1, 2331,   -1, 2332,
      -1,   -1,   -1, 2333,   -1, 2334,   -1,   -1,
      -1,   -1,   -1, 2335,   -1,   -1,   -1, 2336,
      -1,   -1,   -1,   -1,   -1, 2337,   -1, 2338,
      -1,   -1,   -1,   -1, 2339,   -1, 2340, 2341,
      -1, 2342, 2343,   -1, 2344,   -1,   -1,   -1,
    2345, 2346,   -1, 2347,   -1,   -1,   -1,   -1,
      -1, 2348,   -1, 2349,   -1,   -1, 2350,   -1,
      -1,   -1,   -1, 2351,   -1, 2352,   -1,   -1,
    2353, 2354,   -1,   -1, 2355,   -1,   -1, 2356,
    2357,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2358,   -1,   -1, 2359,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2360,   -1, 2361,
      -1,   -1,   -1,   -1, 2362,   -1,   -1,   -1,
    2363, 2364, 2365,   -1,   -1,   -1,   -1, 2366,
      -1,   -1,   -1,   -1,   -1, 2367,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2368,
    2369,   -1,   -1,   -1, 2370,   -1,   -1,   -1,
    2371,   -1, 2372,   -1,   -1,   -1,   -1,   -1,
    2373,   -1, 2374,   -1, 2375,   -1,   -1,   -1,
      -1,   -1,   -1, 2376,   -1,   -1,   -1,   -1,
    2377,   -1,   -1,   -1, 2378, 2379, 2380,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2381,   -1,   -1,   -1,   -1,   -1, 2382,   -1,
      -1, 2383,   -1, 2384,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2385,   -1,   -1,   -1, 2386,
      -1,   -1,   -1,   -1, 2387,   -1, 2388,   -1,
      -1,   -1,   -1, 2389,   -1,   -1, 2390,   -1,
      -1,   -1,   -1, 2391,   -1, 2392, 2393,   -1,
    2394,   -1, 2395, 2396,   -1,   -1,   -1,   -1,
      -1, 2397, 2398,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2399,   -1, 2400,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2401,   -1,   -1, 2402,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2403, 2404,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2405,   -1,   -1,   -1,
      -1, 2406,   -1, 2407,   -1,   -1,   -1,   -1,
      -1, 2408,   -1, 2409,   -1,   -1,   -1,   -1,
    2410,   -1,   -1, 2411,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2412,   -1,   -1,
      -1,   -1,   -1,   -1, 2413,   -1,   -1, 2414,
      -1,   -1,   -1, 2415,   -1, 2416,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2417,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2418,   -1,   -1,   -1,
      -1, 2419, 2420, 2421,   -1,   -1,   -1, 2422,
      -1, 2423,   -1, 2424,   -1,   -1, 2425, 2426,
    2427,   -1,   -1, 2428,   -1, 2429,   -1,   -1,
      -1, 2430, 2431, 2432,   -1,   -1, 2433, 2434,
      -1,   -1,   -1, 2435,   -1,   -1,   -1,   -1,
      -1, 2436,   -1,   -1, 2437, 2438,   -1,   -1,
      -1, 2439, 2440, 2441,   -1,   -1, 2442, 2443,
    2444, 2445,   -1, 2446,   -1, 2447,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2448, 2449, 2450,
      -1,   -1,   -1,   -1, 2451,   -1,   -1,   -1,
      -1,   -1, 2452,   -1,   -1,   -1, 2453, 2454,
      -1,   -1, 2455, 2456,   -1,   -1, 2457,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2458,   -1,   -1,   -1,   -1, 2459, 2460, 2461,
      -1,   -1, 2462,   -1,   -1,   -1, 2463, 2464,
      -1, 2465,   -1,   -1,   -1,   -1,   -1,   -1,
    2466, 2467,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2468,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2469,   -1,   -1,   -1,   -1, 2470,
      -1,   -1, 2471,   -1,   -1,   -1,   -1, 2472,
      -1,   -1,   -1,   -1,   -1,   -1, 2473,   -1,
      -1,   -1, 2474,   -1, 2475,   -1, 2476,   -1,
    2477,   -1,   -1,   -1, 2478, 2479,   -1,   -1,
      -1, 2480,   -1,   -1,   -1, 2481,   -1,   -1,
      -1,   -1,   -1,   -1, 2482,   -1,   -1,   -1,
      -1, 2483,   -1,   -1,   -1,   -1, 2484,   -1,
      -1,   -1,   -1, 2485,   -1, 2486,   -1, 2487,
      -1,   -1, 2488,   -1,   -1,   -1,   -1,   -1,
      -1, 2489,   -1,   -1, 2490,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2491,   -1, 2492,
    2493,   -1,   -1,   -1,   -1,   -1,   -1, 2494,
      -1,   -1,   -1, 2495,   -1,   -1,   -1,   -1,
      -1,   -1, 2496,   -1,   -1, 2497,   -1,   -1,
      -1,   -1,   -1, 2498,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2499,   -1,   -1, 2500,   -1,
    2501, 2502,   -1,   -1,   -1, 2503, 2504,   -1,
    2505, 2506, 2507,   -1,   -1,   -1,   -1,   -1,
    2508,   -1,   -1,   -1,   -1, 2509,   -1, 2510,
    2511, 2512, 2513,   -1,   -1,   -1,   -1, 2514,
      -1, 2515,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2516,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2517, 2518,   -1,   -1,   -1,   -1,
    2519,   -1,   -1, 2520,   -1,   -1,   -1, 2521,
      -1, 2522,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2523,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2524,   -1,   -1, 2525,   -1,   -1,   -1,   -1,
    2526,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2527,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2528,   -1,   -1,   -1, 2529,   -1,
      -1, 2530,   -1, 2531,   -1,   -1,   -1,   -1,
    2532,   -1,   -1,   -1, 2533,   -1,   -1,   -1,
    2534,   -1,   -1,   -1,   -1, 2535,   -1,   -1,
      -1, 2536,   -1,   -1,   -1,   -1,   -1, 2537,
      -1, 2538,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2539,   -1, 2540, 2541,   -1, 2542,   -1,   -1,
      -1,   -1, 2543,   -1,   -1,   -1,   -1,   -1,
    2544,   -1, 2545,   -1,   -1,   -1, 2546,   -1,
      -1,   -1,   -1,   -1, 2547, 2548,   -1,   -1,
    2549, 2550,   -1,   -1,   -1, 2551,   -1,   -1,
      -1,   -1, 2552, 2553,   -1,   -1, 2554,   -1,
    2555,   -1,   -1,   -1, 2556, 2557,   -1,   -1,
      -1,   -1, 2558,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2559,   -1, 2560,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2561,   -1, 2562,   -1,   -1,   -1, 2563,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2564,   -1, 2565, 2566, 2567,   -1,   -1, 2568,
      -1, 2569,   -1,   -1, 2570,   -1,   -1,   -1,
    2571,   -1,   -1,   -1,   -1,   -1,   -1, 2572,
    2573,   -1,   -1,   -1,   -1, 2574,   -1,   -1,
    2575,   -1,   -1,   -1,   -1,   -1,   -1, 2576,
      -1,   -1,   -1, 2577, 2578,   -1, 2579, 2580,
    2581, 2582,   -1,   -1,   -1,   -1,   -1,   -1,
    2583,   -1,   -1,   -1,   -1, 2584,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2585,   -1,   -1,
    2586, 2587,   -1,   -1,   -1, 2588,   -1,   -1,
      -1,   -1,   -1,   -1, 2589,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2590, 2591,
      -1,   -1,   -1, 2592,   -1,   -1, 2593,   -1,
      -1,   -1,   -1,   -1, 2594,   -1,   -1,   -1,
      -1, 2595, 2596,   -1,   -1, 2597,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2598,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2599,   -1,   -1,   -1, 2600,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2601,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2602,   -1, 2603,   -1,   -1,   -1,
      -1, 2604,   -1, 2605,   -1,   -1, 2606,   -1,
      -1,   -1,   -1,   -1,   -1, 2607,   -1, 2608,
    2609,   -1, 2610,   -1,   -1, 2611,   -1,   -1,
      -1,   -1,   -1,   -1, 2612, 2613,   -1,   -1,
      -1,   -1,   -1, 2614, 2615,   -1, 2616,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2617,   -1,   -1,   -1,   -1,
    2618,   -1,   -1, 2619, 2620,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2621,
      -1,   -1,   -1, 2622,   -1,   -1,   -1,   -1,
      -1, 2623,   -1,   -1,   -1, 2624, 2625,   -1,
      -1,   -1,   -1, 2626,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2627,
      -1,   -1,   -1, 2628,   -1,   -1,   -1,   -1,
      -1, 2629,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2630,   -1,   -1, 2631,   -1,   -1,
      -1,   -1, 2632,   -1, 2633,   -1,   -1,   -1,
      -1,   -1, 2634,   -1,   -1,   -1,   -1,   -1,
    2635,   -1,   -1,   -1, 2636,   -1,   -1,   -1,
      -1, 2637,   -1,   -1,   -1,   -1,   -1, 2638,
      -1,   -1,   -1,   -1, 2639,   -1,   -1, 2640,
      -1,   -1, 2641,   -1,   -1,   -1,   -1, 2642,
      -1,   -1, 2643,   -1, 2644,   -1,   -1,   -1,
      -1, 2645,   -1,   -1,   -1,   -1, 2646,   -1,
      -1, 2647,   -1, 2648,   -1, 2649, 2650,   -1,
    2651,   -1,   -1, 2652,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2653,   -1,   -1,
      -1, 2654,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2655, 2656,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2657,
    2658, 2659,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2660, 2661,   -1,   -1,   -1,   -1,   -1,
    2662,   -1,   -1, 2663,   -1,   -1,   -1,   -1,
      -1, 2664,   -1,   -1,   -1,   -1, 2665,   -1,
      -1, 2666,   -1,   -1,   -1,   -1,   -1, 2667,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2668,   -1,   -1,   -1,   -1,   -1,
      -1, 2669,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2670,   -1, 2671,   -1, 2672,   -1,   -1,
    2673,   -1,   -1,   -1, 2674,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2675,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2676,
      -1,   -1,   -1, 2677, 2678, 2679,   -1,   -1,
    2680, 2681,   -1, 2682,   -1,   -1,   -1,   -1,
      -1, 2683,   -1,   -1, 2684,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2685,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2686,   -1,
    2687,   -1,   -1,   -1,   -1,   -1, 2688,   -1,
      -1,   -1, 2689,   -1, 2690,   -1,   -1,   -1,
    2691,   -1, 2692,   -1,   -1,   -1,   -1, 2693,
    2694,   -1,   -1, 2695,   -1, 2696, 2697,   -1,
      -1, 2698,   -1, 2699, 2700,   -1, 2701, 2702,
      -1,   -1,   -1,   -1,   -1,   -1, 2703,   -1,
    2704, 2705,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2706,   -1,   -1,   -1,   -1, 2707, 2708,
    2709,   -1,   -1, 2710, 2711,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2712,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2713,   -1,   -1,   -1,
      -1, 2714,   -1,   -1,   -1,   -1, 2715,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2716, 2717,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2718,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2719,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2720,   -1,   -1,   -1,   -1, 2721,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2722,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2723, 2724, 2725,   -1,   -1,   -1, 2726,
      -1,   -1,   -1,   -1, 2727,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2728,   -1,   -1,
      -1,   -1, 2729,   -1,   -1, 2730,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2731,   -1,   -1,
      -1,   -1,   -1, 2732,   -1,   -1, 2733, 2734,
      -1, 2735,   -1,   -1, 2736,   -1,   -1,   -1,
      -1,   -1, 2737,   -1,   -1,   -1,   -1, 2738,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2739,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2740, 2741,   -1,   -1,   -1, 2742, 2743, 2744,
      -1,   -1,   -1, 2745,   -1,   -1,   -1,   -1,
      -1, 2746,   -1,   -1,   -1, 2747,   -1,   -1,
      -1,   -1, 2748,   -1,   -1,   -1, 2749,   -1,
      -1, 2750,   -1,   -1,   -1,   -1,   -1,   -1,
    2751,   -1,   -1, 2752,   -1, 2753,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2754,
    2755,   -1,   -1,   -1,   -1, 2756, 2757,   -1,
      -1,   -1, 2758,   -1,   -1,   -1, 2759,   -1,
      -1,   -1,   -1,   -1, 2760,   -1,   -1,   -1,
      -1,   -1,   -1, 2761,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2762,
      -1,   -1,   -1,   -1,   -1, 2763,   -1,   -1,
      -1,   -1,   -1,   -1, 2764,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2765,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2766, 2767,
      -1,   -1,   -1,   -1,   -1, 2768,   -1,   -1,
    2769,   -1,   -1, 2770,   -1,   -1,   -1,   -1,
    2771,   -1,   -1,   -1,   -1, 2772,   -1,   -1,
      -1,   -1,   -1,   -1, 2773,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2774,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2775,   -1, 2776,
      -1,   -1, 2777, 2778,   -1,   -1,   -1,   -1,
    2779,   -1,   -1,   -1, 2780,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2781,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2782,   -1,
      -1,   -1,   -1, 2783,   -1, 2784,   -1,   -1,
    2785,   -1, 2786,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2787,   -1,   -1,   -1,   -1,   -1,
      -1, 2788,   -1, 2789, 2790,   -1, 2791,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2792,   -1, 2793,   -1,   -1,   -1,   -1,   -1,
    2794,   -1, 2795, 2796, 2797,   -1,   -1, 2798,
      -1,   -1,   -1,   -1,   -1, 2799,   -1,   -1,
      -1,   -1,   -1, 2800, 2801,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2802,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2803,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2804,   -1,   -1,   -1,   -1, 2805,
      -1,   -1,   -1,   -1, 2806,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2807,   -1,
    2808,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2809,   -1,   -1,   -1,   -1,   -1, 2810,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2811,   -1,   -1,   -1, 2812,   -1,   -1,
      -1,   -1,   -1, 2813,   -1,   -1, 2814,   -1,
    2815,   -1,   -1, 2816,   -1, 2817,   -1,   -1,
    2818,   -1, 2819,   -1,   -1,   -1, 2820,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2821,   -1, 2822,   -1,   -1, 2823,   -1,   -1,
    2824,   -1,   -1,   -1,   -1, 2825,   -1,   -1,
    2826,   -1, 2827, 2828, 2829,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2830, 2831,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2832, 2833,   -1,   -1,   -1,   -1, 2834,   -1,
      -1,   -1, 2835,   -1,   -1,   -1, 2836,   -1,
      -1,   -1,   -1,   -1, 2837,   -1,   -1,   -1,
    2838,   -1, 2839,   -1,   -1,   -1,   -1, 2840,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2841,   -1,   -1, 2842,   -1, 2843,   -1, 2844,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2845,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2846, 2847,
      -1,   -1,   -1,   -1,   -1,   -1, 2848,   -1,
      -1, 2849,   -1,   -1,   -1,   -1, 2850,   -1,
    2851,   -1,   -1,   -1,   -1, 2852,   -1,   -1,
      -1,   -1, 2853,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2854,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2855,   -1,   -1,   -1,   -1, 2856,   -1,
      -1,   -1,   -1, 2857,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2858, 2859,   -1,   -1,   -1,   -1, 2860,   -1,
      -1,   -1,   -1,   -1,   -1, 2861,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2862, 2863,   -1, 2864,   -1,   -1, 2865,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2866,   -1,   -1,   -1,   -1,   -1,
    2867,   -1,   -1,   -1,   -1,   -1, 2868,   -1,
      -1,   -1, 2869,   -1,   -1,   -1,   -1,   -1,
      -1, 2870,   -1, 2871,   -1, 2872,   -1,   -1,
      -1,   -1,   -1, 2873,   -1,   -1,   -1,   -1,
      -1,   -1, 2874,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2875, 2876,   -1,   -1,
    2877,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2878,   -1, 2879,   -1, 2880,   -1,   -1,   -1,
    2881,   -1,   -1, 2882,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2883,   -1, 2884,   -1,   -1,   -1,   -1,
      -1,   -1, 2885,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2886,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2887,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2888,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2889,   -1,
      -1,   -1,   -1, 2890,   -1,   -1,   -1,   -1,
    2891,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2892,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2893,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2894,   -1, 2895, 2896,   -1, 2897,   -1,
      -1, 2898,   -1,   -1,   -1, 2899,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2900,   -1,   -1,
      -1,   -1,   -1, 2901,   -1,   -1,   -1,   -1,
    2902,   -1,   -1,   -1,   -1,   -1,   -1, 2903,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2904,   -1,
      -1,   -1,   -1, 2905, 2906,   -1,   -1,   -1,
    2907,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2908,   -1,   -1,   -1,   -1, 2909,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2910,   -1,   -1,   -1,
    2911, 2912,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2913,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2914,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2915, 2916,   -1,   -1,   -1,
      -1, 2917,   -1,   -1,   -1,   -1, 2918,   -1,
      -1,   -1, 2919,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2920,   -1, 2921,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2922, 2923,   -1,   -1, 2924,
      -1, 2925,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2926,   -1,   -1,   -1,   -1,   -1,   -1,
    2927,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2928,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2929,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2930,   -1,   -1,   -1,
      -1,   -1, 2931,   -1,   -1,   -1, 2932,   -1,
      -1, 2933,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2934, 2935,   -1,
      -1,   -1, 2936,   -1,   -1, 2937, 2938,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2939,
      -1,   -1, 2940,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2941,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2942, 2943, 2944,   -1,   -1,
      -1, 2945,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2946,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2947,
    2948,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2949,   -1,
      -1,   -1,   -1, 2950, 2951,   -1,   -1, 2952,
      -1,   -1,   -1,   -1, 2953,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2954,   -1,
      -1,   -1, 2955,   -1,   -1, 2956,   -1,   -1,
      -1,   -1,   -1, 2957,   -1,   -1, 2958,   -1,
      -1,   -1, 2959,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2960,
      -1,   -1,   -1,   -1, 2961,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2962,   -1,   -1, 2963,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2964,   -1, 2965,   -1,
      -1,   -1, 2966,   -1,   -1,   -1,   -1,   -1,
    2967,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2968,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2969,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2970,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2971,   -1,   -1, 2972,   -1,
      -1,   -1, 2973,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2974,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2975,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2976, 2977,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2978, 2979,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2980, 2981,   -1, 2982,   -1, 2983,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2984,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2985,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2986,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2987,   -1,   -1,   -1, 2988, 2989,
      -1,   -1, 2990,   -1,   -1, 2991,   -1,   -1,
      -1,   -1,   -1,   -1, 2992,   -1, 2993, 2994,
      -1,   -1,   -1, 2995,   -1,   -1,   -1,   -1,
      -1, 2996,   -1,   -1,   -1, 2997,   -1,   -1,
      -1,   -1,   -1,   -1, 2998,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2999,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3000,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3001,   -1,   -1,   -1,   -1,
    3002,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3003,   -1,   -1,   -1,   -1, 3004,   -1,   -1,
    3005,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3006,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3007,   -1,   -1,   -1,   -1, 3008,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3009,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3010,   -1,   -1,   -1,   -1, 3011,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3012,
      -1,   -1,   -1,   -1, 3013,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3014,   -1,   -1,   -1,   -1,
      -1, 3015,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3016,   -1,   -1,
    3017,   -1,   -1,   -1,   -1, 3018,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3019,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3020,   -1, 3021,   -1,   -1,
    3022,   -1,   -1,   -1, 3023,   -1,   -1,   -1,
      -1,   -1,   -1, 3024,   -1,   -1, 3025,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3026,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3027,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3028,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3029,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3030,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3031,
      -1, 3032,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3033,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3034,   -1,   -1,   -1,   -1, 3035,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3036,
      -1,   -1,   -1,   -1,   -1, 3037,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3038,   -1,   -1,   -1,   -1,
      -1, 3039,   -1,   -1,   -1, 3040,   -1,   -1,
      -1, 3041,   -1,   -1,   -1, 3042,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3043,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3044,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3045,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3046,   -1,   -1, 3047,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3048,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3049,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3050,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3051,   -1, 3052,   -1,
      -1, 3053,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3054,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3055,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3056,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3057,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3058,   -1, 3059,
      -1,   -1, 3060,   -1,   -1,   -1,   -1,   -1,
      -1, 3061,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3062,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3063,   -1,   -1,   -1,   -1, 3064,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3065,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3066,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3067,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3068,
      -1, 3069,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3070,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3071,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3072,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3073,   -1,   -1,   -1,   -1,
    3074,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3075,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3076,   -1, 3077,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3078,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3079,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3080,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3081,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3082,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3083,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3084,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3085,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3086,   -1,   -1,   -1,   -1, 3087,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3088,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3089,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3090,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3091,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3092,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3093,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3094,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3095,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3096,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3097,   -1,   -1,   -1,   -1,
    3098,   -1,   -1,   -1,   -1, 3099,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3100,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3101,   -1,   -1, 3102,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3103,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3104,   -1,
      -1,   -1,   -1, 3105,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3106,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3107,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3108,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3109,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3110,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3111,   -1, 3112,
      -1,   -1,   -1,   -1, 3113,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3114,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3115,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3116,   -1,
      -1, 3117,   -1, 3118,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3119,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3120,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3121,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3122,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3123,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3124,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3125,   -1,   -1,   -1,   -1,
    3126,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3127,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3128,   -1, 3129,   -1,   -1,   -1,   -1, 3130,
      -1,   -1, 3131,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3132,   -1,   -1,   -1,   -1, 3133,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3134,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3135,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3136,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3137,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3138,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3139,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3140,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3141,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3142,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3143,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3144,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3145,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3146,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3147,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3148,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3149,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3150,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 3151,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 3152,   -1, 3153,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3154,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3155,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    3156,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 3157,   -1,
      -1, 3158,   -1,   -1,   -1,   -1,   -1,   -1,
    3159,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 3160,   -1,   -1,   -1,   -1, 3161,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3162,   -1,   -1, 3163,   -1,
    3164,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3165,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3166,
      -1,   -1,   -1,   -1, 3167,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 3168,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 3169,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 3170,   -1,   -1,   -1,
      -1, 3171
  };

const struct KeyValue *
Perfect_Hash::in_word_set (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].key;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
