#include <iostream>
using namespace std;
int main(){
	char s[55];
	scanf("%s",s);
	int max=0;
	for(int i=0;s[i]!='\0';i++){
		int count=1;
		int j=i+1;
		while(s[j]!=s[j-1]&&s[j]!='\0'){
			count++;
			j++;
		}
		if(count>max)max=count;
	}
	cout<<max<<endl;
	return 0;
}