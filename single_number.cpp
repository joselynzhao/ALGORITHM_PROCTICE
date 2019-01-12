#include<iostream>
#include<stdlib.h>
using namespace std;
// 问题描述：给定n个整数，除了第一个数出现一次之外，其余的数均出现两次，找到只出现了一次的整数
int single_number1(int* a,int len){
	int result = 0;
	for(int i=0;i<len;i++){
		result^=a[i];
	}
	return result;
}
// 问题描述：给定n个整数，除了第一个数出现一次之外，其余的数均出现三次，找到只出现了一次的整数
// method1:
int single_number21(int* a,int len){
	int count[32],result=0;  //把每个整数都看做32位的二进制数？
	//memset(count,0,sizeof(int)*32);  //不懂什么意思
	for(int i=0;i<len;i++){
		for(int j=0;j<32;j++){
			count[j]+=a[i]>>j&0x1;
		}
	}
	for(int i=0;i<32;i++){
		result|=(count[i]%3<<i);
	}
	return result;

}
//method2:
int single_number22(int* a,int len){
	int ones = 0,twos = 0;
	for(int i=0;i<len;i++){
		ones = (ones ^ a[i])& ~twos;
		twos = (twos ^ a[i])& ~ones;
	}
	return ones;
}

// 问题描述：给定n个整数，除了两个数出现一次之外，其余的数均出现两次，找到只出现了一次的两个整数
int single_number3(int* a,int len,int* return_size){
	int* result=(int* )malloc(sizeof(int)*2);
	//meset(result,0,sizeof(int)*2);
	int xorsum=0;
	for(int i=0;i<len;i++){
		xorsum^=a[i];
	}
	int low_one = xorsum & -xorsum;
	printf("low one is %d\n",low_one );
	for(int i=0;i<len;i++){
		if(low_one&a[i]!=0){
			result[0]=result[0]^a[i];
			printf("%d none 0\n",a[i]);
		}
		else{
			result[1]=result[1]^a[i];
			printf("%d is 0\n",a[i] );
		}
		printf("%d:%d %d\n",i,result[0],result[1]);
	}
	*return_size=2;
}


int main(){
	int a[]={1,2,1,3,3};
	cout<<single_number1(a,5)<<endl;
    
    return 0;
}