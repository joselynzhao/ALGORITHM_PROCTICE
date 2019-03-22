#include <iostream>
using namespace std;

// 递归函数splitNum：顺序输出n的各位数字，每个数字占一行
// 返回值：无
void splitNum(unsigned int n)
{
    // 请在这里补充代码，实现递归函数splitNum
    /********** Begin *********/
    
    
    if(n>0){
    	splitNum(n/10);
	    int out = n%10;
	    printf("%d\n",out);
    }
    else return;


    /********** End **********/
}

int main()
{
    unsigned n;
    // 输入正整数n
    cin >> n;

    // 调用splitNum函数，顺序输出n的各位数字
    splitNum(n);

    return 0;
}