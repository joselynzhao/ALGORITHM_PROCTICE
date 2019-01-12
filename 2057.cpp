#include <iostream>
using namespace std;
int getlen(char a[]){
	int len=0;
	for(int i=0;a[i]!='\0';i++){
		len++;
	}
	return len;
}
int main(){
	char a[20],b[20];
	int lena,lenb;
	lena=getlen(a);
	lenb=getlen(b);
	int size = lena>lenb?lena:lenb;
	//int f1=0,f2=0;
	while(scanf("%s%s",a,b)!=EOF){
		char a1[20],b1[20];
		if(a[0]=='+'||a[0]=='-'){
			for(int i=lena-1;i>0;i--){
				a1[size--]=a[i];
			}
			//lena--;
		}
		else{
			for(int i=lena-1;i>=0;i--){
				a1[size--]=a[i];
			}
		}
		if(b[0]=='+'||b[0]=='-'){
			for(int i=lenb-1;i>0;i--){
				b1[size--]=b[i];
			}

		}
		else{
			for(int i=lenb-1;i>=0;i--){
				b1[size--]=b[i];
			}
			
		}
		if(a[0]=='+'&&b[0]=='+'){
			for()
		}
	}
	return 0;
}