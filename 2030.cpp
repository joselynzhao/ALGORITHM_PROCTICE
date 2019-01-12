#include <iostream>
#define N 100001
using namespace std;

int main(){
	//if(ishw("zhaojing"))printf("huiwen\n");
	int n;
	char a[N];
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		int out=0;
		gets(a);
		//printf("a= %s\n", a);
		for(int k=0;a[k]!='\0';k++){
			if(a[k]<0)out++;

		}
		cout<<out/2<<endl;
	}
	return 0;
}


// #include<stdio.h>
// #include<string.h>
// #include<algorithm>
// using namespace std;
// char a[10005];
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     getchar();
//     while(n--)
//     {
//         int s=0;
//         gets(a);
//         int l=strlen(a);
//         for(int i=0;i<l;i++)
//         {
//             if(a[i]<0)
//                 s++;
//         }
//         printf("%d\n",s/2);
//     }
//     return 0;
// }