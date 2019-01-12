#include<iostream>
#include<stdlib.h>
using namespace std;
class A{
	int k;
	int m;
 	void printa(){}
//	void printb(){}
};
int main(){
	A a;
    int k =sizeof(A);
    int m=sizeof(int);
    cout<<k<<endl;
    cout<<m<<endl;
    return 0;
}