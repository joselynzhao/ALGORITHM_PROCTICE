#include <iostream>
#define N 105
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[N];
		if(n==0)break;
		int temp;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			int maxindex=i;
			for(int j=i+1;j<n;j++){
				if((a[j]*a[j])>(a[maxindex]*a[maxindex])){
					maxindex=j;
				}
			}
			if(maxindex!=0){
				temp=a[i];
				a[i]=a[maxindex];
				a[maxindex]=temp;
			}
		}
		for(int i=0;i<n-1;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<endl;

	}
	return 0;
}