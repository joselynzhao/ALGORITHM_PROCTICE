#include <iostream>
#define N 103
using namespace std;
int main(){
	int n1,n2;
	while(scanf("%d%d",&n1,&n2)!=EOF){
		if(n1==0 && n2==0)break;
		int a1[N],a2[N];
		for(int i=0;i<n1;i++){
			cin>>a1[i];
		}
		for(int i=0;i<n2;i++){
			cin>>a2[i];
		}
		int k=n1;
		int b[N];
		for(int i=0;i<k;i++){
			b[i]=1;
			for(int j=0;j<n2;j++){
				//cout<<"a1[i]: a2[j]"<<a1[i]<<" "<<a2[j]<<endl;
				if(a1[i]==a2[j]){
					b[i]=0;
					n1--;
					break;
				}
			}
		}
		// for(int i=0;i<k;i++){
		// 	cout<<a1[i]<<" "<<b[i]<<endl;
		// }
		//cout<<"n1:"<<n1<<endl;
		if(n1==0){
			cout<<"NULL"<<endl;
			continue;
		}
		int c[n1],j=0;
		for(int i=0;i<k;i++){
			if(b[i]==1){
				c[j]=a1[i];
				//cout<<"c["<<j<<"]:"<<c[j]<<endl;
				j++;
			}
		}
		//排序
		//int max =a[0];
		for(int i=0;i<n1;i++){
			int mindex = i;
			for(int j=i+1;j<n1;j++){
				if(c[j]<c[mindex]) mindex =j;
			}
			if(mindex!=i){
				int temp=c[i];
				c[i]= c[mindex];
				c[mindex]=temp;
			}
		}
		for(int i=0;i<n1;i++){
			//cout<<c[i]<<" ";
			printf("%d ",c[i]);
		}
		cout<<endl;
		

		// for(int i=0;i<20;i++){
		// 	cout<<b[i]<<" ";
		// }
		// cout<<endl;
		
	}
	return 0;
}