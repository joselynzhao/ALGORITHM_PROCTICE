#include <iostream>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int len=0,a[15];
		for(int i=0;n>0;i++){
			a[i]=n%2;
			n=n/2;
			len++;
		}
		for(int i=len-1;i>=0;i--){
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}