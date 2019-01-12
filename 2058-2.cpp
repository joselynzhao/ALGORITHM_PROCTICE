#include <iostream>
using namespace std;

long long int getsum(long long int x,long long int y){
	long long int sum=x;
	x++;
	while(x<=y){
		sum+=x++;
	}
	return sum;
}

int main(){
	long long int m,n,a;
	// cout<<getsum(4,4)<<endl;
	while(cin>>n>>m){
		//先做条件判断
		if(n==0&&m==0)break;
		long long int p,q;
		for(p = 1; p<=n;p++){
			for(q =p;q<=n;q++){
				if(getsum(p,q)==m){
					cout<<"["<<p<<","<<q<<"]"<<endl;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}