// 错排d[n] = (n-1) * (d[n-1] + d[n-2])
#include <iostream>
using namespace std;

int main(){
	double d[23];
	for(int i=1;i<23;i++){
		d[i]=1;
		for(int j=1;j<=i;j++){
			d[i]=d[i]*j;
		}
	}
	double a[23];
	a[1]=0;
	a[2]=1;
	for(int i=3;i<23;i++){
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	}
	int c;
	cin>>c;
	while(c--){
		int n;
		cin>>n;
		printf("%.2lf",(a[n]/d[n])*100);
		cout<<"%"<<endl;
	}
	return 0;
}


// #include<stdio.h>
// _int64 jiechen(int i)
// {
// 	int j;
// 	_int64 score=1;
// 	for(j=1;j<=i;j++)
// 		score=score*j;
// 	return score;
// }
// int main()
// {
// 	int n,m,i,j;
// 	_int64 score;
// 	_int64  s[1000]={0};
// 	s[1]=0;
// 	s[2]=1;
// 	for(i=3;i<=20;i++)
// 	{
// 		s[i]=(i-1)*(s[i-1]+s[i-2]);
// 	}
// 	while(scanf("%d",&n)!=EOF)
// 	{
// 		while(n--)
// 		{
// 			scanf("%d",&m);
// 			score=jiechen(m);
// 			printf("%.2lf%%\n",1.0*s[m]/score*100);
// 		}

// 	}
// 	return 0;
// }



// 本题用到了错排公式！！
// 再一次提醒了我数学的重要性！
// 好吧说正题！
// 错排公式：
// 当n个编号元素放在n个编号位置，元素编号与位置编号各不对应的方法数用D(n)表示，那么D(n-1)就表示n-1个编号元素放在n-1个编号位置，各不对应的方法数，其它类推.
// 第一步，把第n个元素放在一个位置，比如位置k，一共有n-1种方法；
// 第二步，放编号为k的元素，这时有两种情况：
// ⑴把它放到位置n，那么，对于剩下的n-1个元素，由于第k个元素放到了位置n，
// 剩下n-2个元素就有D(n-2)种方法；⑵第k个元素不把它放到位置n，
// 这时，对于这n-1个元素，有D(n-1)种方法；
// 综上得到
// D(n) = (n-1) [D(n-2) + D(n-1)]
// 特殊地，D(1) = 0, D(2) = 1.
// 好吧我承认我是经过N多次演算才懂得这个公式的！
// 高数不好的孩子伤不起啊！
// 因为（可能是）保留两位小数的原因后面的概率都一样啦！
// 所以我无耻地改成了九次循环！（一而货偷笑中……）
// 下面贴代码！

// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     double a[10];
//     a[1]=0;
//     a[2]=1;
//     for(int i=3 ;i<10 ;i++)
//         a[i] = (i-1)*(a[i-1]+a[i-2]);
//     double b[10];
//     for(int i=1; i<10; i++) {
//         b[i]=1;
//         for(int j=1; j<=i; j++){

//             b[i]=b[i]*j;
//         }
//     }

//     int n,t;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n;
//         if(n>=9)n=9;
//         cout<<fixed<<setprecision(2)<<a[n]/b[n]*100<<'%'<<endl;
//     }

//     return 0;
// }