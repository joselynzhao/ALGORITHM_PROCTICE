// 包含字符串函数库
#include <string.h>
#include <iostream>
using namespace std;

// 函数frequency：计算子串在长串中出现的次数
// 参数：substr-指向子串，str-指向长串
// 返回值：出现的次数
int frequency(char * substr, char * str);

int main()
{
    char sub[128],str[1024];

    // 输入子串
    cin.getline(sub,128);

    // 输入长串
    cin.getline(str,1024);

    // 调用frequency函数，计算子串在长串中出现的次数
    int n = frequency(sub,str);

    // 输出次数
    cout<<n<<endl;

    return 0;
}

// 函数frequency：计算子串在长串中出现的次数
// 参数：substr-指向子串，str-指向长串
// 返回值：出现的次数
int frequency(char * substr, char * str)
{
    // 请在此添加代码，实现函数frequency
    /********** Begin *********/
    char* sub = substr;
    char* fa = str;
    int n = 0;
    while(*fa != '\0'){  //对str进行遍历
        while(*sub !='\0'){ //sub进行遍历
            if(*sub != *fa){
                sub = substr;
                break;
            }
            else{
                if(*fa != '\0'){
                    fa++;
                    sub++;
                   
                }
                else{
                    break;
                }
                
            }
        }
        if(*sub == '\0'){
            n++;
            sub = substr;
        }

    }
    return n;
    /********** End **********/
}