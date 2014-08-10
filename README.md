繁体字转简体字的完美hash硬编码方法  
====

完美hash
----
完美hash详细介绍见[gperf](http://www.gnu.org/software/gperf/manual/gperf.html "gperf")

gperf -CGD -K key -L C++ -t zh_convert.gperf > zh_convert.hpp


实现方式通过gperf 对字典文件，编码为C++头文件


