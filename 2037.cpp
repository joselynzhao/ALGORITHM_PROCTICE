#include <iostream>
using namespace std;
void fun_sort(int a[],int b[],int c[],int len){  //根据a来排序从小到大排序
	for(int i=0;i<len;i++){
		int mindex=i;
		for(int j=i+1;j<len;j++){
			if(a[j]<a[mindex])mindex=j;
		}
		if(mindex!=i){
			int temp1=a[i],temp2=b[i],temp3=c[i];
			a[i]=a[mindex];
			b[i]=b[mindex];
			c[i]=c[mindex];
			b[mindex]=temp2;
			a[mindex]=temp1;
			c[mindex]=temp3;
		}
	}
}
int main(){
	int n;//n个节目
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		int ts[n],te[n],len[n];
		for(int i=0;i<n;i++){
			cin>>ts[i];
			cin>>te[i];
			len[i]=te[i]-ts[i];
		}
		// for(int i=0;i<n;i++){
		// 	cout<<ts[i]<<"-"<<te[i]<<" len:"<<len[i]<<endl;
		// }
		fun_sort(len,ts,te,n);
		// cout<<"-----------------------------after sort:"<<endl;
		// for(int i=0;i<n;i++){
		// 	cout<<ts[i]<<"-"<<te[i]<<" len:"<<len[i]<<endl;
		// }
		//int min=ts[0],max=te[0],count=1;
		int max=0;
		for(int i=0;i<n;i++){
			if(te[i]>max) max = te[i];
		}
	//	cout<<"max time:"<<max<<endl;
		int count =0;
	    int	seg[max+1];
	    for(int i=0;i<=max;i++){  //初始化seg
	    	seg[i]=0;
	    }
		for(int i=0;i<n;i++){  //对每个节目考虑，是否能加入
			int f=1;
			//cout<<"ts-te:"<<ts[i]<<"-"<<te[i]<<endl;
			for(int k=ts[i];k<te[i];k++){
				if(seg[k]==1){
					f=0;
					break;
				}
			}
			if(f){
				count++;
				//cout<<"set seg!   "<<ts[i]<<"-"<<te[i]<<endl;
				for(int k=ts[i];k<te[i];k++){
					seg[k]=1;
				}
			}
			// cout<<"seg:"<<i<<" " ;
			// for(int m=0;m<=max;m++){
			// 	cout<<seg[m]<<" ";
			// }
			// cout<<endl;
		}
		cout<<count<<endl;

		// for(int i=1;i<n;i++){
		// 	if(ts[i]>=max){
		// 		max=te[i];
		// 		count++;
		// 	}
		// 	if(te[i]>=min){
		// 		min=ts[i];
		// 		count++;
		// 	}
			// cout<<"min_max:"<<min<<"-"<<max<<endl;
			// cout<<count<<endl;

		// }



	}


	return 0;
}