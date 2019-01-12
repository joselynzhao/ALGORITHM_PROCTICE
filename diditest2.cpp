#include <iostream>
#define N 1000000
using namespace std;
int main(){
	int a[N];
	int n=0;
	while(1){
		cin>>a[n];
		n++;
		if(cin.get()=='\n')break;
	}
	int k;
	cin>>k;
	for(int i=0;i<n;i++){
		int maxindex=i;
		for(int j=i+1;j<n;j++){
			if(a[maxindex]<a[j])maxindex=j;
		}
		if(maxindex!=i){
			int temp=a[i];
			a[i]=a[maxindex];
			a[maxindex]=temp;
		}
	}
	cout<<a[k-1]<<endl;
	return 0;
}