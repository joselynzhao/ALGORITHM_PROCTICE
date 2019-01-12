#include <iostream>
using namespace std;
int main(){
	char s[55];
	scanf("%s",s);
	int  f[55];
	for(int i=0;i<55;i++)f[i]=-1;
	f[0]=1;
	for(int i=1;s[i]!='\0';i++){
	//	cout<<"i:"<<i<<endl;
		for(int j=i-1;j>=0;j--){
			// cout<<"j:"<<j<<endl;
			// cout<<"s[i]: s[j] = "<<s[i]<<" "<<s[j]<<endl;
			if(s[j]==s[i]){
				f[i]=f[j]+1;
				break;
			}
		}
		if(f[i]==-1)f[i]=1;
	}
	// cout<<s<<endl;
	// for(int i=0;s[i]!='\0';i++){
	// 	cout<<f[i]<<" ";
	// }
	int num=0;
	for(int i=0;s[i]!='\0';i++){
		if(f[i]==1)num++;
	}
	if(num>=3)cout<<0<<endl;
	else cout<<num<<endl;
	return 0;
}