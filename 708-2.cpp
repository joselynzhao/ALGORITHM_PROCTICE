#include <iostream>
#include <stdio.h>
using namespace std;
int minone(int a,int b ){
	return a>b?b:a;
}

int main(){
	int m,s;
	cin>>m>>s;
	//cout<<m<<s;
	int m1=m,s1=s;
	int i;
	for(i = 2;i<minone(m,s);i++){
		if(m1%i ==0 && s1%i ==0){
			m1 = m1/i;
			s1 = s1/i;
		}
		
	}
	cout<<m1<<" "<<s1;
	return 0;
}