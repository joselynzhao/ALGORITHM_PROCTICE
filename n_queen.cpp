#include<iostream>
#include<stdlib.h>

using namespace std;
#include <time.h>
#include <math.h>
#define QUEEN_NUM 14 //皇后的个数，时间允许范围内可以等于16
int position[QUEEN_NUM];//每个皇后在每一行的位置
static int all_queen = (1<<QUEEN_NUM)-1; //QUEEN_NUM个全为1的二进制数
static int sum = 0;   //sum是用来记录什么的呢？

// 假设前t-1行中没有冲突的前提下，第t行放置的位置是否冲突
bool check(int t){
	for(int i=0;i<t;i++){
		//如果行-行 == 列-列 （在一条斜对角上） 或者 同一列
		if(abs(t-i)==abs(position[i]-position[t])|| position[i]==position[t])
			return false;
	}//前t-1行遍历
	return true;
}
//才有回溯的n皇后问题
void n_queen_backtrace(int row){ //在row行放置一个皇后
	if(row == QUEEN_NUM){  //说明已经放完了
		sum++;
		return ;
	}
	for(int i=0;i<QUEEN_NUM;i++){ //row行的n列中选择一个位置
		position[row]=i; //先把它放在i位置上，再检查是否合适
		if(check(row)){  //放置成功，考虑后面的行
			n_queen_backtrace(row+1);
		}
	}
}

// 采用位运算的n皇后问题
// row、ld和rd，分别表示在纵列和两个对角线方向的限制条件下这一行哪些地方不能放。
void n_queen_bit(int row,int ld,int rd){
	//纵列往下看排满了1表示放满了皇后
	if(row!=all_queen){ //没有满
		//pos表示当前行而已放置皇后的位置
		int pos = all_queen & ~(row|ld|rd); //必须要&all_queen,否则是32 皇后
		while(pos!=0){  // 有位置可以放皇后
			int p=pos & -pos;
			pos-=p;
			n_queen_bit(row+p,(ld+p)<<1,(rd+p)>>1);

		}
	}
	else{sum++;}
}
int main(){
	clock_t start,end;
	srand(time(NULL));
	start = clock();
	n_queen_backtrace(0);
	end = clock();
	printf("backtrack n queen has %d solutions,time %f!\n",sum,(end-start)*0.1/CLOCKS_PER_SEC );

	sum = 0;
	start = clock();
	n_queen_bit(0,0,0);
	end = clock();
    printf("bit n queen has %d solutions,time %f!\n",sum,(end-start)*0.1/CLOCKS_PER_SEC );
    return 0;
}