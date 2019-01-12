#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100005];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//将数组a[n]按从xiao到da的顺序排列
	for(int i=0;i<n;i++){
		int minindex=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minindex])
				minindex= j;
		}
		if(minindex!=i){
			int temp=a[minindex];
			a[minindex] = a[i];
			a[i]= temp;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}