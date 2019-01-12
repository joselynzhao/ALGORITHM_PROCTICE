#include <iostream>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int s1=0,s2=0,s3=0;
		float num;
		if(n==0)
			continue;
		for(int i=0;i<n;i++){
			scanf("%f",&num);
			if(num<0)s1++;
			else if(num == 0 )s2++;
			else s3++;
		}
		cout<<s1<<" "<<s2<<" "<<s3<<endl;
	}
	return 0;
}