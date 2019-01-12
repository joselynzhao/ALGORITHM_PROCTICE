#include <stdio.h>
// 求相亲数
int getsum(int n){
	printf("%d,",n);
	int i,sum=0;
	for(i=n-1;i>1;i--){
		if((n%i)==0){
			sum = sum+i;
			//printf("%d+",i);
		}	
	}
	sum+=1;
	printf("1=%d\n",sum);
	return sum;
}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(x<=1||y<=1){
		//printf("输入错误！\n");
		return 0;
	}
	int sumx,sumy;
	sumx = getsum(x);
	sumy = getsum(y);
	if(sumx==y && sumy==x)
		printf("1\n");
	else printf("0\n");
	return 0;
}