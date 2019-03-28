#include <iostream>
using namespace std;
int in_array(int a[],int k){
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==k){
			return i; //返回位置
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int a[1000][11];
	for(int i=0;i<n;i++){ //n篇文章
		cin>>a[i][0];//获得第i篇文章的 标签数量
		for(int j=1;j<=a[i][0];j++){
			cin>>a[i][j];
		}
	}

	int label[1000];
	int total_label = 0;
	int num_label[1000]={0};
	for(int i=0;i<n;i++){
		for(int j=1;j<=a[i][0];j++){
			int site = in_array(label,a[i][j]);
			if(site==-1){
				label[total_label]=a[i][j];
				num_label[total_label]++;
				total_label++;
			}
			else{
				num_label[site]++;
			}
		}
	}

	cout<<"---------------------------------"<<endl;
	for(int i=0;i<total_label;i++){
		cout<<label[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<total_label;i++){
		cout<<num_label[i]<<" ";
	}
	cout<<endl;
	cout<<"---------------------------------"<<endl;

	int max = 0;
	int max_index[1000];
	int num_max = 0;
	for(int i=0;i<total_label;i++){
		if(num_label[i]>max){
			max = num_label[i];
			num_max = 1;
			max_index[num_max]=i;
		}
		else if(num_label[i]==max){
			num_max++;
			max_index[num_max]=i;
		}
	}

	cout<<"---------------------------------"<<endl;
	cout<<"max:"<<max<<endl;
	cout<<"num_max:"<<num_max<<endl;
	for(int i=1;i<=num_max;i++){
		cout<<max_index[i]<<" ";
	}
	cout<<endl;
	cout<<"---------------------------------"<<endl;

	if(num_max == 1){
		int index = max_index[1];
		cout<<label[index]<<" "<<max<<endl;
	}
	else{  // 此时需要比较大小
		int max_label = 0;
		for(int i=1;i<=num_max;i++){
			if(label[max_index[i]]>max_label)
				max_label = label[max_index[i]];
		}
		cout<<max_label<<" "<<max<<endl;
	}


	
	return 0;
}
