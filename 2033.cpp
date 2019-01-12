#include <iostream>
#define N 60
using namespace std;
int main(){
	int n;
	cin>>n;
	int ah,am,as,bh,bm,bs;
	for(int i=0;i<n;i++){
		cin>>ah>>am>>as>>bh>>bm>>bs;
		as=as+bs;
		if(as>=N){
			am+=(as/N);
			as=as%N;
		}
		am=am+bm;
		if(am>=N){
			ah+=(am/N);
			am=am%N;
		}
		ah=ah+bh;
		cout<<ah<<" "<<am<<" "<<as<<endl;
	}
	return 0;
}