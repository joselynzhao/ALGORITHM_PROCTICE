#include <iostream>
#define N 100
using namespace std;
int main(){
	int n;
	int a[N];
	while(scanf("%d",&n)!=EOF){
		if(n==0)continue;
		int minindex=0;  //初始化下标为0的数最小
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[minindex]>a[i]){
				minindex=i;
			}
		}
		int temp=a[minindex];
		a[minindex]=a[0];
		a[0]=temp;
		for(int i=0;i<n;i++){
			if(i==0)cout<<a[i];
			else cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}