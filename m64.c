// #include <stdio.h>
//  // 函数指针

// int max(int x, int y)
// {
//     return x > y ? x : y;
// }
 
// int main(void)
// {
//     /* p 是函数指针 */
//     int (* p)(int, int) = & max; // &可以省略
//     int a, b, c, d;
 
//     printf("请输入三个数字:");
//     scanf("%d %d %d", & a, & b, & c);
 
//     /* 与直接调用函数等价，d = max(max(a, b), c) */
//     d = p(p(a, b), c); 

//     // p代替函数mac 的名称来使用
 
//     printf("最大的数字是: %d\n", d);
 
//     return 0;
// }

#include <stdlib.h>  
#include <stdio.h>

// 函数指针作为函数参数
 
// 回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}
 
// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}

 
int main(void)
{
    int myarray[10];
    populate_array(myarray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
    return 0;
}