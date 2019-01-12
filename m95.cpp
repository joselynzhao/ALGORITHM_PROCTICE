// #include <iostream>
// #include <ctime>
 
// using namespace std;
 
// int main( )
// {
//    // 基于当前系统的当前日期/时间
//    time_t now = time(0);
   
//    // 把 now 转换为字符串形式
//    char* dt = ctime(&now);
 
//    cout << "本地日期和时间：" << dt << endl;
 
//    // 把 now 转换为 tm 结构
//    tm *gmtm = gmtime(&now);
//    dt = asctime(gmtm);
//    cout << "UTC 日期和时间："<< dt << endl;
// }

#include <iostream>
#include <ctime>
 
using namespace std;
 
int main( )
{
   // 基于当前系统的当前日期/时间
   time_t now = time(0);
 
   cout << "Number of sec since January 1,1970:" << now << endl;
 
   tm *ltm = localtime(&now);
 
   // 输出 tm 结构的各个组成部分
   cout << "Year: "<< 1900 + ltm->tm_year << endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
}