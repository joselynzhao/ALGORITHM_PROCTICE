// #include <iostream>
// #include <cstring>
 
// using namespace std;
 
// int main ()
// {
//    char str1[11] = "Hello";
//    char str2[11] = "World";
//    char str3[11];
//    int  len ;
 
//    // 复制 str1 到 str3
//    strcpy( str3, str1);
//    cout << "strcpy( str3, str1) : " << str3 << endl;
 
//    // 连接 str1 和 str2
//    strcat( str1, str2);
//    cout << "strcat( str1, str2): " << str1 << endl;
 
//    // 连接后，str1 的总长度
//    len = strlen(str1);
//    cout << "strlen(str1) : " << len << endl;
 
//    return 0;
// }

#include <iostream>
#include <string>
 
using namespace std;
 
int main ()
{
   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;
 
   // 复制 str1 到 str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;
 
   // 连接 str1 和 str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;
 
   // 连接后，str3 的总长度
   len = str3.size();
   cout << "str3.size() :  " << len << endl;
 
   return 0;
}