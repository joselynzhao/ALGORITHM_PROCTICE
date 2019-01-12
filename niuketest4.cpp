#include <iostream>
#include <stdlib.h>

using namespace std;
// void swap_array(long long *b,int len){
// 	for(long long i=0;i<(len/2);i++){
// 		long long temp=b[i];
// 		b[i]=b[len-i-1];
// 		b[len-i-1]=temp;
// 	}
// }

// int main(){
// 	long long n;
// 	cin>>n;
// 	//cout<<"n:"<<n<<endl;
// 	long long *a,*b;
// 	a=(long long *)malloc(sizeof(long long)*n);
// 	b=(long long *)malloc(sizeof(long long)*n);
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	long long lenb=0;
// 	for(long long i=0;i<n;i++){ //依次放入序列b
// 		b[lenb]=a[i];
// 		lenb++;
// 		int len=lenb;
// 		for(long long i=0;i<(len/2);i++){
// 			long long temp=b[i];
// 			b[i]=b[len-i-1];
// 			b[len-i-1]=temp;
// 		}
// 	}
// 	//cout<<"lenb:"<<lenb<<endl;
// 	cout<<b[0];
// 	for(long long i=1;i<lenb;i++){
// 		cout<<" "<<b[i];
// 	}
// 	cout<<endl;
// 	return 0;
// }

int main(){
	long long n;
	cin>>n;
	long long *a,*b;
	a=(long long *)malloc(sizeof(long long)*n);
	b=(long long *)malloc(sizeof(long long)*n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=0,max=n-1;
	for(int i=n-1;i>=0;i=i-2){
		//cout<<"max :min ="<<max <<" "<<min<<endl;
		b[min++]=a[i];
		if(i==0)break;
		b[max--]=a[i-1];
		
	}
	//cout<<"max :min ="<<max <<" "<<min<<endl;
	cout<<b[0];
	for(long long i=1;i<n;i++){
		cout<<" "<<b[i];
	}
	cout<<endl;
	return 0;
}

// [编程题] 操作序列
// 时间限制：2秒
// 空间限制：32768K
// 小易有一个长度为n的整数序列,a_1,...,a_n。然后考虑在一个空序列b上进行n次以下操作:
// 1、将a_i放入b序列的末尾
// 2、逆置b序列
// 小易需要你计算输出操作n次之后的b序列。 
// 输入描述:
// 输入包括两行,第一行包括一个整数n(2 ≤ n ≤ 2*10^5),即序列的长度。
// 第二行包括n个整数a_i(1 ≤ a_i ≤ 10^9),即序列a中的每个整数,以空格分割。


// 输出描述:
// 在一行中输出操作n次之后的b序列,以空格分割,行末无空格。

// 输入例子1:
// 4
// 1 2 3 4

// 输出例子1:
// 4 2 1 3