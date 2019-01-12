#include <iostream>
using namespace std;
// int main(){
// 	long long x,f,d,p;
// 	cin>>x>>f>>d>>p;
// 	long long day,max_day=0,max_apple=d/p;
// 	for(long long i=0;i<=max_apple;i++){
// 		long long  rest_money = d-(p*i);
// 		long long  rest_apple = f+i;
// 		day = rest_money / x;
// 		long long r=rest_money%x;
// 		if(day>rest_apple){
// 			rest_apple+=r/p;
// 			if(day>rest_apple) day = rest_apple;
// 		}
// 		if(day>max_day)max_day=day;
// 	}	
// 	cout<<max_day<<endl;
// 	return 0;
// }

int main(){
	long long x,f,d,p;
	cin>>x>>f>>d>>p;
	long long must_pay=x+p;
	long long all_money=d+f*p;
	long long day=all_money/must_pay;
	cout<<day<<endl;
	return 0;
}

// 小易为了向他的父母表现他已经长大独立了,他决定搬出去自己居住一段时间。一个人生活增加了许多花费: 小易每天必须吃一个水果并且需要每天支付x元的房屋租金。当前小易手中已经有f个水果和d元钱,小易也能去商店购买一些水果,商店每个水果售卖p元。小易为了表现他独立生活的能力,希望能独立生活的时间越长越好,小易希望你来帮他计算一下他最多能独立生活多少天。 
// 输入描述:
// 输入包括一行,四个整数x, f, d, p(1 ≤ x,f,d,p ≤ 2 * 10^9),以空格分割


// 输出描述:
// 输出一个整数, 表示小易最多能独立生活多少天。

// 输入例子1:
// 3 5 100 10

// 输出例子1:
// 11