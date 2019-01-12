#include <iostream>
#define N 53
#define M 8
using namespace std;
int main(){
	int n,m;
	double a[N][M];
	while(scanf("%d%d",&n,&m)!=EOF){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%lf",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++){//计算学生平均成绩
			a[i][m]=0;
			for(int j=0;j<m;j++){
				a[i][m]+=a[i][j];
			}
			//cout<<"!!!im"<<a[i][m]<<" "<<m<<endl;
			a[i][m]=a[i][m]/m;
			//cout<<"!!!"<<a[i][m]<<endl;
		}

		for(int i=0;i<m;i++){ //计算课程平均成绩
			a[n][i]=0;
			for(int j=0;j<n;j++){
				a[n][i]+=a[j][i];
			}
			//cout<<"!!!ni"<<a[n][i]<<" "<<n<<endl;
			a[n][i]=a[n][i]/n;
			//cout<<"!!!"<<a[n][i]<<endl;

		}
		
		int count=0;
		for(int i=0;i<n;i++){
			a[i][m+1]=1;
			for(int j=0;j<m;j++){
				if(a[i][j]<a[n][j]){
					a[i][m+1]=0;
					break;
				}
			}
			count+=a[i][m+1];
		}
		// cout<<"_______--------------------------"<<endl;
		// for(int i=0;i<=n;i++){
		// 	for(int j=0;j<=m+1;j++){
		// 		printf("%.0f ",a[i][j]);
		// 	}
		// 	cout<<endl;
		// }


		for(int i=0;i<n-1;i++){
			printf("%.2lf ",a[i][m]);
		}
		printf("%.2lf\n",a[n-1][m]);

		for(int i=0;i<m-1;i++){
			printf("%.2lf ",a[n][i]);
		}
		printf("%.2lf\n",a[n][m-1]);
		cout<<count<<endl<<endl;

		//注意输出格式和数据类型 double



	}
	return 0;
}