// 包含标准输入输出函数库
#include <stdio.h>
#include <iostream>

// 定义main函数
int main()
{
    float up, low;
    // 请在此添加代码，输入身高，计算标准身材的体重上下限
    /********** Begin *********/
    float height;
    float standerd_weight;
    scanf("%f",&height);
    if(height>=100){
        standerd_weight = (height-100)*0.9;
        up = standerd_weight*(1+0.1);
        low = standerd_weight*(1-0.1);
    }
    else{
        printf("the height is error!");
        return 0;
    }
    

    /********** End **********/

    // 输出标准身材的体重上下限
    printf("体重范围为：%.2f -- %.2f\n",low,up);
    return 0;
}