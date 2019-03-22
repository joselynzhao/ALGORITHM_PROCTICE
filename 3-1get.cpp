// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int isrealyesr(int n){
	if(n%400 == 0)
		return 1;
	else if(n%4==0 && n%100!=0){
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
    int year;

    // 请在此添加代码，输入年份，并判断是否是闰年，是则输出"Yes"，否则输出"No"
    /********** Begin *********/
    cin>>year;
    // if(year%400 ==0)
    // 	printf("Yes");
    // else if(year%4==0 && year%100!=0){
    // 	printf("Yes");
    // }
    // else{
    // 	printf("No");
    // }

    if(isrealyesr(year)){
    	cout<<"yes";

    }
    else cout<<"no";

    /********** End **********/

    return 0;
}