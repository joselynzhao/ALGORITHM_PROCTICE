#include <iostream>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		float max=0,min=100,score,sum=0,out;
		for(int i=0;i<n;i++){
			cin>>score;
			if(score>=max)max=score;
			if(score<=min)min=score;
			sum+=score;
		}
		out=(sum-max-min)/(n-2);
		printf("%.2f\n", out);
	}
	return 0;
}