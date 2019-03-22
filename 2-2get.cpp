//包含标准输入输出函数库
#include <stdio.h>

int main()
{
    //声明两个整型变量，用于存储输入的两个整数
    int x,y;
    scanf("%d%d",&x,&y);
    int add,sub,mul,chu;
    add = x+y;
    sub = x-y;
    mul = x*y;
    chu = x/y;
    printf("%5d + %-5d = %10d\n",x,y,add);
    printf("%5d - %-5d = %10d\n",x,y,sub);
    printf("%5d * %-5d = %10d\n",x,y,mul);
    printf("%5d / %-5d = %10d\n",x,y,chu);
  
    //请在此添加你的代码，输入两个整数到x、y中，然后按要求格式输出四则运算式子
    /********** Begin *********/


    /********** End **********/

    return 0;
}
