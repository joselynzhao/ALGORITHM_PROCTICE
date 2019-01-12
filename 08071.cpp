#include <iostream>
#define N 1000000
using namespace std;
int main(){
    long long a[N];
    long long max=-1000000,temp;
    int c=0;
    while(scanf("%d",&a[c])!=EOF){};
    for(int i=0;a[i]!='\0';i++){
        for(int j=i+1;a[j]!='\0';j++){
            for(int k=j+1;a[k]!='\0';k++){
                temp = i*j*k;
                if(temp>max)max=temp;
            }
        }
    }
    cout<<max<<endl;
    
}