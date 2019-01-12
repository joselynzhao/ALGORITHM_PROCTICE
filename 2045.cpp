#include <iostream>
using namespace std;
// 排列组合，环形染色问题

// 一般结论为
// 如果有M个颜色，n个区域，可以有如下公式（可以通过数列求和推导）

// 如果最后一个格子可以和第一个相同，则很简单n个格子的染法为3*2^(n-1)种

// 那最后一个格子必须想通只需3*2^(n-1)减去最后一个格子与第一个格子相同的染法种数，而当第一个格子与最后一个格子相同时，恰好为此题n-1个格子时的染法种数。
// 可得出递推r(n) =  3*2^(n - 1) - r(n - 1) 从第三项开始符合递推。
int main(){
	int n;
	double arr[53];
	arr[1]=3;
	arr[2]=6;
	arr[3]=6;
	for(int i=4;i<53;i++){
		arr[i]=arr[i-1]+arr[i-2]*2;
	}
	while(scanf("%d",&n)!=EOF){
		printf("%.lf\n",arr[n]);

	}
	return 0;
}


// #include <cstdio>
// double c[52];
// int main()
// {
//     c[1]=3;
//     c[2]=6;
// 	c[3]=6;
//     for(int i=4; i<52; i++)
//         c[i]=c[i-1]+c[i-2]*2;
//     int M,a,b;
//     while(scanf("%d",&M)!=EOF)
//     {
//         printf("%.lf\n", c[M]);
//     }
//     return 0;
// }