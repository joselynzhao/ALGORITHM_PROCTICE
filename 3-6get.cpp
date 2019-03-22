// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

bool insusu(int n){
	if(n==2){
    	return true;
    }
    else{
    	for(int i=2;i<n/2+1;i++){
    		if(n%i==0){
    			return false;
    		}
    	}
   		return true;
    }
}

int main()
{
    int n, k;
    // 请在此添加代码，输入n和k，并输出n以内k个素数以及它们的和
    /********** Begin *********/
    cin>>n>>k;
    int sum = 0;
    int j = 1;
    for(int i = n;i>1;i--){
    	if(insusu(i)){
    		cout<<i<<" ";
    		sum += i;
    		j++;
    	}
    	if(j>k)
    		break;
    }
    cout<<sum;

    /********** End **********/

    return 0;
}