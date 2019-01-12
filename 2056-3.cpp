#include <iostream>
using namespace std;
struct  point
{
	double x;
	double y;
	int f;
};
class recteanges{
public:
	double x1;
	double x2;
	double y1;
	double y2;
	double area;
	int sumf;
	point p1;
	point p2;
	point p3;
	point p4;
	void initial(){
		p1.x=x1;
		p1.y=y1;
		p2.x=x2;
		p2.y=y2;
		p3.x=x2;
		p3.y=y1;
		p4.x=x1;
		p4.y=y2;
		area=(y2-y1)*(x2-x1);
	}	
	void getsumf(){
		//cout<<"p.f:"<<p1.f<<" "<<p2.f<<" "<<p3.f<<" "<<p4.f<<endl;
		sumf=p1.f + p2.f + p3.f + p4.f;
		//cout<<"sumf:"<<sumf<<endl;
	}
};
void  inside(point *p,recteanges *r){
		if(p->x<=r->x2 && p->x>=r->x1 && p->y<=r->y2 && p->y>=r->y1) p->f=1;
		else p->f=0;
		//cout<<"p.f:"<<p->f<<endl;
	}
int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF){
		if(x1>x2){
			double temp1=x2;
			double temp2=y2;
			x2=x1;
			x1=temp1;
			y2=y1;
			y1=temp2;
		}
		if(x3>x4){
			double temp1=x4;
			double temp2=y4;
			x4=x3;
			x3=temp1;
			y4=y3;
			y3=temp2;
		}
		recteanges r1,r2;
		r1.x1=x1;
		r1.x2=x2;
		r1.y1=y1;
		r1.y2=y2;
		r2.x1=x3;
		r2.x2=x4;
		r2.y1=y3;
		r2.y2=y4;
		r1.initial();
		r2.initial(); //完成两个矩形的初始化
		//设置f
		inside(&r1.p1,&r2);
		inside(&r1.p2,&r2);
		inside(&r1.p3,&r2);
		inside(&r1.p4,&r2);
		inside(&r2.p1,&r1);
		inside(&r2.p2,&r1);
		inside(&r2.p3,&r1);
		inside(&r2.p4,&r1);

		r1.getsumf();
		r2.getsumf();
		//cout<<"sumf r1 r2:"<<r1.sumf<<" "<<r2.sumf<<endl;
		double out=2;
		if(r1.sumf==r2.sumf){
			if(r1.p1.f==1){
				out = (r2.p2.x-r1.p1.x)*(r2.p2.y-r1.p1.y);
			}
			if(r1.p2.f==1){
				out = (r1.p2.x-r2.p1.x)*(r1.p2.y-r2.p1.y);
			}
			if(r1.p3.f==1){
				out = (r1.p3.x-r2.p4.x)*(r2.p4.y-r1.p3.y);
			}
			if(r1.p4.f==1){
				out = (r2.p3.x-r1.p4.x)*(r1.p4.y-r2.p3.y);
			}
		}
		if(r1.sumf==0 && r2.sumf==2){
			if(r1.x2>=r2.x1 && r1.x2<=r2.x2){
				out = (r2.y2-r2.y1)*(r1.x2-r2.x1);
			}
			else if(r1.x1>=r2.x1 && r1.x1<=r2.x2){
				out = (r2.y2-r2.y1)*(r2.x2-r1.x1);
			}
			else if(r1.y2 >= r2.y1 && r1.y2<=r2.y2){
				out = (r2.x2-r2.x1)*(r1.y2-r2.y1);
			}
			else if(r1.y1 >= r2.y1 && r1.y1 <=r2.y2){
				out = (r2.x2-r2.x1)*(r2.y2-r1.y1);
			}
		}
		if(r1.sumf==2 && r2.sumf==0){
			if(r2.x2>=r1.x1 && r2.x2<=r1.x2){
				out = (r1.y2-r1.y1)*(r2.x2-r1.x1);
			}
			else if(r2.x1>=r1.x1 && r2.x1<=r1.x2){
				out = (r1.y2-r1.y1)*(r1.x2-r2.x1);
			}
			else if(r2.y2 >= r1.y1 && r2.y2<=r1.y2){
				out = (r1.x2-r1.x1)*(r2.y2-r1.y1);
			}
			else if(r2.y1 >= r1.y1 && r2.y1 <=r1.y2){
				out = (r1.x2-r1.x1)*(r1.y2-r2.y1);
			}
		}
		if(r1.sumf==4 && r2.sumf==0){
			out = r1.area;
		}
		if(r1.sumf==0 && r2.sumf==4){
			out = r2.area;
		}
		// cout<<out<<endl;
		printf("%.2lf\n",out );

	}
	return 0;
}