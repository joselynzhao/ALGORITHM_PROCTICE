#include <iostream>
using namespace std;
bool ist(double a[3]){
	if(a[0]+a[1]<=a[2]||a[0]+a[2]<=a[1]||a[1]+a[0]<=a[2]||a[1]+a[2]<=a[0]||a[2]+a[1]<=a[0]||a[2]+a[0]<=a[1])
		return false;
	else return true;
}
int main(){
	int n;
	cin>>n;
	double a[3];
	for(int i=0;i<n;i++){
		cin>>a[0]>>a[1]>>a[2];
		if(ist(a))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}