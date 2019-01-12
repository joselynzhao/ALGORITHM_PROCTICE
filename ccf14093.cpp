#include <iostream>
#define N 105
using namespace std;
int getlen(char a[]){
	int len=0;
	for(int i=0;a[i]!='\0';i++)len++;
	return len;
}
void all_max(char s[]){
	for(int i=0;i<getlen(s);i++){
		if(s[i]<='z'&& s[i]>='a')s[i]-=32;
	}
}
bool is_substring_open(char s[],char si[]){
	int len_s = getlen(s),len_si = getlen(si);
	for(int i=0;i<len_si-len_s+1;i++){
		int f=1;
		for(int j=i;j<len_s;j++){
			if(s[j]!=si[j]){
				f=0;
				break;
			}
		}
		if(f==0)return false;
		else return true;
	}
}
bool is_substring_close(char s[],char si[]){
	int len_s = getlen (s),len_si = getlen(si);
	char si_temp[N];
	for(int i=0;i<len_si;i++){  //拷贝si字符串
		si_temp[i]=si[i];
	}
	all_max(s);
	all_max(si_temp);
	return is_substring_open(s,si_temp);
}
int main(){
	char s[N];
	scanf("%s",s);
	int OpenOrClose;
	cin>>OpenOrClose;
	int n;
	cin>>n;
	char **ss;
	ss=(char **)malloc(sizeof(char)*n*N);
	for(int i=0;i<n;i++){
		ss[i]=(char *)malloc(sizeof(char)*N);
	}
	for(int i=0;i<n;i++){
		scanf("%s",ss[i]);
	}
	cout<<"-----------------result-----------------------"<<endl;
	if(OpenOrClose){ //大小写敏感
		for(int i=0;i<n;i++){//对所有的字符串进行遍历
			if(is_substring_open(s,ss[i])){
				printf("%s\n",ss[i]);
			}
		}
	}
	else{ //大小写不敏感
		for(int i=0;i<n;i++){
			if(is_substring_close(s,ss[i])){
				printf("%s\n",ss[i]);
			}
		}
	}
	return 0;
}