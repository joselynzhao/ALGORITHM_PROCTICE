#include <iostream>
#include <string>
#include <stdlib.h>

#define M 100

using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	string *p;
	p = (string *)malloc(sizeof(string)*(m+n));
	for(int i=0;i<=m+n;i++){
		getline(cin,p[i]);
	}

	//确定模板
	//string *real;
	// real = (string *)malloc(sizeof(string)*n);
	// for(int i=m;i<m+n;i++){
	// 	for(int j=0;p[i][j]!=' ';j++){
	// 		real[j]=p[i][j];
	// 	}
	// 	// cout<<"real: "<<real<<endl;
	// }
	

	cout<<"---------------result-------------------"<<endl;
	for(int i=0;i<=m+n;i++){
		cout<<p[i]<<endl;
	}
	cout<<"over"<<endl;

	return 0;
}

// # include<iostream> # include<vector> # include<string> # include<map> 
// using namespace std; int main(){  int lineNum=0,varNum=0;  vector<string> content;  string line;  map<string,string> varMap;  cin>>lineNum>>varNum;  cin.ignore();  for(int i=0;i<lineNum;i++){   getline(cin,line);   content.push_back(line);  }  for(int i=0;i<varNum;i++){   getline(cin,line);   int pos = line.find(" ");   varMap.insert(map<string,string>::value_type(line.substr(0,pos),line.substr(pos)));  }  for(int i=0;i<lineNum;i++){   int pos =0,pos1,pos2; 









//   do{     pos1=content[i].find("{{",pos);     pos2 = content[i].find("}}",pos1);    if(pos1>=0 && pos2>=0){     string var = content[i].substr(pos1+3,pos2-pos1-4);     if(varMap.count(var)){      string result = varMap[var].substr(2,varMap[var].length()-3);      content[i].replace(pos1,var.length()+6,result);     }else{      content[i].replace(pos1,var.length()+6,"");     }     pos=pos1+var.length();    }else{     pos = content[i].length();    }   }while(pos<content[i].length());   cout<<content[i]<<endl;  } 
//  return 0; 
// } 