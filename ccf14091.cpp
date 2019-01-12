#include <iostream>//相邻数对问题
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *a;
	a=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[j]-a[i])==1)count++;
		}
	}
	cout<<count<<endl;
	return 0;
}