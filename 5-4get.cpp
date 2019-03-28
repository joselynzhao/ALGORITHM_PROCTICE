#include <iostream>
using namespace std;

// 函数silly：计算数值有多二
// 参数：a-存储数值的字符数组，以'\0'结束，所以不需要另一个参数告诉函数数组有多长
// 返回值：数值犯二的程度
double silly(char a[]);

int main()
{
    // 定义存储数值的数组
    char s[102];

    // 输入不超过位的整数
    cin >> s;

    // 计算犯二的程度
    double sy = silly(s);

    // 输出犯二的程度
    cout << sy << endl;

    return 0;
}

double silly(char a[])
{
    // 请在此添加代码，实现函数silly
    /********** Begin *********/
    //先判断是否为正
    int up;
    int start;
    if(a[0]=='-'){
        up=0;
        start=1;
    }
    else{
        up = 1;
        start=0;
    }
    // cout<<"up:"<<up<<endl;
    double count_2 =0;
    double count =0;
    for(int i=start;a[i]!='\0';i++){
        count++;
        if(a[i]=='2')count_2++;
    }
    double result=count_2/count;
    // cout<<"count_2:"<<count_2<<endl;
    // cout<<"count:"<<count<<endl;
   
    if(int(a[int(count)])%2==0){
        result = result*2;
         // cout<<"result:"<<result<<endl;
    }
    if(!up) result=result*1.5;
        // cout<<"result:"<<result<<endl;

    return result;



    /********** End **********/
}