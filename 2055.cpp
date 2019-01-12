#include <iostream>
int f(char a){
	int n;
	if(a>='A'&& a<='Z')n=a-'A'+1;
	if(a>='a'&& a<='z')n=0-(a-'a'+1);
	return n;
}
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		char x;
		int y;
		cin>>x>>y;
		cout<<y+f(x)<<endl;
	}
	return 0;
}