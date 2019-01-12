#include<iostream>
#include<stdlib.h>
using namespace std;
// 位运算的高级应用——二进制中1的个数

// methond1：
// 不断清楚最右侧1
int one_count2(unsigned int n){
	int c = 0;
	while(n){
		n&=(n-1);   //清楚最低位的1
		c++;
	}
	return c;
}
//method2:采用右移方式的计数
int one_count1(unsigned int n){
	int c = 0;
	while(n){
		c+=n&1;// 如果当前为是1，则计算器加1
		n>>=1; //右移一位
	}
	return c;
}

//method3:并行规约 
int one_count3(unsigned int n){  //时间代价不变
	n = (n & 0x55555555)+((n>>1) & 0x55555555);
	n = (n & 0x33333333)+((n>>2) & 0x33333333);
	n = (n & 0x0f0f0f0f)+((n>>4) & 0x0f0f0f0f);
	n = (n & 0x00ff00ff)+((n>>8) & 0x00ff00ff);
	n = (n & 0x0000ffff)+((n>>16) & 0x0000ffff);
	return n;
}

// method4:编译器内置命令
// int one_count4(unsigned int n){
// 	return __builtin__popcnt(n); //gcc has __builtin_popcount
// }
//无法通过g++的编译


int main(){
	cout<<one_count1(3)<<endl;
	cout<<one_count2(3)<<endl;
	cout<<one_count3(3)<<endl;
	//cout<<one_count4(3)<<endl;

    
    return 0;
}