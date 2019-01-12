//AC

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	char a[11];
	scanf("%s",a);
	//cout<<"hello"<<endl;
	int num[]={0,0,1,1,2,2,3,3,4,4,5};
	int sum_n=0;
	for(int i=0;a[i]!='\0';){
		int temp_n=1;
		int j=i+1;
		for(;a[j]!='\0';j++){
			if(a[j]==a[i]){
				temp_n++;
			}
			else break;
		}
		//cout<<a[i]<<" "<<temp_n<<endl;

		sum_n=num[temp_n]+sum_n;
		//cout<<sum_n<<endl;
		i=j;
	}
	cout<<sum_n<<endl;
    
    return 0;
}


// 牛牛喜欢彩色的东西,尤其是彩色的瓷砖。牛牛的房间内铺有L块正方形瓷砖。每块砖的颜色有四种可能:红、绿、蓝、黄。给定一个字符串S, 如果S的第i个字符是'R', 'G', 'B'或'Y',那么第i块瓷砖的颜色就分别是红、绿、蓝或者黄。
// 牛牛决定换掉一些瓷砖的颜色,使得相邻两块瓷砖的颜色均不相同。请帮牛牛计算他最少需要换掉的瓷砖数量。 
// 输入描述:
// 输入包括一行,一个字符串S,字符串长度length(1 ≤ length ≤ 10),字符串中每个字符串都是'R', 'G', 'B'或者'Y'。


// 输出描述:
// 输出一个整数,表示牛牛最少需要换掉的瓷砖数量

// 输入例子1:
// RRRRRR

// 输出例子1:
// 3