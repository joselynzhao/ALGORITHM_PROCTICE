#include <iostream>
#define N 1000000
using namespace std;
int main(){
		int a[N];
	int n=0;
	while(1){
		cin>>a[n];
		n++;
		if(cin.get()=='\n')break;
	} //获取数据a
	int summax=a[0];
	for(int i=0;i<n;i++){
		int sum = a[i];
		int max = a[i];
		for(int j=i+1;j<n;j++){
			sum=sum+a[j];
			if(sum>max)max=sum;
		}
		if(max>summax)summax=max;
	}
	cout<<summax<<endl;
	return 0;
}
