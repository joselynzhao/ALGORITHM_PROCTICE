#include <iostream>
#include <math.h>
using namespace std;
int getlen(char a[]){
	int len=0;
	for(int i=0;a[i]!='\0';i++)len++;
	return len;
}
void getsym(char a[]){
	for(int i=getlen(a);i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]='+';
}
int change16_10(char a[]){
	int n=0,len=getlen(a);
	//cout<<endl<<"len :"<<len<<endl;
	for(int i=len-1;i>0;i--){
		if(a[i]<='F' && a[i]>='A'){
			n+=(a[i]-'A'+10)*pow(16,len-i-1);
		//	 cout<<(a[i]-'A'+10)*pow(16,len-i-1)<<endl;
		}
		else {
			n+=(a[i]-'0')*pow(16,len-i-1);
			// cout<<(a[i]-'0')*pow(16,len-i-1)<<endl;
		}
	}
	if(a[0]=='-')n=0-n;
	return n;
}
void change10_16(char b[],int n){
	int k=0;
	if(n<0){
		b[0]='-';
		k++;
		n=0-n;
	}
	int i=0,reminder;
	char a[20];
	while(n){
		reminder = n%16;
		if(reminder > 9){
			a[i]='A'+(reminder-10);
		}
		else{
			a[i]=reminder+'0';
		}
		i++;
		n=n/16;
	}
	a[i]='\0';
	for(int i=getlen(a)-1;i>=0;i--){
		b[k]=a[i];
		k++;
	}
	b[k]='\0';


}
int main(){
	char a[20],b[20];
	while(scanf("%s%s",a,b)!=EOF){
		if(a[0]!='+'&&a[0]!='-')getsym(a); //补全符号位
		if(b[0]!='+'&&b[0]!='-')getsym(b);
		int av=change16_10(a);
		int bv=change16_10(b);
		int out=av+bv;
		//cout<<"out:"<<out<<endl;
		char outstring[20];
		change10_16(outstring,out);
		printf("%s\n", outstring);

	}
	return 0;
}


// #include <stdio.h>
// int main()
// {
// 	long long a,b,r;
// 	while (~scanf("%llX%llX",&a,&b))
// 	{
// 		r=a+b;
// 		if (r>=0) printf("%llX\n",r);
// 		else printf("-%llX\n",-r);
// 	}
// }