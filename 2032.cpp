#include <iostream>
#define N 32
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[N][N]={0};
		a[1][1]=1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<=i;j++){
				a[i][j]=(a[i-1][j-1]+a[i-1][j]);
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				if(j==1)printf("%d",a[i][j]);
				else printf(" %d", a[i][j]);
			}
			cout<<endl;
		}
		cout<<endl;

	}
	return 0;
}