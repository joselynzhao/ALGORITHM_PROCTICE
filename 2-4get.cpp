#include <iostream>

// 包含流操作算子库
#include <iomanip>
using namespace std;

// 定义常量PI，后面可以直接用PI代替后面的数值
#define PI 3.14159265358979323846

int main()
{
    int n;
    // 请在此添加你的代码，输入n，按不同的精度输出PI
    /********** Begin *********/
    cin>>n;
    int i=0;
    for(;i<4;i++){//循环5次
    	if(n+i+1==1){
    		cout<<3<<endl;
    		continue;
    	}
    	cout<<setiosflags(ios::showpoint)<<setprecision(n+i+1)<<PI<<endl;
    }
    cout<<setiosflags(ios::showpoint)<<setprecision(n+i+1)<<PI;


    /********** End **********/

    return 0;
}
