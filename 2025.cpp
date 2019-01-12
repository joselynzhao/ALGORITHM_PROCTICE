#include <iostream>
#define N 105
using namespace std;
int main(){
	char a[N];
	while(scanf("%s",a)!=EOF){
		char max=a[0];
		for(int i=1;a[i]!='\0';i++){
			if(a[i]>max) max =a[i];
		}
		for(int i=0;a[i]!='\0';i++){
			cout<<a[i];
			if(a[i]==max){
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}