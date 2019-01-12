
// 指针

// #include <iostream>
 
// using namespace std;
 
// int main ()
// {
//    int  var1;
//    char var2[10];
 
//    cout << "var1 变量的地址： ";
//    cout << &var1 << endl;
 
//    cout << "var2 变量的地址： ";
//    cout << &var2 << endl;
 
//    return 0;
// }

// #include <iostream>
 
// using namespace std;
 
// int main ()
// {
//    int  var = 20;   // 实际变量的声明
//    int  *ip;        // 指针变量的声明
 
//    ip = &var;       // 在指针变量中存储 var 的地址
 
//    cout << "Value of var variable: ";
//    cout << var << endl;
 
//    // 输出在指针变量中存储的地址
//    cout << "Address stored in ip variable: ";
//    cout << ip << endl;
 
//    // 访问指针中地址的值
//    cout << "Value of *ip variable: ";
//    cout << *ip << endl;
 
//    return 0;
// }

// #include <iostream>

// using namespace std;
// const int MAX = 3;

// int main ()
// {
//    int  var[MAX] = {10, 100, 200};
//    int  *ptr;

//    // 指针中的数组地址
//    ptr = var;
//    for (int i = 0; i < MAX; i++)
//    {
//       cout << "Address of var[" << i << "] = ";
//       cout << ptr << endl;

//       cout << "Value of var[" << i << "] = ";
//       cout << *ptr << endl;

//       // 移动到下一个位置
//       ptr++;
//    }
//    return 0;
// }

// #include <iostream>

// using namespace std;
// const int MAX = 3;

// int main ()
// {
//    int  var[MAX] = {10, 100, 200};
//    int  *ptr;

//    // 指针中最后一个元素的地址
//    ptr = &var[MAX-1];
//    for (int i = MAX; i > 0; i--)
//    {
//       cout << "Address of var[" << i << "] = ";
//       cout << ptr << endl;

//       cout << "Value of var[" << i << "] = ";
//       cout << *ptr << endl;

//       // 移动到下一个位置
//       ptr--;
//    }
//    return 0;
// }


// #include <iostream>

// using namespace std;
// const int MAX = 3;

// int main ()
// {
//    int  var[MAX] = {10, 100, 200};
//    int  *ptr;

//    // 指针中第一个元素的地址
//    ptr = var;
//    int i = 0;
//    while ( ptr <= &var[MAX - 1] )
//    {
//       cout << "Address of var[" << i << "] = ";
//       cout << ptr << endl;

//       cout << "Value of var[" << i << "] = ";
//       cout << *ptr << endl;

//       // 指向上一个位置
//       ptr++;
//       i++;
//    }
//    return 0;
// }


// #include <iostream>
 
// using namespace std;
// const int MAX = 3;
 
// int main ()
// {
//    int  var[MAX] = {10, 100, 200};
//    int  *ptr;
 
//    // 指针中的数组地址
//    ptr = var;
//    for (int i = 0; i < MAX; i++)
//    {
//       cout << "var[" << i << "]的内存地址为 ";
//       cout << ptr << endl;
 
//       cout << "var[" << i << "] 的值为 ";
//       cout << *ptr << endl;
 
//       // 移动到下一个位置
//       ptr++;
//    }
//    return 0;
// }

// #include <iostream>
 
// using namespace std;
// const int MAX = 3;
 
// int main ()
// {
//    int  var[MAX] = {10, 100, 200};
 
//    for (int i = 0; i < MAX; i++)
//    {
//       *var = i;    // 这是正确的语法
//       var++;       // 这是不正确的
//    }
//    return 0;
// }

// #include <iostream>
// #include <ctime>
 
// using namespace std;
// void getSeconds(unsigned long *par);

// int main ()
// {
//    unsigned long sec;


//    getSeconds( &sec );

//    // 输出实际值
//    cout << "Number of seconds :" << sec << endl;

//    return 0;
// }

// void getSeconds(unsigned long *par)
// {
//    // 获取当前的秒数
//    *par = time( NULL );
//    return;
// }

#include <iostream>
using namespace std;
 
// 函数声明
double getAverage(int *arr, int size);
 
int main ()
{
   // 带有 5 个元素的整型数组
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   // 传递一个指向数组的指针作为参数
   avg = getAverage( balance, 5 ) ;
 
   // 输出返回值
   cout << "Average value is: " << avg << endl; 
    
   return 0;
}

double getAverage(int *arr, int size)
{
  int    i, sum = 0;       
  double avg;          
 
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
   }
 
  avg = double(sum) / size;
 
  return avg;
}