#include <iostream>
#define N 105
using namespace std;
int main(){
	int n,x;
	int a[N];
	while(scanf("%d%d",&n,&x)!=EOF){
		int f=0;
		if(n==0 && x==0)break;
		for(int i=0;i<=n;i++){
			scanf("%d",&a[i]);
			if(a[i]>=x&&f==0){
				a[i+1]=a[i];
				a[i]=x;
				f=1;
				i++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n]<<endl;

	}
	return 0;
}