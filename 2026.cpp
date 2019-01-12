#include <iostream>
#define N 105
using namespace std;
int main(){
	char a[N];
	//getchar();
	while(gets(a)!=NULL){
		printf("%c",a[0]-32);
		for(int i=1;a[i]!='\0';i++){
			cout<<a[i];
			if(a[i]==' '){
				printf("%c",a[i+1]-32);
				i++;
			}
		}
	cout<<endl;
	}
	return 0;
}