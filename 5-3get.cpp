#include <iostream>
using namespace std;

// 函数king：猴子选大王
// 参数：a-猴子数组n-1个猴子分别占据下标为~n-1的位置，n-数组长度
// 返回值：新猴王的下标序号
int king(int a[], int n);

int main()
{
    // 定义变量及数组，n-猴子数量，a-猴子数组
    int n, a[1000], i;

    // 输入猴子数量，n>0
    cin >> n;

    // 初始化猴子数组,n个猴子分别占据~n的位置
    a[0] = 0; // 0号位置没有猴子
    for(i = 1;i <= n; i++)
        a[i] = i;

    // 选大王啦
    i = king(a, n );
    cout << i << "号猴子是大王。" << endl;

    return 0;
}

int king(int a[], int n)
{
    // 请在此添加代码，实现函数king
    /********** Begin *********/
    int die_n = 0;
    int order = 0;
    int count = 0;
    while(die_n<n-1){ //要死掉n-1只猴子
        do{
            order++;
            if(order==n+1)order=1;
        }while(a[order]==0);
        count++;
        if(count==3){
            count=0;
            a[order]=0;
            die_n++;//死了一只猴子
            // for(int i=1;i<=n;i++){
            //   cout<<a[i]<<" ";
            // }
            // cout<<endl<<die_n<<"只猴子死了"<<endl;
        }

    }
    // for(int i=0;i<=n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<=n;i++){
        if(a[i]!=0){
            return i;
        }
    }

    /********** End **********/
}