#include <iostream>
using namespace std;
int main(){
	double num;
	while(cin>>num){
		if(num<0){
			num = 0 -num;
		}
		printf("%.2lf\n",num );
	}
	return 0;
}


