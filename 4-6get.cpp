#include <iostream>
using namespace std;

// 函数funP：实现数学函数P函数
// 返回值：返回P(n,x)的值
double funP(int n, double x)
{
    // 请在这里补充代码，实现递归函数funP
    /********** Begin *********/
    if(n==0)return 1;
    if(n==1)return x;
    return ((2*n-1)*funP(n-1,x)-(n-1)*funP(n-2,x))/n;


    /********** End **********/
}

int main()
{
    int n;
    double x;
    // 输入n、x
    cin >> n >> x;

    // 输出P(n,x)
    cout << "P("<<n<<", "<<x<<")=" << funP(n,x) << endl;

    return 0;
}
