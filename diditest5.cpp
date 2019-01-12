#include <iostream>
using namespace std;

bool is_ugly(int n){ //判断这个数是不是丑数
	do{
		if(n%2==0){
			n=n/2;
		}
		else if(n%3==0)n=n/3;
		else if(n%5==0)n=n/5;
		else return false;
	}while(n>1);
	return true;
}
int main(){
	int n;
	cin>>n;
	int a[1000000];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=5;
	int k=4;
	for(int i=6;i<1000000;i++){
		if(is_ugly(i)) a[k++]=i;
	}
	// for(int i=0;i<50;i++){
	// 	cout<<a[i]<<" ";
	// }

	cout<<a[n-1]<<endl;
	return 0;
}