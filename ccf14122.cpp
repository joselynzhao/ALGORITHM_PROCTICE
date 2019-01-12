#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int **a=(int **)malloc(sizeof(int)*n*n);
	for(int i=0;i<n;i++){
		a[i]=(int *)malloc(sizeof(int)*n);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int k=0,m=0,order=1;
	while(1){
		cout<<a[k][m]<<" ";
		if(m==n-1 && k==n-1)break;
				switch(order){
			case 1:{ //进入这个状态，表示一定能这么走
				if(m<n-1)m++;
				if(k==0){
					order = 2;
				}
				else order = 4;
				break;
			}
			case 2:{
				if(m>0)m--;
				if(k<n-1)k++;
				if(m==0 && k<n-1)order=3;
				else if(k==n-1 )order=1;
				else order = 2;
				break;

			}
			case 3:{
				if(k<n-1)k++;
				if(m==0)order = 4;
				else order = 2;
				break;

			}
			case 4:{
				if(m<n-1)m++;
				if(k>0)k--;
				if(k==0 && m<n-1) order= 1;
				else if(m==n-1) order=3;
				else order = 4;
				break;

			}
			default:{
				printf("ERROR!!!\n");

			}

		}
		
	}
	cout<<endl;
	return 0;
}