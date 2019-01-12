#include <iostream>
#define N 100000
using namespace std;
void fun_p(int a[N],int len){
	for(int i=len-1;i>=0;i--){
		 if(a[i]>=10){
		 	printf("%c",('A'+(a[i]-10)));
		}
		else cout<<a[i];
	}
	cout<<endl;
}
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n<0){
			cout<<"-";
			n=0-n;
		}
		int a[N];
		int len=0;
		for(int i=0;n>0;i++){
			a[i]=n%m;
			len++;
			n=n/m;
		}
		fun_p(a,len);
	}
	return 0;
}