#include <iostream>
using namespace std;
int main(){
	long long int fb[53];
	fb[0]=1;fb[1]=1;
	for(int i=2;i<53;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
	int n,m1,m2;
	cin>>n;
	while(n--){
		cin>>m1>>m2;
		printf("%lld\n",fb[m2-m1]);
	}
	return 0;
}