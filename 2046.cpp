#include <iostream>
using namespace std;

int main(){
	long long int list[55];
	list[3]=3;
	list[2]=2;
	list[1]=1;
	for(int i=4;i<55;i++){
		list[i]=list[i-1]+list[i-2];
	}
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%lld\n",list[n]);
	}
	return 0;
}