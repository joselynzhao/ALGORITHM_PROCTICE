// #include <iostream>
// using namespace std;


// int main(){
// 	cout<<"hello,world"<<endl;
// 	return 0;
// }

// ---------------------------------------------------------

// #include <iostream>
// using namespace std;
 
// int main ()
// {
//    // 局部变量声明
//    char grade = 'D';


//    switch(grade)
//    {
//    case 'A' :
//       cout << "很棒！" << endl; 
//       break;
//    case 'B' :
//    case 'C' :
//       cout << "做得好" << endl;
//       break;
//    case 'D' :
//       cout << "您通过了" << endl;
//       break;
//    case 'F' :
//       cout << "最好再试一下" << endl;
//       break;
//    default :
//       cout << "无效的成绩" << endl;
//    }
//    cout << "您的成绩是 " << grade << endl;
 
//    return 0;
// }

// ---------------------------------------------------------

// #include <iostream>
// #include <cmath>
// using namespace std;
 
// int main ()
// {
//    // 数字定义
//    short  s = 10;
//    int    i = -1000;
//    long   l = 100000;
//    float  f = 230.47;
//    double d = 200.374;
 
//    // 数学运算
//    cout << "sin(d) :" << sin(d) << endl;
//    cout << "abs(i)  :" << abs(i) << endl;
//    cout << "floor(d) :" << floor(d) << endl;
//    cout << "sqrt(f) :" << sqrt(f) << endl;
//    cout << "pow( d, 2) :" << pow(d, 2) << endl;
 
//    return 0;
// }

#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
int main ()
{
   int i,j;
 
   // 设置种子
   srand( (unsigned)time( NULL ) );
 
   /* 生成 10 个随机数 */
   for( i = 0; i < 10; i++ )
   {
      // 生成实际的随机数
      j= rand();
      cout <<"随机数： " << j << endl;
   }
 
   return 0;
}