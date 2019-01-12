// 日期计算
// #include <iostream>
// using namespace std;
// bool isruinian(int n){
// 	if(n%4==0 && n%100!=0)return true;
// 	else if(n%400==0)return true;
// 	else return false;
// }
// int main(){
// 	int a1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
// 	int a2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
// 	int year,day,month,date;
// 	cin>>year;
// 	cin>>day;
// 	if(isruinian(year)){
// 		for(int i=0;i<12;i++){
// 			if(day<=a2[i]){
// 				month =i+1;
// 				date = day;
// 				break;
// 			}
// 			else {
// 				day=day-a2[i];
// 			}

// 		}
// 	}
// 	else {
// 		for(int i=0;i<12;i++){
// 			if(day<=a1[i]){
// 				month =i+1;
// 				date = day;
// 				break;
// 			}
// 			else {
// 				day=day-a1[i];
// 			}

// 		}

// 	}
// 	cout<<month<<endl;
// 	cout<<date<<endl;
// 	return 0;
// }

//优化方案如下
#include <iostream>
using namespace std;
bool isruinian(int n){
	if(n%4==0 && n%100!=0)return true;
	else if(n%400==0)return true;
	else return false;
}
int main(){
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,day,month,date;
	cin>>year;
	cin>>day;
	if(isruinian(year)){
		a[1]=29;
	}
		for(int i=0;i<12;i++){
			if(day<=a[i]){
				month =i+1;
				date = day;
				break;
			}
			else {
				day=day-a[i];
			}

		}
	cout<<month<<endl;
	cout<<date<<endl;
	return 0;
}