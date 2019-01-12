#include <iostream>
using namespace std;
void mysort1(int a[],int begin,int end){
	if(begin!=end){
		for(int i=begin;i<=end;i++){
			int min=i;
			for(int j=i+1;j<=end;j++){
				if(a[j]<a[min])min=j;
			}
			if(min!=i){
				int temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	cout<<"n:"<<n<<endl;
	int a[1000];
//	cout<<"hello world"<<endl;
	for(int i=0;i<n;i++){
	 //cin>>a[i];
		cout<<"hello world"<<endl;
		scanf("%d",&a[i]);
	}
	cout<<"hello 3"<<endl;
	int b[1000]={0};
	b[0]=1;
	for(int i=1;i<n;i++){
		//int f=0;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){  //与前面的数相同
				a[i]=-1;
				b[j]++;
				break;
			}
		}
		if(a[i]!=-1){
			b[i]++;
		}
	}
	for(int i=0;i<n;i++){
		int mdes=i;
		for(int j=i+1;j<n;j++){
			if(b[j]>b[mdes]){
				mdes = j;
			}
		}
		if(mdes!=i){
			int temp1= a[i],temp2=b[i];
			a[i]=a[mdes];
			b[i]=b[mdes];
			a[mdes]=temp1;
			b[mdes]=temp2;
		}
	}
	cout<<"hello 4"<<endl;
	int num=0;
	for(int i=0;b[i]!=0;i++){
		num++;
	}
	cout<<"num:"<<num<<endl;
	int begin,end;
	end = -1;
	while(1){
		begin = end +1;
		if(begin==num-1)break;
		int i=begin+1;
		for(;b[i]==b[i-1];i++){	
		}
		end=i-1;
		mysort1(a,begin,end);
	}
	cout<<"hello 5"<<endl;//段错误。

	// for(int i=1;b[i]!=0;){
	// 	int beg=i-1,end;
	// 	for(int j=i;;j++){
	// 		if(b[j]!=b[j-1]){
	// 			end = j-1;
	// 		}
	// 	}
	// 	cout<<"hello 5"<<endl;
	// 	if(beg!=end){
	// 		for(int i=beg;i<=end;i++){
	// 			int minindex=i;
	// 			for(int j=beg+1;j<=end;j++){
	// 				if(a[j]<a[minindex]){
	// 					minindex = j;
	// 				}
	// 			}
	// 			if(minindex != i){
	// 				int temp = a[i];
	// 				a[i]=a[minindex];
	// 				a[minindex]=temp;
	// 			}
	// 		}
	// 	}
	// 	i=end+1;
	// }
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;

	return 0;
}