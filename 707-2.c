#include <stdio.h>

#define N 19
int check(int a[N][N],int p,int q){
	int i,j;
	int k = 1;
	if(p>=4 && q<N-4){
		for(i=1;i<5;i++){ //检测相4个是否相同
			if(a[p+i][q-i]==a[p][q]){
				k++;
			}
			else break;
		}
		if(k==5)return 1;
	}
	k = 1;
	if(q<N-4){
		for(i=1;i<5;i++){
			if(a[p+i][q] == a[p][q]){
				k++;
			} 
			else break;
		}
		if(k==5)return 1;
	}
	k = 1;
	if(p < N-4 && q< N-4){
		for(i = 1;i<5;i++){
			if(a[p+i][q+i] == a[p][q]){
				k++;
			}
			else break;
		}
		if(k==5)return 1;
	}
	k = 1;
	if(p<N-4){
		for(i = 1;i<5;i++){
			if(a[p][q+i] == a[p][q])
				k++;
			else break;
		}
		if(k==5)return 1;
	}
	return 0;
	
}
int main(){
	int arr[19][19]={0};
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	while (1){
		int x,y,value;
		scanf("%d%d%d",&x,&y,&value);
		if(value == -1)
			break;
		if(!(value==1 ||value ==2)){
			printf("enter error\n");
			break;
		}
		arr[x][y]=value;
		//显示
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
		int v=0;
		//检查是否有人获胜
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				if(arr[i][j]!=0 && check(arr,i,j)){//有人获胜
					v=1;
					printf("%d\n",arr[i][j]);
					break;
				}
			}
		}
		if(v!=1)printf("no\n");
	}
	return 0;
}