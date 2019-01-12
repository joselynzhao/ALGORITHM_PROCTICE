#include <iostream>
#include <string.h>
#define N 52
using namespace std;
int judge(char a){
	if(a=='_'||(a>='A' && a<='Z')||(a>='a'&&a<='z')||(a>='0'&&a<='9')) return 1;
	else return 0;
}
int main(){
	int n;
	char a[N];
	scanf("%d",&n);
	getchar();  //作用什么呢？
	for(int i=0;i<n;i++){
		gets(a);  //可以获取空格
		// printf("%s\n", a);
		// for(int i=0;a[i]!='\0';i++){
		// 	cout<<a[i];
		// }
		// cout<<endl;
		int f=1;
		//if(a=="main")f=0;
		if(a[0]>='0'&&a[0]<='9') f=0;
		else for(int j=0;a[j]!='\0';j++){
			//cout<<"a[i]"<<a[j]<<endl;
			if(judge(a[j])==0){
				f=0;
				//cout<<"f=0"<<endl;
				break;
			}
		}
		if(f)printf("yes\n");
		else printf("no\n");

	}	
	return 0;
}

//提交之前，先测试，一定 不要有多余的输出。

// #include <stdio.h>
// int main(){
// 	int n,i,lag;
// 	char a[50];
// 	scanf("%d",&n);
// 		getchar();
// 		while(n--){
// 			lag=0;
// 			gets(a);//为什么用scanf输入字符串时，遇到空格就结束，后面的字符不算 
// 			if((a[0]>='a' && a[0]<='z')||(a[0]>='A' && a[0]<='Z')|| a[0]=='_'){
// 				for(i=1;a[i]!='\0';i++){
// 					if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')|| a[i]=='_' || (a[i]>='0' && a[i]<='9'))
// 					  lag=1;
// 					else{
// 						lag=2;
// 						break;
// 					}
// 				}
// 				if(lag==1)
// 				  printf("yes\n");
// 				else
// 				  printf("no\n");
// 			}else{
// 			  printf("no\n");	
// 			} 
// 		}
// 	return 0;
// }