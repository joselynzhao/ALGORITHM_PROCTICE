#include <stdio.h>
//#include <string.h>
#define N 2
struct student{
	int ID;
	float score;
}stu[N],*topstu;

int main(){
	printf("请录入学生信息\n");
	int i;
	for(i=0;i<N;i++){
		//printf("id?:");
		scanf("%d%f",&stu[i].ID,&stu[i].score);
	}
	//input test
	for(i=0;i<N;i++){
		printf("%d      %.2f\n",stu[i].ID,stu[i].score);
	}
	topstu = &stu[0];
	for(i=1;i<N;i++){
		if(stu[i].score >topstu->score){
			topstu = & stu[i];
		}
	}
	printf("max score:%.2f; ID:%d\n",topstu->score,topstu->ID);
	return 0;

}