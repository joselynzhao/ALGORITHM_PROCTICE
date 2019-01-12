#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double num;
	int count;
	while(scanf("%lf%d",&num,&count)!=EOF){
		double sum=0;
		for(int i=0;i<count;i++){
			sum+=num;
			num=sqrt(num);
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}