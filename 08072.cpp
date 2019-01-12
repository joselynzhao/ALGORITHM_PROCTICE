#include <iostream>
#include <math.h>
#define N 1000000
using namespace std;
long long string_int(char a[]){
	int len=0;
	for(int i=0;a[i]!='\0';i++){
		len++;
	}
	long long k=0;
	for(int i=len-1;i>=0;i--){
		k+=(a[i]-'0')*pow(10,len-i-1);
	}
	return k;
}
int main(){
	char s1[N],s2[N];
	scanf("%s%s",s1,s2);
	long long n1=string_int(s1);
	long long n2=string_int(s2);
//	cout<<n1<<endl;
//	cout<<n2<<endl;
	cout<<n1*n2<<endl;

	return 0;
}