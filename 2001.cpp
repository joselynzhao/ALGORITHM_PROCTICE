#include <iostream>
#include <math.h>
//2001
using namespace std;
int main(){
	double arr[4];
	while (scanf("%lf%lf%lf%lf",&arr[0],&arr[1],&arr[2],&arr[3])==4){
		float len = sqrt(pow((arr[2]-arr[0]),2)+pow((arr[3]-arr[1]),2));
		printf("%.2f\n",len);
	}
	return 0;
}

