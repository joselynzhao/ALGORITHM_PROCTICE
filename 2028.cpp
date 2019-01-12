#include <iostream>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int temp,out;
		scanf("%d",&out);
		for(int i=1;i<n;i++){
			scanf("%d",&temp);
			for(int j=out;;){
				if(j%temp==0){
					out=j;
					break;
				}
				j+=out;
			}
		}
		cout<<out<<endl;
	}
	return 0;
}