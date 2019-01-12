#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*有错！*/

bool existin(string s,char a){
	for(int i=0;i<s.length();i++){
		if(s[i]==a)
			return true;
	}
	return false;
}

int main(){
	string s1,s2,s3;
	cout<<"input two strings?"<<endl;
	cin>>s1>>s2;
	int k=0;
	//cout<<"s1.length()"<<s1.length()<<endl;
	for(int i=0 ;i<s1.length();i++){
		if(existin(s2,s1[i])&&(!existin(s3,s1[i]))){
			//cout<<s1[i];
			s3[k] = s1[i];
			k++;
		}
		s3[k]= '\0';
	}
	for(int j=0;j<k;j++){
		cout<<s3[j];
	}
	cout<<endl;
	// cout<<s3[1]<<endl;
	// cout<<s1<<endl<<s2<<endl<<s3;
	cout<<endl<<"hello"<<endl;
//	cout<<<<endl;
	return 0;
}