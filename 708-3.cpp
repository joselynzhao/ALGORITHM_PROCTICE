#include <iostream>
#include <stdio.h>
#define N 10
using namespace std;

int ten(int n){
	int i,number =1;
	for(i =0;i<n;i++){
		number*=10;
	}
	return number;
}
int getcon(char arr[N],int len){
	int i,number=0;
	for(i=0;i<len;i++){
		number+=(arr[i]-'0')*ten(i);
	}
	return number;

}
int getlen(char arr[N]){
	int i,len=0;
	for(i=0;arr[i]!='\0';i++){
		len++;
	}
	return len;
}

int getint(char arr[N],int len){
	int i,number=0;
	for(i=0;i<len;i++){
		number+=(arr[i]-'0')*ten(len-i-1);
	}
	return number;
}
bool ishuiwen(char arr[N],int len){
	int i;
	for(i=0;i<(len+1)/2;i++){
		if(arr[i]!=arr[len-i-1])
			return false;
	}
	return true;
}
void getchar(char arr[N],int number){
	int i;
	char arr1[N];
	for(i=0;number>0;i++){
		arr1[i]=number%10+'0';
		number = number/10;
	}
	for(i=0;i<getlen(arr1);i++){
		arr[i]=arr1[getlen(arr1)-1-i];
	}
	arr[i]='\0';
}

void  addc(char arr[N],int len ){
	int n1,n2,i,j;
	n1=getint(arr,len);
	n2=getcon(arr,len);
	n1+=n2;
	getchar(arr,n1);
}

int main(){
	char str[N];
	scanf("%s",str);
	int s1[N],s2[N];
	int i,j,count =0;
	while(1){
		if(ishuiwen(str,getlen(str))){  //是回文数
			break;
		}
		s1[count]=getint(str,getlen(str));
		s2[count]=getcon(str,getlen(str));
		count++;
		addc(str,getlen(str));
	}
	s1[count]=getint(str,getlen(str));
	cout<<count<<endl;

	for(i=0;i<count;i++){
		cout<<s1[i]<<"+"<<s2[i]<<"="<<s1[i+1]<<endl;
	}
	return 0;
}