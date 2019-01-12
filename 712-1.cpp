#include <iostream>
//2000
using namespace std;
void output(char arr[3]){
	//char a[3];
	//char b;
	if(arr[0]>=arr[1] && arr[1]>=arr[2])
		printf("%c %c %c\n",arr[2],arr[1],arr[0]);
	if(arr[0]>=arr[2] && arr[2]>=arr[1])
		printf("%c %c %c\n",arr[1],arr[2],arr[0]);
	if(arr[1]>=arr[0] && arr[0]>=arr[2])
		printf("%c %c %c\n",arr[2],arr[0],arr[1]);
	if(arr[1]>=arr[2] && arr[2]>=arr[0])
		printf("%c %c %c\n",arr[0],arr[2],arr[1]);
	if(arr[2]>=arr[1] && arr[1]>=arr[0])
		printf("%c %c %c\n",arr[0],arr[1],arr[2]);
	if(arr[2]>=arr[0] && arr[0]>=arr[1])
		printf("%c %c %c\n",arr[1],arr[0],arr[2]);
}
int main(){
	char arr[3];
	while (scanf("%s",arr)!=EOF){
		output(arr);
	}
	return 0;
}

// #include <stdio.h>
//  int main()
//  {
//  char a,b,c,d,x,y,z;
//  	  while(scanf("%c%c%c%c",&a,&b,&c,&d) != EOF)
//        {
//          x=a<b?a:b;	
//          x=x<c?x:c;
//          z=a>b?a:b;
//          z=z>c?z:c;
//          y=a+b+c-x-z;
//          printf("%c %c %c\n",x,y,z);
//        }
//  }