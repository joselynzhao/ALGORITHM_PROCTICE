#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // 定义变量及数组，n-销售额个数，a-销售额
    int n, a[30], i;

    // 输入销售额数量，n <= 30
    cin >> n;

    // 输入n个销售额，分别存入a[0]到a[n-1]
    for(i = 0; i < n; i++)
        cin >> a[i];

    // 请在此添加代码，计算并输出销售额的波动情况
    /********** Begin *********/
    int out[30];
    for(int i = 1;i<n;i++){
        out[i-1] = a[i]-a[i-1];
    }
    for(int i = 0;i<n-1;i++){
        cout<<out[i];
        if(i!=n-2){
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }



    /********** End **********/

    return 0;
}