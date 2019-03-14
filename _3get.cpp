// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // c-存储输入的大写字母,d-存储加密后的大写字母
    char c, d;

    // step-秘钥，往前走的步数，大于等于，小于
    int step;

    // 请在此添加代码，输入明文、秘钥，计算密文存入d中
    /********** Begin *********/ 

    cin>>c>>step;

    d = c+step;
    if(d>'Z'){
        d = 'A'+(d-'Z')-1;
    }





    /********** End **********/

    // 输出密文
    cout << d;
    return 0;
}