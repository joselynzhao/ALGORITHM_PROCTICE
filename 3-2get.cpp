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
    // y-年，m-月,d-日，n-第几天
    int y, m, d, n;

    // 请在此添加代码，输入年月日，计算并输出这天是第几天
    cin>>y>>m>>d;
    /********** Begin *********/
    n = 0;
    if(isrealyesr(y)){//是闰年
    	if(m==1){
    		n+=d;
    	}
    	else {
    		n+=d;
    		switch(m-1){
    			case 11:
    				n+=30;
    			case 10:
    				n+=31;
    			case 9:
    				n+=30;
    			case 8:
    				n+=31;
    			case 7:
    				n+=31;
    			case 6:
    				n+=30;
    			case 5:
    				n+=31;
    			case 4:
    				n+=30;
    			case 3:
    				n+=31;
    			case 2:
    				n+=29;
    			case 1:
    				n+=31;
    				break;
    		}
    	}
    }
    else{ //是平年
    	if(m==1){
    		n+=d;
    	}
    	else {
    		n+=d;
    		switch(m-1){
    			case 11:
    				n+=30;
    			case 10:
    				n+=31;
    			case 9:
    				n+=30;
    			case 8:
    				n+=31;
    			case 7:
    				n+=31;
    			case 6:
    				n+=30;
    			case 5:
    				n+=31;
    			case 4:
    				n+=30;
    			case 3:
    				n+=31;
    			case 2:
    				n+=28;
    			case 1:
    				n+=31;
    				break;
    		}
    	}
    }

    /********** End **********/

    printf("%d-%d-%d是第%d天\n",y,m,d,n);
    return 0;
}