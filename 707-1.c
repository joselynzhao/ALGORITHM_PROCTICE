#include <stdio.h>
#define N 10
int jiecheng(int n){
	if(n == 1) return 1;
	return n*jiecheng(n-1);
}
int main(){
	int num,temp;
	scanf("%d",&num);
	printf("%d,", num);
	temp = num;
	printf("%d\n",temp);
		//get number 
	int sum = 0;
	int one[N];
	int i,bit=0;
	for(i=0;temp!=0;i++){
		one[i] = temp % 10; //得到最后面的一位数
		printf("%d = %d\n",i,one[i]);
		temp = temp /10;
		bit++;
	}
	printf("bit = %d\n",bit);
	for(i=bit-1;i>0;i--){
		printf("%d!+", one[i]);
		sum = sum+jiecheng(one[i]);
	}
	sum = sum +jiecheng(one[0]);
	printf("%d!=%d\n",one[0],sum);
	if(sum == num)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}