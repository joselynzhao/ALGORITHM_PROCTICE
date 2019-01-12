#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int **a;
	a=(int **)malloc(sizeof(int)*n*4);
	for(int i=0;i<n;i++){
		a[i]=(int *)malloc(sizeof(int)*4);
	}
	int size = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
			if(a[i][j]>size) size = a[i][j];
		}
	}
	int **b;
	b=(int **)malloc(sizeof(int)*size*size);
	for(int i=0;i<size;i++){
		b[i]=(int *)malloc(sizeof(int)*size);
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			b[i][j]=0;
		}
	}
	int out=0;
	for(int i=0;i<n;i++){  //对n个矩形进行遍历
		for(int j=a[i][0];j<a[i][2];j++){
			for(int k=a[i][1];k<a[i][3];k++){
				if(b[j][k]!=1){
					b[j][k]=1;
					out++;
				}
			}
		}
	}
	for(int i=0;i<size;i++){  //对n个矩形进行遍历
		for(int j=0;j<size;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<out<<endl;

	
	return 0;
}