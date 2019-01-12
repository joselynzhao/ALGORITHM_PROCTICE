#include <iostream>
#define N 100
using namespace std;
int main(){
	int n,m;
	int a[N];
	for(int i=0;i<N;i++){
			a[i]=2*(i+1);
		}
	while(scanf("%d%d",&n,&m)!=EOF){
		int count=0,sum=0,avg;
	//	cout<<"hello0"<<endl;
		for(int i=0;i<n;i++){
			if(count==m){
				avg=sum/count;
				printf("%d ",avg);
				count=1;
				sum=0;
			}
			else count++;
			
			sum+=a[i];
			//cout<<"a:"<<a[i]<<" i: "<<i<<" count:"<<count<<" sum:"<<sum<<endl;
			if(i==(n-1)){
				avg=sum/count;
				//cout<<sum<<" "<<count<<endl;
				printf("%d\n",avg);
			}
		}

	}
	return 0;
}