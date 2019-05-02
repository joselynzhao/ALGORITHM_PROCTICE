#include <iostream>
using namespace std;

// 函数toUp：将str指向的字符串中的小写字母变成对应的大写字母
// 参数：str-指向字符串
void toUp(char * str);

int main()
{
    char s[1024];
    // 输入一行字符
    cin.getline(s,1024);

    // 调用toUp函数，转换成大写字母
    toUp(s);

    // 输出变更后的字符串
    cout<<s<<endl;

    return 0;
}

// 函数toUp：将str指向的字符串中的小写字母变成对应的大写字母
// 参数：str-指向字符串
void toUp(char * str)
{
    // 请在此添加代码，实现函数toUp
    /********** Begin *********/
    char* s = str;
    while(*s !='\0'){ //对str进行遍历
        if(*s <='z'&& *s>='a')
            *s = *s + ('A'-'a');
        s++;
    }


    /********** End **********/
}