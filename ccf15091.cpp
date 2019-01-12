#include <iostream>
using namespace std;
int main(){
	int n,out=1;
	int temp,input;
	cin>>n;
	cin>>temp;
	for(int i=0;i<n-1;i++){
		cin>>input;
		if(input!=temp)out++;
		temp=input;
	}
	cout<<out<<endl;
	return 0;
}
// 数列分段
