#include <iostream>
using namespace std;
int getnum(int n){
	if(n==1||n==2)return 1;
	int sum=0;
	if(n>=100){
		sum=sum+(n/100);
		n=n%100;
	}
	if(n>=50){
		sum++;
		n=n-50;
	}
	if(n>=10){
		sum+=n/10;
		n=n%10;
	}
	if(n>=5){
		sum++;
		n=n-5;
	}
	if(n>=2){
		sum+=n/2;
		n=n%2;
	}
	if(n==1)sum++;
	return sum;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		//cout<<"n:"<<n<<endl;
		int k,out=0;
		for(int i=0;i<n;i++){
			scanf("%d",&k);
		//	cout<<"k:"<<k<<endl;
			out+=getnum(k);
		//	cout<<"out+:"<<out<<endl;

		}
		cout<<out<<endl;

	}
	return 0;
}