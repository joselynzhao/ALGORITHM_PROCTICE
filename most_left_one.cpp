#include<iostream>
#include<stdlib.h>
using namespace std;
// 位运算-求最左侧1的位置问题
//移位方法
int most_left_one1(int n){
	int pos = -1;
	while(n){
		n=n>>1;  //最左端的1移除之后，n=0
		pos++;
	}
	return pos;
}
//二分法查找
int most_left_one2(int n){
	if(n==0)
		return -1;
	int exp = 4;
	int pos=(1<<exp);
	while(exp>0){
		exp--;
		if(n>>pos)pos+=(1<<exp);
		else pos-=(1<<exp);
	}
	return n>>pos!=0?pos:pos-1;
}

//地址强转，浮点数
int most_left_one3(int n){
	if(n==0)return -1;
	//用float对某些数会产生错误，建议用double
	double b=n;
	return ((*(long long*)&b)>>52&2047)-1023;
}

//编译器内置命令
// int most_left_one4(int n){
// 	return 31-_lzcnt(n); //gcc has __builtin_clz
// }

int main(){
	cout<<most_left_one1(11)<<endl;
	cout<<most_left_one2(11)<<endl;
	cout<<most_left_one3(11)<<endl;
	//cout<<most_left_one4(11);   
    return 0;
}