#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	clock_t start_time = clock();
	//----------------------------------
	int sum=0;
	for(int i=0;i<100;i++){
		sum+=i;
		//cout<<"this is a test, it can tell how long it has run."<<endl;
	}
	cout<<"sum ="<<sum<<endl;
	//------------------------------------
	clock_t end_time = clock();
	cout<< "Running time is: "<<static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC*1000<<"ms"<<endl;//输出运行时间

	clock_t start_time1 = clock();
	//----------------------------------
	int n = 100;
	sum = 0;
	while(n){
		sum += n;
		n--;
	}
		
	cout<<"sum ="<<sum<<endl;
	//------------------------------------
	clock_t end_time1 = clock();
	cout<< "Running time is: "<<static_cast<double>(end_time1-start_time1)/CLOCKS_PER_SEC*1000<<"ms"<<endl;//输出运行时间
	return 0;
}