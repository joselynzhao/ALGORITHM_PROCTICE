#include <iostream>
#include <math.h>
using namespace std;
int get_max_sum(int n,int a[],int len){
	int index=0;
	int max_d=0;
	for(int i=0;i<len;i++){
		int d=abs(n-a[i]);
		if(d>max_d){
			max_d=d;
			index=i;
		}
	}
	return index;
}
int main(){
	int n;
	cin>>n;
	int a[55],b[55];  //排序结果放在b中。在a中进行标记
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//贪心思想   排序问题
	b[0]=a[0];
	int sum=0;
	int rindex_max,lindex_max;
	int r_max,l_max;
	for(int i=0;i<n;i++){
		lindex_max=get_max_sum(b[0],a,n);
		if(i!=0)
			rindex_max=get_max_sum(b[i],a,n);
		else rindex_max=lindex_max;
		r_max=abs(b[i]-a[rindex_max]);
		l_max=abs(b[0]-a[lindex_max]);
		if(r_max>=l_max){
			b[i+1]=a[rindex_max];
			sum+=r_max;
		}
		else{
			for(int k=i;k>=0;k--){
				b[k+1]=b[k];
			}
			b[0]=a[lindex_max];
			sum+=l_max;
		}

	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";

	}
	cout<<sum<<endl;

	return 0;
}