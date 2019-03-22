#include <iostream>
#include <math.h>
using namespace std;

// foldTimes-计算建纸桥的折叠次数
// 参数：dis-星际距离（千米），thick-纸的厚度（毫米）
// 返回值：建桥需要折叠的次数）
int foldTimes(double dis, double thick);

int main()
{
    double dis, thick;
    cin >> dis >> thick;
    cout << "需要折叠" << foldTimes(dis,thick) << "次" << endl;
    return 0;
}

int foldTimes(double dis, double thick)
{
    // 请在这里补充代码，实现函数foldTimes
    /********** Begin *********/
    //单位厚度 为thick ,折叠一次是thick * 2，两次是thick*4，三次是thick *8 n次是think * 2的n次方
    //方程即 thick * sqrt（2，n） >= dis
    // sqrt（2，n） = dis/thick
    // double out = dis/thick;
    // printf("%f\n",out);
    // return  log(dis/thick)/log(2.0);
    dis = dis * 1000;
    thick = thick /1000;
    int count = 0;
    while(thick*pow(2,count)<dis){
    	// cout<<thick*pow(2,count)<<" "<<dis<<endl;
    	count++;
    	// cout<<count<<endl;
    }
    // cout<<thick*pow(2,count)<<" "<<dis<<endl;
    return count;




    /********** End **********/
}