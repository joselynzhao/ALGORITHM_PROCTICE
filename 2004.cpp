#include <iostream>
using namespace std;
int main(){
	double score;
	while(cin>>score){
		if(score>=90&&score <=100)
			printf("A\n" );
		else if(score<90&&score >=80)
			printf("B\n" );
		else if(score<80&&score >=70)
			printf("C\n" );
		else if(score<70&&score >=60)
			printf("D\n" );
		else if(score<60&&score >=0)
			printf("E\n" );
		else printf("Score is error!\n");
	}
	return 0;
}