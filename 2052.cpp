#include <iostream>
using namespace std;
void pheng(int n){
	cout<<"+";
	for(int i=0;i<n;i++){
		cout<<"-";
	}
	cout<<"+"<<endl;
}
void pshu(int n,int m){
	for(int k=0;k<m;k++){
		cout<<"|";
		for(int i=0;i<n;i++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	}
}
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		pheng(n);
		pshu(n,m);
		pheng(n);
		cout<<endl;
	}
	return 0;
}