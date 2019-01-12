#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

int main(){
	//或的二位数组维度
	int n;
	cout<<"input n:";
	cin>>n;
	int **array;
	array = (int **)malloc(n*n*sizeof(int));
	for(int i=0;i<n;i++){
		array[i] =(int *) malloc (n*sizeof(int));
	}
	srand(time(NULL));
	int *note;
	int k=0;
	note = (int *)malloc (n*n*sizeof(int ));
	for(int m=0;m<n;m++){
		for(int j=0;j<n;j++){//便利二位数组
			note[k]=1;
			while(note[k]){
				k = 1+rand()%(n*n);
			}
			array[m][j]=k;
			//cout<<array[m][j]<<" ";
			printf("%4d",array[m][j]);
		}
		cout<<endl;
	}
	for(int a=0;a<n;a++){
		for(int b=0;b<n;b++){
			set(array,a,b,n);
		}
	}

	return 0;
}