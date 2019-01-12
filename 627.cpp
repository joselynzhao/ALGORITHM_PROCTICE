#include <iostream>
using namespace std;
void mysort(int *array,int n ){
	int midle = n/2;
	
}
int main(){
	//sort
	int array[10]={2,35,464,75,3,67,32,99,563,89};

	int i;
	for(i=0;i<10;i++){
		cout<<array[i]<<" ";
	}
	mysort(array,10);
	for(i=0;i<10;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<"hello!"<<endl;
	return 0;
}
