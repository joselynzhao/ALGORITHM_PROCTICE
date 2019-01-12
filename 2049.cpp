#include <iostream>
using namespace std;
long long int jiecheng(int n){
	long long int out=1;
	for(int i=1;i<=n;i++){
		out*=i;
	}
	return out;
}
long long int Cmn(int m,int n){
	long long int out;
	out=jiecheng(n)/(jiecheng(m)*jiecheng(n-m));
	return out;
}
int main(){
	 long long int a[23];
	// for(int i=1;i<23;i++){
	// 	d[i]=1;
	// 	for(int j=1;j<=i;j++){
	// 		d[i]*=j;
	// 	}
	// }
	a[1]=0;
	a[2]=1;
	for(int i=3;i<23;i++){
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	}
	int w;
	cin>>w;
	while(w--){
		int n,m;
		cin>>n>>m;
		printf("%lld\n",a[m]*Cmn(m,n)); //cmn 是调出哪m个选错新娘
		//printf("%lld\n",Cmn(n-m,n));
	}
	return 0;
}


// #include <iostream>
// #define ll long long
// using namespace std;

// ll c[25][25]={0}, b[25]={0,0,1,2};
// ll C(int n, int m)
// {
//     return c[n][m]?c[n][m]:(m==n||!m?c[n][m]=1:c[n][m]=C(n-1,m)+C(n-1,m-1));
// }
// ll B(int m)
// {
//     return b[m]?b[m]:b[m]=(m-1)*(B(m-1)+B(m-2));
// }
// int main ()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n, m;
//         cin>>n>>m;
//         cout<<B(m)*C(n,m)<<endl;
//     }
//     return 0;
// }