#include <iostream>
using namespace std;
//斐波那契数列
//因为每一步都只能走一步或者两步。 M阶可以有所有到M-1阶的可行方案加上一步达到，和所有到M-2阶的可行方案加上两步达到
//所以是斐波拉契数列
int main(){
	int fb[42];
	fb[0]=1;fb[1]=1;
	for(int i=2;i<42;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		printf("%d\n",fb[m-1]);

	}
	return 0;
}

// class note{
// public:
// 	int value;
// 	note leftnote;
// 	note rightnote;
// 	void setson(){
// 		leftnote.value=1;
// 		rightnote.value=2;
// 	}
// }
// int main(){
// 	note root;
// 	for(int)

// 	return 0;
// }

// #include<cstdio>

// int main()
// {
//     int N, m, i, f1, f2;
//     scanf("%d", &N);
//     while(N--)
//     {
//         scanf("%d", &m);
//         f1 = f2 =1;
//         for(i = 3; i <= m; i++)
//         {
//             f2 = f2 + f1;
//             f1= f2 - f1;
//         }
//         printf("%d\n", f2);
//     }
//     return 0;
// }


// #include<stdio.h>
// #define N n
// int main()
// {
//     int n,m,i,b;
//     int fab[42]={1,1};
//     int a;
//     for(i=2;i<42;i++)
//         fab[i]=fab[i-1]+fab[i-2];//先把所用数据储存好，就不会超时啦
//     scanf("%d",&n);
//     while(n--)
//     {
//         scanf("%d",&a);
//         printf("%d\n",fab[a-1]);
//     }

// }