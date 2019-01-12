#include <stdio.h>
#define H 24
#define M 60
#define S 60
int main(){
	int total;
	scanf("%d",&total);
	if(total >= H*M*S){
		total= total %(H*M*S);
	}
	int hour,min,sec;
	hour = total / (M*S) ;
	min = (total % (M*S)) /S;
	sec = (total % (M*S)) %S;
	printf("%d:%d:%d\n",hour,min,sec);
	return 0;
}