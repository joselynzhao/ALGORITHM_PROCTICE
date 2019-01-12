#include <iostream>
#include <string>
using namespace std;

int main(){
	string  a,b;
	while(cin>>a>>b){

		if(a==b)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}