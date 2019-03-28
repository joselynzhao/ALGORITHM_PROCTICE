#include <iostream>
using namespace std;

// 函数rotateLeft：矩阵循环左移
// 参数：a-100*100的二维数组，用来存储n行n列的数组（<n<100)，存储在其~n-1行和~n-1列，
// m-循环左移的位数(0<m<n)
// 返回值：无，循环左移的结果写入原二维数组中
// 说明：传递多维数组时，形式参数中，除了第一维外，其它维的大小必须给出
// 方便编译器计算每个数组元素的地址
void rotateLeft(int a[][100],int n,int m);

int main()
{
    // 定义存储二维数组的空间
    int a[100][100];
    int n, m;

    // 输入n和m
    cin >> n >> m;

    // 输入n*n的矩阵，存储在数组a的~n-1行和~n-1列
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];

    // 循环左移
    // 说明：传递多维数组时，实在参数只需要给出数组名就可以了
    rotateLeft(a,n,m);

    // 输出循环右移的结果
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << " " << a[i][j];
        cout << endl;
    }

    return 0;
}

void rotateLeft(int a[][100],int n,int m)
{
    // 请在此添加代码，实现函数rotateLeft
    /********** Begin *********/
    int temp[100][100];
    for(int i=0;i<n;i++){
        for(int j= 0;j<n;j++){
            temp[j][(i+n-m)%n] = a[j][i];
        }
    }
    // a = temp;  在返回函数的时候消失了
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = temp[i][j];
        }
    }

    /********** End **********/
}