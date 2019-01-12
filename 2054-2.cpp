#include <iostream>
#define M 100000
using namespace std;

int main()
{
	char str1[M],str2[M];
	while(scanf("%s%s",str1,str2)!=EOF){
		int f=1;
		for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++){
			if(str1[i]!=str2[i]){
				f=0;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(f)printf("YES\n");
	}
	return 0;
}