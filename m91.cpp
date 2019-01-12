// #include <iostream>
// using namespace std;
 
// #include <iomanip>
// using std::setw;
 
// int main ()
// {
//    int n[ 10 ]; // n 是一个包含 10 个整数的数组
 
//    // 初始化数组元素          
//    for ( int i = 0; i < 10; i++ )
//    {
//       n[ i ] = i + 100; // 设置元素 i 为 i + 100
//    }
//    cout << "Element" << setw( 13 ) << "Value" << endl;
 
//    // 输出数组中每个元素的值                     
//    for ( int j = 0; j < 10; j++ )
//    {
//       cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
//    }
 
//    return 0;
// }



// #include <iostream>
// using namespace std;
 
// int main ()
// {
//    // 带有 5 个元素的整型数组
//    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
//    double *p;

//    p = balance;
 
//    // 输出数组中每个元素的值
//    cout << "使用指针的数组值 " << endl; 
//    for ( int i = 0; i < 5; i++ )
//    {
//        cout << "*(p + " << i << ") : ";
//        cout << *(p + i) << endl;
//    }

//    cout << "使用 balance 作为地址的数组值 " << endl;
//    for ( int i = 0; i < 5; i++ )
//    {
//        cout << "*(balance + " << i << ") : ";
//        cout << *(balance + i) << endl;
//    }
 
//    return 0;
// }



#include <stdio.h>

int main ()
{
   /* 带有 5 个元素的整型数组 */
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
   int i;

   p = balance;
 
   /* 输出数组中每个元素的值 */
   printf( "使用指针的数组值\n");
   for ( i = 0; i < 5; i++ )
   {
       printf("*(p + %d) : %f\n",  i, *(p + i) );
   }

   printf( "使用 balance 作为地址的数组值\n");
   for ( i = 0; i < 5; i++ )
   {
       printf("*(balance + %d) : %f\n",  i, *(balance + i) );
   }
 
   return 0;
}