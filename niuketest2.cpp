#include <iostream>
#define N 55
using namespace std;
int main(){
	int n;
	int a[N];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//从小到大排序   插入排序法
	for(int i=1;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		} 
		a[j+1]=key;
	}
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	int d=a[1]-a[0];
	for(int i=2;i<n;i++){
		if(a[i]-a[i-1]!=d){
			cout<<"Impossible"<<endl;
			return 0;
		}
	}
	cout<<"Possible"<<endl;
	return 0;
}