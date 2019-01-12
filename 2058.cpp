// #include <iostream>
// using namespace std;
// int main(){  //超时
// 	long long n,m;
// 	while(scanf("%lld%lld",&n,&m)!=EOF){
// 		if(n==0 && m==0)break;
// 		for(int i=1;i<n;i++){
// 			int sum=i;
// 			for(int j=i+1;j<n;j++){
// 				if(sum>m)break;
// 				if(sum==m){
// 					cout<<"["<<i<<", "<<j-1<<"]"<<endl;
// 					break;	
// 				}
// 				sum+=j;
// 			}
// 		}
// 		cout<<endl;	
// 	}
// 	return 0;
// }

//等差数列求前n项和————Sn=na1+((n-1)*n*d)/2
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int m,n,a;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        for(int i=sqrt(2*m);i>0;i--)//保证a1的值大于0
        {
            a=m/i-(i-1)/2;
            if((2*a+i-1)*i==2*m)
                cout<<"["<<a<<","<<a+i-1<<"]"<<endl;
        }
        cout<<endl;
    }
    return 0;
}