#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long *px,*py,*f;
	px = (long long *)malloc(sizeof(long long )*n);  //动态分配
	py = (long long  *)malloc(sizeof(long long )*n);  //动态分配
	f = (long long  *)malloc(sizeof(long long )*n);  //动态分配
	long long  size = n;
	while(n--){
		cin>>px[n]>>py[n];
	}
	n = size;
	for(int i=0;i<n;i++)
		f[i]=1;

	for(int i=0;i<n;i++){
		int out = 0;
		for(int j=0;j<n;j++){
			if(out)break;
			if(i==j)continue;  //不用和自己比
			if(px[i]<px[j]){
				if(py[i]<py[j]){
					f[i]=0;
					out = 1;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		int minindex=i;
		for(int j=i+1;j<n;j++){ //找到最小的一个
			if(px[minindex]>px[j]){
				minindex = j;
			}
		}
		if(minindex != i){
			int temp1 = px[i],temp2 = py[i],temp3 = f[i];
			px[i]=px[minindex];
			py[i]=py[minindex];
			f[i]=f[minindex];
			px[minindex]= temp1;
			py[minindex]= temp2;
			f[minindex] = temp3;
		}

	}
//	cout<<"-----------------"<<endl;
	for(int i=0;i<n;i++){
		if(f[i]){
			cout<<px[i]<<" "<<py[i]<<endl;
		}
	}
	return 0;
}