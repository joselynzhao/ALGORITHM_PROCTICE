#include <iostream>
using namespace std;

// 函数extractNum：选出str指向的字符串中的数字，并写回str
// 参数：str-指向字符串
void extractNum(char * str);

int main()
{
    char s[1024];
    // 输入一行字符
    cin.getline(s,1024);
    // 调用extractNum函数，选出数字
    extractNum(s);
    // 输出选出的数字
    cout<<s<<endl;

    return 0;
}

// 函数extractNum：选出str指向的字符串中的数字，并写回str
// 参数：str-指向字符串
void extractNum(char * str)
{
    // 请在此添加代码，实现函数extractNum
    /********** Begin *********/
    char * s = str;
    int lenths = 0;
    while(*s!='\0'){
        s++;
        lenths++;
    }
    s = str;
    // lenths--;
    int isright=1;
    char* out;
    out = s;
    // char* start;
    // *out = 1;
    // start = out;  //指向同一个地方
    int lenth=0;
    for(int i=0;i<lenths;i++){  //对内容进行遍历
        // cout<<*s<<endl;
        if(*s == '-'){
            if(lenth==0){
                *out = *s;
                // *out = s[1];
                isright=0;
                lenth++;
                out++;
               
            }
        }
        else if(*s >='0' && *s <='9'){ //说明是数字
            // cout<<*s; 
            // out[0] = s[0];
            *out = *s;
            // *out = '1';
            // *out = str[i];
            out++;
            lenth++;
           
        }
        s++;
    }
    *out = '\0';
    // cout<<*out<<endl;


    /********** End **********/
}