// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int reMax(int n){
    int a,b,c;
    a = n/100;
    b = (n%100)/10;
    c = n%10;
    // cout<<a<< " "<<b<<" "<<c<<endl;

    //比较三个数的大小
    if(b>a){
    	int t = b;
    	b = a;
    	a = t;
    }
    if(c>b){
    	int t = c;
    	c = b;
    	b = t;
    }
    if(b>a){
    	int t = a;
    	a = b;
    	b = t;
    }
     // cout<<a<< " "<<b<<" "<<c<<endl;
    int m = a*100+b*10+c;
    return m;
}

int reMin(int n){
    int a,b,c;
    a = n/100;
    b = (n%100)/10;
    c = n%10;
    // cout<<a<< " "<<b<<" "<<c<<endl;

    //比较三个数的大小
    if(b>a){
    	int t = b;
    	b = a;
    	a = t;
    }
    if(c>b){
    	int t = c;
    	c = b;
    	b = t;
    }
    if(b>a){
    	int t = a;
    	a = b;
    	b = t;
    }
     // cout<<a<< " "<<b<<" "<<c<<endl;
    int m = c*100+b*10+a;
    return m;
}

int main(){
    int n;
    // 请在此添加代码，输入一个各位数字不全相同的三位整数(也可以是位数或者两位数)，输出进入黑洞过程
    /********** Begin *********/
    cin>>n;
    int count = 1;
    while(n!=495){
    	int max = reMax(n);
    	int min = reMin(n);
    	n = max - min;
    	printf("%d:%d-%d=%d\n",count,max,min,n);
    	count++;
    }


    /********** End **********/

    return 0;
}