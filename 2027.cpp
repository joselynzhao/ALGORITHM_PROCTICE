#include <iostream>
#define N 105
using namespace std;
int main(){
	int n;
	char a[N];
	
	scanf("%d",&n);
		getchar();
		for(int i=0;i<n;i++){
			int b[5]={0};
			gets(a);
			for(int j=0;a[j]!='\0';j++){
				if(a[j]=='a')b[0]++;
				if(a[j]=='e')b[1]++;
				if(a[j]=='i')b[2]++;
				if(a[j]=='o')b[3]++;
				if(a[j]=='u')b[4]++;
			}
			cout<<"a:"<<b[0]<<endl;
			cout<<"e:"<<b[1]<<endl;
			cout<<"i:"<<b[2]<<endl;
			cout<<"o:"<<b[3]<<endl;
			cout<<"u:"<<b[4]<<endl;
			if(i!=n-1)cout<<endl;
		}		
	return 0;
}