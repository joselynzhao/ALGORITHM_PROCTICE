#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int min,max;
	while(scanf("%d%d",&min,&max)!=EOF){
		if(max<min){
			int temp=min;
			min=max;
			max =temp;
		}
		long int  s1=0,s2=0;
		for(int i=min;i<=max;i++){
			if(i%2!=0) s2+=pow(i,3);
			else s1+=pow(i,2);
		}
		cout<<s1<<" "<<s2<<endl;
	}
	return 0;
}