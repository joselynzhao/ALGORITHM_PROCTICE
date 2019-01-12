#include <iostream>
#include <string>
#include <ctime>
#define M 5
#define N 5

using namespace std;
typedef struct stu{
	int id;
	float score[N];
	float sum;
	float bignumer;
}Stu;

int main(){

	srand(time(NULL));
	Stu student[M]; 
	for(int i=0;i<M;i++){  //初始化
		student[i].id = i;
		cout<<student[i].id<<" : ";
		student[i].sum = 0;
		student[i].bignumer = 0;
		for(int j=0;j<N;j++){ //initial score
			student[i].score[j]= 50+ rand() %51;
			cout<<student[i].score[j]<<"  ";
			student[i].sum += student[i].score[j];
			if(student[i].score[j]>student[i].bignumer){
				student[i].bignumer = student[i].score[j];
			}
		}
		cout<< "	sum :"<<student[i].sum;
		cout<< "	bignumer :"<<student[i].bignumer<<endl;
	}
	return 0;
}