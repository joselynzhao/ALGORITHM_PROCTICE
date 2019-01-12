#include <stdio.h>
struct window{
	int id;
	int lx;
	int ly;
	int rx;
	int ry;
	int order;
}*win,*fwin,*order;

struct point{
	int x;
	int y;
}*poi,*fpoi;

int main(){
	int num;
	scanf("%d",&num);
	if(num<=0 || num >10 ){
		printf("input error\n");
		return 0;
	}
	int i;
	int *show;
	fwin = win;  // the same address
	for(i=0;i<num;i++){ //get inf for num
		order[i]=&win;
		scanf("%d%d%d%d%d",&win->id,&win->lx,&win->ly,&win->rx,&win->ry);
		if(win->lx>=win->rx || win->ly >= win->ry){
			printf("input error\n");
			return 0;
		}
		win++; // point forahead
	}

	int tn;
	scanf("%d",&tn);
	if(tn<=0 || tn >20 ){
		printf("input error\n");
		return 0;
	}
	int j;
	fpoi = poi;
	for(j=0;j<tn;j++){
		scanf("%d%d",&poi->x,&poi->y);
		if(poi->x<0 || poi->x>1000 || poi->y<0 ||poi->y>1000){
			printf("input error\n");
			return 0;
		}
		poi++;
	}
	// main body
	//win = fwin;
	poi = fpoi;
	for(i=0;i<tn;i++){ // each point
		for(j=0;j<num;j++){ //each window
			if() {//this point is in the window
				//fwin=win; // set it as first

			}
			win++;
		}
	}

	return 0;
}