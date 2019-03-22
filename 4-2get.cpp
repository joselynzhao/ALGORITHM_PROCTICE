#include <iostream>
using namespace std;

void whatTime(int secs, int &h, int &m, int &s)
{
    // 请在这里补充代码，设计并实现函数whatTime,使main函数中的函数调用正确
    /********** Begin *********/
    //1m= 60s， 1h = 60m = 3600s
    h = secs/3600;
    m = (secs%3600)/60;
    s = secs%60;


    /********** End **********/
}

int main()
{
    // secs秒表上的秒数
    int secs;

    // 当前时间:h-小时，m-分，s-秒
    int h, m, s;

    // 输入秒表上的秒数
    cin >> secs;

    // 计算当前时间
    whatTime(secs,h,m,s);

    // 输出当前时间
    cout << h << ":" << m << ":" << s << endl;

    return 0;
}