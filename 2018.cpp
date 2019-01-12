#include <iostream>
#define N 60
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)continue;
		int a1[N];//,a2[N];
		a1[1]=1;
		a1[2]=2;
		a1[3]=3;
		a1[4]=4;
	//	a1[5]=2;a2[5]=4;
		for(int i=5;i<=n;i++){
			a1[i]=a1[i-1]+a1[i-3];
		}
		cout<<a1[n]<<endl;

	}
	return 0;
}

// #include"stdio.h"
// int main()
// {
// 	int n,i;
// 	while(scanf("%d",&n),n!=0)
	  
// 	   { if(n<=4) n=n;
// 		else
// 			for(i=n-4;i!=0;i--)
// 			n=n+i;
	   
// 	printf("%d\n",n);
// 	   }
// 	   return 0;
// }