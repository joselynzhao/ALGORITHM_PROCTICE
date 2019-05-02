#include <iostream>
using namespace std;

// 函数pswap：交换指针p和q指向的单元中的整数值
// 参数：p,q-int类型指针，指向要交换的整数
void pswap(int * p, int *q);

int main()
{
    int a, b;
    // 输入两个整数
    cin >> a >> b;

    // 调用pswap函数，交换a、b的值
    pswap(&a,&b);

    // 输出a、b的值
    cout << a << " " << b << endl;

    return 0;
}

//函数pswap：交换指针p和q指向的单元中的整数值
//参数：p,q-int类型指针，指向要交换的整数
void pswap(int * p, int *q)
{
    // 请在此添加代码，实现函数pswap
    /********** Begin *********/
    int k = *p;
    *p = *q;
    *q = k;


    /********** End **********/
}