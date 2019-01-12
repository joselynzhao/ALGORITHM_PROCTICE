#include <iostream>
#include <math.h>
using namespace std;


// 设n位字符串，最后一位是O的字符串的个数为a[n],最后一位不是O的字符串的个数是b[n],
// 总字符串个数为x[n]，
// 则有
// x[n]=a[n]+b[n];
// a[n]=b[n-1];
// b[n]=2*x[n-1];
// ====>x[n]=2*x[n-1]+2*x[n-2]

int main(){
	int n;
		long long int  a[44];
		a[1]=3;
		a[2]=8;
		for(int i=3;i<44;i++){
			a[i]=(a[i-1]+a[i-2])*2;
			cout<<i<<":"<<a[i]<<endl;
		}
	while(scanf("%d",&n)!=EOF){
		//k=pow(3,n)-pow(3,n-2)*(n-1);
		cout<<a[n]<<endl;
	}
	return 0;
}


// #include<iostream>
// using namespace std;
// int main(void)
// {
// 	int n,i;
// 	long long int a[40];
// 	while(cin>>n)
// 	{
// 		a[1]=3;
// 		a[2]=8;
// 		for(i=3;i<=n;i++)
// 		a[i]=(a[i-1]+a[i-2])*2;
// 		cout<<a[n]<<endl;
// 	}
// }