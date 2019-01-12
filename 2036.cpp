#include <iostream>
#include <math.h>
#define N 205
using namespace std;
int main(){
	int n;//n条边
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		int x[N],y[N];
		for(int i=0;i<n;i++){
			cin>>x[i];
			cin>>y[i];			
		}
		double temp=0,s;
		for(int i=0;i<n-1;i++){
			temp+=x[i]*y[i+1]-y[i]*x[i+1];
		}
		temp+=x[n-1]*y[0]-y[n-1]*x[0];
		if(temp<0)temp=0-temp;
		s=0.5*temp;
		printf("%.1lf\n", s);



	}

	return 0;
}