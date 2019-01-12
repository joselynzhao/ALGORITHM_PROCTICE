#include <iostream>
using namespace std;
bool issafe(char a[]){
	int len=0;
	for(int i=0;a[i]!='\0';i++){
		len++;
	}
	if(len<8||len>16) return false;
	char specialchar[7]={'~','!','@','#','$','%','^'};
	int f[4]={0};
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>='A' && a[i]<='Z')f[0]++;
		if(a[i]>='a' && a[i]<='z')f[1]++;
		if(a[i]>='0' && a[i]<='9')f[2]++;
		for(int j=0;j<7;j++){
			if(a[i]==specialchar[j])f[3]++;
		}
	}
	int count=0;
	for(int i=0;i<4;i++){
	//	cout<<"i f[i]:"<<i<<" "<<f[i]<<endl;
		if(f[i]!=0)count++;
	}
	//cout<<"count:"<<count<<endl;
	if(count>=3)return true;
	else return false;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		char pw[53];
		cin>>pw;
		//scanf("%s",pw);
		if(issafe(pw))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}