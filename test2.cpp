#include <iostream>
#include <stdlib.h>
using namespace std;
long long getmax(int a[],long long  i,long long  j){
	long long sum=0;
	for(int k=i;k<=j;k++){
		sum+=a[k];
	}
	return a[i]*sum;
}

int main(){
	long long n;
	cin>>n;
	int *a;
	a = (int *)malloc(sizeof(int)*n);
	for(long long  i=0;i<n;i++){
		cin>>a[i];
	}
	//对输入的数组排序,从小排到大
	for(long long i=0;i<n;i++){
		long long min=i;
		for(long long j=i+1;j<n;j++){
			if(a[min]>a[j])min=j;
		}
		if(min!=i){
			int temp = a[min];
			 	a[min]=a[i];
			 	a[i] = temp;
		}
	}
	long long max =0;
	for(long long i=0;i<n;i++){
		for(long long j=i;j<n;j++){
			long long maxa=getmax(a,i,j);
			if(max<maxa)max = maxa;
		}
	}
	cout<<"max:"<<max<<endl;
	return 0;
}