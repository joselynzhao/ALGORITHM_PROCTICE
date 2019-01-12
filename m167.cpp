//线性表训练 - 顺序表
//仅做练习，并未全部实现


#include <iostream>
using namespace std;
#define LIST_SIZE 10   //先行表存储空间的初始分配量
#define LIST_INCREMENT 2 //线性表存储空间的分配增量

struct SqList{
	int *elem;
	int  length;
	int listsize;
}; //定义顺序表结构SqList

void InitList(SqList &L){//创建顺序表
	L.elem = (int * )malloc (LIST_SIZE * sizeof (int));
	if (!L.elem){
		exit(OVERFLOW); //存储分配失败退出程序
	}
	L.length = 0;
	L.listsize = LIST_SIZE; //初始化存储容量
}
bool GetElem(SqList L,int i, int &e){
	//检查是否越界访问
	if(i<1||i>L.length){
			return false;
	}
	e = *(L.elem +i - 1);
	return true;
}

int LocateElme(SqList L,int e){ //在L中查询e 并返回e的下标
	int i = 0;
	int *p;
	p = L.elem; 
	while(i<=L.length && !(*p == e)){
		++i;
		p++;
	}
	if(i<=L.length)
		return i;
	else return 0;
}

bool ListInsert(SqList &L, int i, int e){
	int *newbase, *q, *p;
	int i;
	if(i<1||i>L.length + 1){
		return false;
	}
	if(L.length >= L.listsize){
		if(!(newbase = (int * )realloc (L.elem,(L.listsize + LIST_INCREMENT)* sizeof
			(int)))){
			exit(OVERFLOW);
		}
		L.elem = newbase;
		L.listsize + = LIST_INCREMENT;
	}
	q = L.elem + i -1;
	for (p = L.elem + L.length -1 ;p>= q; --p){
		*(p+1) = *p;
	}
	*q = e;
	++ L.length;
	return true;
}

bool ListDelete(SqList &L, int i, int e){
	int *p,*q;
	if (i<1 || i> L.length)	return false;
	p = L.elem +i -1;
	e = *p;   //被删除的元素赋值给e；
	q = L.elem +L.length -1;
	for(++p;p<= q; ++p){
		*(p-1) = *p;
	}
	L.length--;
	return true;
}
bool LoopCommand(SqList &sqList){
	char command = 0;
	printf("选择操作代号\n:");
	fflush(stdin); //清楚标准输入缓冲区内残留的内容
	command = getchar();
	switch (command){
		case '1' :
		case '2' :

	}
}

int main(){

	return 0;

}