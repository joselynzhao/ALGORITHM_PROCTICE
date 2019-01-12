#include <iostream>
#include <stdlib.h>
using namespace std;
double getmax(double x1,double x2,double x3,double x4){
	// cout<<"1:"<<x1<<endl;
	// cout<<"2:"<<x2<<endl;
	// cout<<"3:"<<x3<<endl;
	// cout<<"4:"<<x4<<endl;
	double temp = x1;
	if(temp<x2)temp=x2;
	if(temp<x3)temp=x3;
	if(temp<x4)temp=x4;
	return temp;
}
int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF){
		double maxx,maxy;
		maxx = getmax(x1,x2,x3,x4)+1;
		maxy = getmax(y1,y2,y3,y4)+1;
		cout<<"max x-y :"<<maxx<<"-"<<maxy<<endl;
		double **a;
		a=(double **)malloc(sizeof(double)*maxy*maxx);
		for(int i=0;i<=maxy;i++){  //y fangxiang
			a[i]=(double *)malloc(sizeof(double)*maxx);
		}  //动态二维数组建好
		//初始化赋值
		for(int i=0;i<=maxy;i++){ //y轴循环
			for(int j=0;j<=maxx;j++){ //x轴循环
				a[i][j]=0;
			}
		}
		//显示
		cout<<"------------------xianshi-----------------"<<endl;
		for(int i=maxy;i>=0;i--){ //y轴循环
			for(int j=0;j<=maxx;j++){ //x轴循环
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		for(int i=y1;i<=y2;i++){
			for(int j=x1;j<=x2;j++){
				a[i][j]++;
			}
		}
			//显示
		cout<<"------------------xianshi-----------------"<<endl;
		for(int i=maxy;i>=0;i--){ //y轴循环
			for(int j=0;j<=maxx;j++){ //x轴循环
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		for(int i=y3;i<=y4;i++){
			for(int j=x3;j<=x4;j++){
				a[i][j]++;
			}
		}
				//显示
		cout<<"------------------xianshi-----------------"<<endl;
		for(int i=maxy;i>=0;i--){ //y轴循环
			for(int j=0;j<=maxx;j++){ //x轴循环
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		//遍历整个动态数组
		double nx=0,ny=0;
		//int f=1;
		for(int i=maxy;i>=0;i--){ //y轴循环
			for(int j=0;j<=maxx;j++){ //x轴循环
				if(a[i][j]==2){
					ny++;
					break;
				}
			}
		}
		for(int i=maxx;i>=0;i--){ //y轴循环
			for(int j=0;j<=maxy;j++){ //x轴循环
				if(a[i][j]==2){
					nx++;
					break;
				}
			}
		}
		cout<<"nx ny:"<<nx<<" "<<ny<<endl;
	}
	return 0;
}