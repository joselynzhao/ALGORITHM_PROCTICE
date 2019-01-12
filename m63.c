// #include <stdio.h>

// // 指针数值的使用
 
// const int MAX = 3;
 
// int main ()
// {
//    int  var[] = {10, 100, 200};
//    int i, *ptr[MAX];
 
//    for ( i = 0; i < MAX; i++)
//    {
//       ptr[i] = &var[i]; /* 赋值为整数的地址 */
//    }
//    for ( i = 0; i < MAX; i++)
//    {
//       printf("Value of var[%d] = %d\n", i, *ptr[i] );
//    }
//    return 0;
// }



#include <stdio.h>
 
const int MAX = 4;
 
int main ()
{
   char *names[] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };
   int i = 0;

   for ( i = 0; i < MAX; i++)
   {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   return 0;
}
