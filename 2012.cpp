#include <iostream>
using namespace std;
bool isss(int n){
	if(n<=1)return false;
	if(n==3 ||n ==2)return true;
	for(int i=2;i<(n+2)/2;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int x,y;
	while(scanf("%d%d",&x,&y)!=EOF){
		if(x==0&&y==0)continue;
		int f=1;
		for(int i=x;i<=y;i++){
			if(!isss(i*i+i+41)){
				f=0;
				break;
			}
		}
		if(f) cout<<"OK"<<endl;
		else cout<<"Sorry"<<endl;
	}
	return 0;
}