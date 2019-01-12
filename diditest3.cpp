// 一个数组有 N 个元素，求连续子数组的最大和。 例如：[-1,2,1]，和最大的连续子数组为[2,1]，其和为 3 
// 输入描述:
// 输入为两行。 第一行一个整数n(1 <= n <= 100000)，表示一共有n个元素 第二行为n个数，即每个元素,每个整数都在32位int范围内。以空格分隔。


// 输出描述:
// 所有连续子数组中和最大的值。

// 输入例子1:
// 3 -1 2 1

// 输出例子1:
// 3


#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int a[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int summax=a[0]; //只是随意给的一个初始值
	for(int i=0;i<n;i++){
		int sum = a[i];
		int max = a[i];
		for(int j=i+1;j<n;j++){
			sum=sum+a[j];
			if(sum>max)max=sum;
		}
		if(max>summax)summax=max;
	}
	cout<<summax<<endl;
    return 0;
}