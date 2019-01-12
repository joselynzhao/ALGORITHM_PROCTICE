#include <iostream>
#include <math.h>
#define N 12
using namespace std;

// int getlen(char a[N]){
// 	int i,len = 0;
// 	for(i=0;a[i]!='\0';i++){
// 		len++;
// 	}
// 	return len;
// }

// int getint(char a[N]){
// 	int i,sum=0;
// 	for(i=0;i<getlen(a);i++){
// 		sum+=(a[i]-'0')*pow(10,getlen(a)-1-i);
// 	}
// 	return sum;
// }

int main(){
	//char a[N];
	int i,j;
	int c1,c2,c3;
	int d1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while (scanf("%d/%d/%d",&c1,&c2,&c3)!=EOF){
		int sum =0;
		// for(i=0;i<4;i++){
		// 	b1[i]=a[i];
		// }
		// b1[i]='\0';
		// if(a[7]=='/'){
		// 	for(i=0;i<2;i++){
		// 		b2[i]=a[i+5];
		// 		b3[i]=a[i+8];
		// 	}
		// 	b2[i]='\0';
		// 	b3[i]='\0';
		// }
		// else if(a[6]=='/'){
		// 	b2[0]=a[5];
		// 	b2[1]='\0';
		// 	if(getlen(a)==8){
		// 		b3[0]=a[7];
		// 		b3[1]='\0';
		// 	}
		// 	else {
		// 		for(i=0;i<2;i++){
		// 			b3[i]=a[i+7];
		// 		}
		// 		b3[i]='\0';
		// 	}			
		// }
		// c1=getint(b1);
		// c2=getint(b2);
		// c3=getint(b3);
		// cout<<c1<<" "<<c2<<" "<<c3<<endl;
		if(c2!=1)
			for(i=0;i<(c2-1);i++){
				//cout<<d1[i]<<" ";
				sum+=d1[i]; 
			}
		sum+=c3;
		if(c1%4==0) sum+=1;
		cout<<sum<<endl;
	}	
	return 0;
}

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int year,moon,day;
int month[12] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
while(scanf("%d/%d/%d",&year,&moon,&day)!=EOF)
{
int sum=0;

for(int i=0;i<=moon-1;i++)
{
sum=sum+month[i];
}
sum=sum+day;
if((year%4==0&&year%100!=0)||(year%400==0))
{if(moon>2)sum=sum+1;}
printf("%d\n",sum);
}
return 0;
}