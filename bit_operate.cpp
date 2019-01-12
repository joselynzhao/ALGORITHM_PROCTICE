#include<iostream>
#include<stdlib.h>
using namespace std;

// 与操作：
	// 指定位清零
	void clr(int& a,int i){
		a&=~(1<<i);
	}
	// 获得指定位的值
	int get(int a,int i){
		return a&(1<<i);
	}
	// 保留某些位不变
	int reserve(int& a){return a&0xFF;}
	//int a = a&0xFF;
	// 判断一个数是否是2的幂
	bool isPow2(int a){
		return (a&(a-1))==0&&a!=0;
	}
	// 奇偶性判断
	bool  isOdd(int a){
		return (a&1) == 1;
	}

// 或操作
	// 设置指定位
	void set(int& a,int i){
		a|=(1<<i);
	}
// 取反操作
	// 相反数
	int opposite(int a){return ~a+1;}
// 异或操作：
	// 交换两个数
	void swap(int& a,int& b){
		a=a^b;
		b=a^b;
		a=a^b;
	}
	// 指定位取反
	void reverse(int& a,int i){a^=(1<<i);}
// 移位操作
	// 2的幂次
	int Pow2(int& a,int i){return a<<i;}
	//int a<<=2;
	// 循环移位
 	void rol(int& a,int k){a=a<<k|a>>(32-k);}

 // 常用函数
 	int average(int& x,int& y){return (x&y)+((x^y)>>1);} //求x和y的平均数
 	int abs(int x){ 
 		int y=x>>31; //取符号位
 		return (x+y)^y;
 	} //求x的绝对值
 	int max(int& x,int& y){return x^((x^y)&((x-y)>>31));} //求x和y中的较大值
 	
// 求n个元素中 的k元素子集有多少个
void print_k_comb(int k,int n){
	int count = 0;
	int comb=(1<<k)-1; //最小的k元素子集
	while(comb<(1<<n)){
		//print_binary_format(comb,8);
		count++;
		int x=comb & -comb; //x表示最低位的位置
		int y=comb + x; //y表示4步中的第二步
		comb = (((comb&~y)/x)>>1)|y;
	}
	printf("count is %d\n",count);
}

int main(){
	// cout<<"hello zhaojing"<<endl;
	print_k_comb(5,8);
    //do nothing 
    return 0;
}