#include <iostream>
#define N 100
using namespace std;
bool isji(int n){
	if(n%2==0)return false;
	else return true;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[N];
		int out=1;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if(isji(a[i])){
				out =out*a[i];
			}
		}
		cout<<out<<endl;

	}
	return 0;
}