
//贪心算法

#include<iostream>
#include<stdlib.h>
using namespace std;
struct pici{
	int b;
	int c;
};

int main(){
	int n,m;
	int a[50001],fa[50001];
	pici p[50001];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		fa[i]=0;
	}
	a[n]=1000000;
	for(int i=0;i<m;i++){
		cin>>p[i].b>>p[i].c;
	}

	// ceshi
	// cout<<"--------------------------"<<endl;
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<n;i++){
	// 	cout<<fa[i]<<" ";
	// }
	// cout<<endl;

	// for(int i=0;i<m;i++){
	// 	cout<<p[i].b<<" "<<p[i].c<<endl;
	// }
	// cout<<"--------------------------"<<endl;
	for(int i=0;i<m;i++){
		int maxindex=i;
		for(int j=i+1;j<m;j++){
			if(p[j].c>p[maxindex].c)
				maxindex= j;
		}
		if(maxindex!=i){
			int tempb=p[maxindex].b;
			int tempc=p[maxindex].c;
			p[maxindex].b = p[i].b;
			p[maxindex].c = p[i].c;
			p[i].b = tempb;
			p[i].c = tempc;
		}
	}



	// // test
 //    for(int i=0;i<m;i++){
	// 	cout<<p[i].b<<" "<<p[i].c<<endl;
	// }
	int sum=0;

	//cout<<"--------------------------"<<endl;
	for(int i=0;i<m;i++){
		// int ff=-1;
		// int j;
		// for(j=0;j<n;j++){ //找到第一个可以装下去的
		// 	if(a[j]>=p[i].b && fa[j]==0){
		// 	    ff=j;
		// 		break;
		// 	}
		// }
		// for(int k=j+1;k<n;k++){
		// 	if(a[k]>=p[i].b && a[k]<a[ff] && fa[j]==0){
		// 		ff=k;
		// 	}
		// }
		// if(ff!=-1){//可以放进去
		// //	cout<<ff<<" "<<p[ff].c<<endl;
		// 	sum+=p[i].c;
		// 	fa[ff]=1;
		// }
		int v1=p[i].b;//把关键值取出来
		int minindex = n;   //a[n]==0
		for(int j=0;j<n;j++){
			if(a[j]>=v1 && fa[j]==0){ //这才可能放得进去
				if(a[j]<a[minindex]) minindex=j;
			}
		}
		if(minindex!=n){
			sum+=p[i].c;
			fa[minindex]=1;
		}

	}
	cout<<sum<<endl;

    return 0;
}


// 某餐馆有n张桌子，每张桌子有一个参数：a 可容纳的最大人数； 有m批客人，每批客人有两个参数:b人数，c预计消费金额。 在不允许拼桌的情况下，请实现一个算法选择其中一部分客人，使得总预计消费金额最大 
// 输入描述:
// 输入包括m+2行。 第一行两个整数n(1 <= n <= 50000),m(1 <= m <= 50000) 第二行为n个参数a,即每个桌子可容纳的最大人数,以空格分隔,范围均在32位int范围内。 接下来m行，每行两个参数b,c。分别表示第i批客人的人数和预计消费金额,以空格分隔,范围均在32位int范围内。


// 输出描述:
// 输出一个整数,表示最大的总预计消费金额

// 输入例子1:
// 3 5 2 4 2 1 3 3 5 3 7 5 9 1 10

// 输出例子1:
// 20