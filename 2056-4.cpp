#include <iostream>
using namespace std;

void mysort(double a[],int k){
	int min;
	for(int i=0;i<k;i++){
		min=i;
		for(int j=i+1;j<k;j++){
			if(a[j]<a[min])min=j;
		}
		if(min!=i){
			double temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
int main(){
	double x[4],y[4];
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3])!=EOF){
		 double out;
		if((x[0]<=x[2]&&x[1]<=x[2]&&x[0]<=x[3]&&x[1]<=x[3])||(x[0]>=x[2]&&x[1]>=x[2]&&x[0]>=x[3]&&x[1]>=x[3])||(y[0]<=y[2]&&y[1]<=y[2]&&y[0]<=y[3]&&y[1]<=y[3])||(y[0]>=y[2]&&y[1]>=y[2]&&y[0]>=y[3]&&y[1]>=y[3]))
            printf("0.00\n");
		else {  
			mysort(x,4);
			mysort(y,4);
			out = (x[2]-x[1])*(y[2]-y[1]);
		}
		printf("%.2lf\n",out );
	}
	return 0;
}
