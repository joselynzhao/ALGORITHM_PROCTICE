#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *a,*b;
	a=(int *)malloc(sizeof(int)*n);
	b=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=1;
	}

	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j]==a[i]){
				b[i]=b[j]+1;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	return 0;
}