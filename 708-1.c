#include <stdio.h>
#define N 100
int main(){
	char a[N];
	scanf("%s",a);
	printf("%s\n", a);
	FILE *p;
	p = fopen("test.txt",'w');


	return 0;
}