#include <iostream>
using namespace std;

// 函数maxIncrease：计算销售额增幅
// 参数：s-销售额数组，n-销售额数组长度，n>1
// 返回值：销售额最大增幅
int maxIncrease(int s[], int n);

int main()
{
    // 定义变量及数组，n-销售额个数，a-销售额数组
    int n, a[30], i;

    // 输入销售额数量，n>1
    cin >> n;

    // 输入n个销售额，分别存入a[0]到a[n-1]
    for(i = 0; i < n; i++)
        cin >> a[i];

    i = maxIncrease(a,n);
    cout << "最大销售增幅为：" << i << endl;

    return 0;
}

int maxIncrease(int s[], int n)
{
    //请在此添加代码，实现函数maxIncrease
    /********** Begin *********/
    int max = -1000;
    for(int i = 1;i<n;i++){ //从第二个数遍历到最后一个数
        for(int j=i-1;j>=0;j--){
            int dec = s[i]-s[j];
            if(dec>max){
                max = dec;
            }
        }
    }
    return max;


    /********** End **********/
}