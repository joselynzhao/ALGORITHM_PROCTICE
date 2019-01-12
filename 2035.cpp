#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0)break;
		long long int out=1;
		for(int i=0;i<b;i++){
			out=out*a;
			out=out%1000;
		}
		//out=out%1000;
		cout<<out<<endl;
	}
	return 0;
}