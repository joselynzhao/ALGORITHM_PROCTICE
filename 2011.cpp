#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
			int num;
			double sum=0;
			scanf("%d",&num);
			for(int j=0;j<num;j++){
				sum+=pow(-1,j)/(j+1);
			}
			printf("%.2lf\n",sum);
		}
	return 0;
}