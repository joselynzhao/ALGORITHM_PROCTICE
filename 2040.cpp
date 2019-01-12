#include <iostream>
using namespace std;
int getsum(int a){
	int sum=0;
	for(int i=1;i<a;i++){
		if(a%i==0)sum+=i;
	}
	return sum;
}
bool fun_is(int a,int b){
	int sum1=getsum(a);
	int sum2=getsum(b);
	if(sum1==b && sum2==a)return true;
	else return false;

}
int main(){
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(fun_is(a,b))printf("YES\n");
		else printf("NO\n");

	}
	return 0;
}