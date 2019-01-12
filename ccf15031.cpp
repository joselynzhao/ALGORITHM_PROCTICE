#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int **a=(int **)malloc(sizeof(int)*n*m);
	for(int i=0;i<n;i++){
		a[i]=(int *)malloc(sizeof(int)*m);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=m-1;i>=0;i--){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}