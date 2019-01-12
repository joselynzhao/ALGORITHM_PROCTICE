#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		//int m;//经过m个站
		int a[32];
		cin>>m;
		a[m]=3;
		for(int i=m;i>=1;i--){
			a[i-1]=(a[i]-1)*2;
		}
		cout<<a[0]<<endl;

	}
	return 0;
}