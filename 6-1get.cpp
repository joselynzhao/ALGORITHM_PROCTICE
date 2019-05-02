#include <iostream>
using namespace std;

// 函数trim：去掉字符串首尾空格
// 参数：str-字符指针，指向输入的字符串
// 返回值：字符指针，指向去掉首尾空格后的字符串（首地址）
// 提示：可以字节在字符串str中操作
char * trim(char * str);

int main()
{
    // 定义存储字符串的一维字符数组
    char s[1024];

    // 输入一行字符，可以包含空格
    // 输入的字符串存入s中，最多读取个字符，后面自动加上'\0'
    cin.getline(s,1024);

    // 输出去掉首尾空格后的字符串
    cout << trim(s) << endl;

    return 0;
}

// 函数trim：去掉字符串首尾空格
// 参数：str-字符指针，指向输入的字符串
// 返回值：字符指针，指向去掉首尾空格后的字符串（首地址）
// 提示：可以直接在字符串str中操作
char * trim(char * str)
{
    // 请在此添加代码，实现函数trim
    /********** Begin *********/
    // char *p;
    // while(*str==' '){
    //     str++;
    // }
    // p = str;
    // for(int i=0;;i++){
    //     if(p[i]==' '){
    //         p[i]='\0';
    //         break;
    //     }
    //     if(p[i]=='\0'){
    //         break;
    //     }
    // }
    // return p;
    char *p, *q;
    p=q;
    // int i=0;
    // for(int j=0;;j++){
    //     cout<<str[j]<<endl;
    //     if(str[j]==' '){
    //         continue;
    //     }
    //     else if(str[j]=='\0'){
    //         p[i]=str[j];
    //         break;
    //     }
    //     else{
    //         p[i]=str[j];
    //         i++;
    //     }
    // }
    while(1){
        if(*str==' '){
            str++;
        }
        else if(*str=='\0'){
            *p='\0';
            break;
        }
        else{
            *p=*str;
            p++;
        }

    }

        
    return q;
    

    // int fk = 0;
    // for(int i=0;str[i]!=' ';i++){
    //     fk++;
    // }
    // int j =0;
    // for(int i=fk-1;str[i]!=' ';i++,j++){
    //     if(fk!=0){
    //         str[j]=str[i];
    //     }
    // }
    // str[j]='\0';
    // cout<< str <<endl;
    // return str;
    /********** End **********/
}