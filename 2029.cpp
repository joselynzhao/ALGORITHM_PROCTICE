#include <iostream>
#define N 100
using namespace std;
bool ishw(char a[N]){
	int len=0;
	for(int i=0;a[i]!='\0';i++)
		len++;
	for(int i=0;i<(len+1)/2;i++){
		if(a[i]!=a[len-1-i])return false;
	}
	return true;
}
int main(){
	//if(ishw("zhaojing"))printf("huiwen\n");
	int n;
	char a[N];
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%s",a);
		if(ishw(a))printf("yes\n");
		else printf("no\n");
	}
	return 0;
}