#include <iostream>
using namespace std;

int main(){
	float sum_gpa = 447.5;
	float sum_score=125;
	float score;
	float  gpa;
	float out;
	while(scanf("%f%f",&score,&gpa)!=EOF){
		float one_out = score*gpa;
		sum_score = sum_score+score;
		sum_gpa+=one_out;
		out = sum_gpa/sum_score;
		printf("GPA:%f\n",out);
	}
	return 0;
}