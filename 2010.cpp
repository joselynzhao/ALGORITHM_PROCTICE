#include <iostream>
#include <math.h>
using namespace std;
bool isflower(int n){
	int temp=n,sum=0;
	while(temp){
		sum+=pow(temp%10,3);
		temp=temp/10;		
	}
	if(sum==n)return true;
	else return false;
}
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		int f=0;
		for(int i=m;i<=n;i++){
			if(isflower(i))
			{
				if(f==0){
					f=1;
					cout<<i;
				}
				else  cout<<" "<<i;
			}
		}
		if(f==1)cout<<endl;
		if(f==0)cout<<"no"<<endl;
	}
	return 0;
}