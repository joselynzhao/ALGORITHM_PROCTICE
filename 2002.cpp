#include <iostream>
#define PI 3.1415927
using namespace std;
int main(){
	double num;
	while(cin>>num){
		double out = 4* PI * num*num*num /3;
		printf("%.3lf\n", out);
	}
	return 0;
}


// #include <stdio.h>
// #define PI 3.1415927
// #include <math.h>
// int main()
// {
// 	double r;
// 	while(scanf("%lf",&r)!=EOF)
// 	{
// 	printf("%.3lf\n",4*PI*r*r*r/3);
	
// 	}

// }