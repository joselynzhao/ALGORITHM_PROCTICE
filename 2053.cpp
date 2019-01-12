#include <iostream>
//#define  N 100000
using namespace std;
int main(){
	int n;//lamp数量
	while(scanf("%d",&n)!=EOF){
		//int a[N];
		long a=0;
		// for(int i=1;i<N;i++){ //初始化
		// 	a[i]=0;
		// }
		for(int i=1;i<=n;i++){ //操作次数
			if(n%i==0){
				if(a==0)a=1;
				else a=0;
			}
			// for(int k=1;i<N;i++){
			// 	if(k%i==0){
			// 		if(a[k]==0)a[k]=1;
			// 		else a[k]=0;
			// 	}
			// }
		}
		cout<<a<<endl;

	}
	return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
// 	long  m;
// 	while(cin>>m)
// 	 {
// 	 	long  a[100000]={0},j,k,l;
// 	 	for(j=1;j<=m;j++)
// 	 	 {
// 	 	 	if(m%j==0)
// 	 	 	  {
// 	 	 	  	if(a[m]==0)
// 	 	 	  	  a[m]=1;
// 	 	 	  	else
// 				  a[m]=0;	  
// 	 	 	  }	 	 	  
// 	 	 }	 	 
// 	 	cout<<a[m]<<endl; 
// 	 }
//   return 0;	 
// }