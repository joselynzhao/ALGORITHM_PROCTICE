#include <iostream>
using namespace std;
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		int max=0,temp,x=1,y=1;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&temp);
				if((temp*temp)>(max*max)){
					max=temp;
					x=i+1;
					y=j+1;
				}
			}
		}
		cout<<x<<" "<<y<<" "<<max<<endl;
	}
	return 0;
}