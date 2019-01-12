#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char a[100];
		int sum=0;
		scanf("%s",a);
		for(int j=0;a[j]!='\0';j++){
			if((a[j]-'0')>=0 && (a[j]-'0')<=9){
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}