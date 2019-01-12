#include <stdio.h>
#include <iostream>
#define WN 10
#define PN 20

struct window{
	int id;
	int lx;
	int ly;
	int rx;
	int ry;
	//int order;
}win[WN];
struct point{
	int x;
	int y;
}poi[PN];

void tem_ord(int t[],int o[]){
	int i;
	for(i=0;i<WN;i++){
		t[i] = o[i];
	}
}
bool init(struct window w,struct point p){
	if(p.x>=w.lx && p.x <= w.rx && p.y >= w.ly && p.y <= w.ry)
		return true;
	else return false;
}
int main(){
	int num;
	int order[WN],temp[WN]; //用order来修改，用temp来记录
	scanf("%d",&num);
	if(num<=0 || num >10 ){
		printf("input error\n");
		return 0;
	}
	int i;
	for(i=0;i<num;i++){ //get inf for num
		scanf("%d%d%d%d%d",&win[i].id,&win[i].lx,&win[i].ly,&win[i].rx,&win[i].ry);
		if(win[i].lx>=win[i].rx || win[i].ly >= win[i].ry){
			printf("input error\n");
			return 0;
		}
		order[i]=i;
		//win[i].order = i; //set the order
	}
	tem_ord(temp,order);

	int tn;
	scanf("%d",&tn);
	if(tn<=0 || tn >20 ){
		printf("input error\n");
		return 0;
	}
	int j;
	for(j=0;j<tn;j++){
		scanf("%d%d",&poi[j].x,&poi[j].y);
		if(poi[j].x<0 || poi[j].x>1000 || poi[j].y<0 ||poi[j].y>1000){
			printf("input error\n");
			return 0;
		}
	}
	// main bod
	for(i=0;i<tn;i++){ // each point
		for(j=0;j<num;j++){    // count the number
			if(init(win[temp[j]-1],poi[i])){                // juge if the point in the window
				order[0] = win[temp[j]].id;
				break;
			}
			order[j+1]=temp[j];
		}
		tem_ord(temp,order);
	}
	for(i=0;i<num;i++){
		printf("%d ",order[i]);
	}
	return 0;
}