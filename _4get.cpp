// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int decToBin(int dec){
	int result = 0,temp = dec,j = 1;
	while(temp){
		result = result + j*(temp%2);
		temp = temp/2;
		j = j*10;
	}
	return result;
}


int main()
{
    // c-存储输入的字符
    char c;

    // 输入字符
    cin >> c;

    // 请在此添加代码，输出c的位二进制表示
    /********** Begin *********/
    int d = c-('A'-65);
    
    d = decToBin(d);
    int a[8]={0};
    int dd = d;
    for (int i =0;dd>0 && i<=8;i++){
    	a[i] = dd%10;
    	dd = dd/10;
    }
    for(int i =7 ;i>=0;i--){
    	cout<<a[i];
    }
    // cout<<endl<<d;

    


    /********** End **********/

    return 0;
}