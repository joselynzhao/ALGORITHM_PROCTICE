#include <iostream>
using namespace std;
int inside(double x,double y,double x1,double x2,double y1,double y2){
	if(x<=x2 && x>=x1 && y<=y2 && y>=y1 ) return 1;
	else return 0;

}
double area(double x1,double y1,double x2,double y2){
	if(x2<x1){
		double temp=x2;
		x2=x1;
		x1=temp;
	}
	if(y2<y1){
		double temp=y2;
		y2=y1;
		y1=temp;
	}
	return (x2-x1)*(y2-y1);
}
int main(){
	double x[5],y[5];
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&x[4],&y[4])!=EOF){
		int f[5];//检查是否在矩形
		f[1]=inside(x[1],y[1],x[3],x[4],y[3],y[4]);
		f[2]=inside(x[2],y[2],x[3],x[4],y[3],y[4]);
		f[3]=inside(x[3],y[3],x[1],x[2],y[1],y[2]);
		f[4]=inside(x[4],y[4],x[1],x[2],y[1],y[2]);
		int sumf=0;
		for(int i=1;i<5;i++){
			sumf+=f[i];
		}
		cout<<sumf<<endl;
		double out;
		if(sum==0)  //不相交
			out = 0;
		if(sum==4){//内嵌，分别求其面积求最小值
			double area1,area2;
			area1 = area(x[1],y[1],x[2],y[2]);
			area2 = area(x[3],y[3],x[4],y[4]);
			out = area1 > area2 ? area1 : area2; 
		} 
		if(sum==2){
			int sf1=f[1]+f[2];
			int sf2=f[3]+f[4];
			if(sf1 == sf2) {
				double mx1,mx2,my1,my2;
				if(f[1]==1) {
					mx1=x[1];
					my1=y[1];
				}
				else {
					mx1=x[2];
					my1=y[2];
				}
				if(f[3]==1) {
					mx2=x[3];
					my2=y[3];
				}
				else {
					mx2=x[4];
					my2=y[4];
				}
				out = area(mx1,my1,mx2,my2);
			}
			if(sf1==2){
				if(f[1]==1){

				}

			}


		}

			


	}
	return 0;
}