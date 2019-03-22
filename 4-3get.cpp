#include <iostream>
using namespace std;

// 函数leapYear
int leapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// 函数whatDay：计算某年某月的号是星期几
// 参数：year-年，month-月
// 返回值：--7分别表示星期一到星期日
int whatDay(int year, int month)
{
    // 请在这里补充代码，实现函数whatDay
    /********** Begin *********/

    int days_run = 31*7+30*4+29;
    int days_ping = 31*7+30*4+28;
    int sum_day = 0;
    if(year!=1){
        for(int i=1;i<year;i++){
            if(leapYear(i)){
                sum_day+=days_run;
            }
            else{
                sum_day+=days_ping;
            }
        }
    }
    if(month==1){
        sum_day+=1;
    }
    else{
        switch(month-1){
            case 11:
                sum_day+=30;
            case 10:
                sum_day+=31;
            case 9:
                sum_day+=30;
            case 8:
                sum_day+=31;
            case 7:
                sum_day+=31;
            case 6:
                sum_day+=30;
            case 5:
                sum_day+=31;
            case 4:
                sum_day+=30;
            case 3:
                sum_day+=31;
            case 2:
                if(leapYear(year))sum_day+=29;
                else sum_day+=28;
            case 1:
                sum_day+=31;
                break;
        }
        sum_day+=1;
    }
    int out = sum_day%7;
    if(out == 0){
        return 7;
    }
    else return out;


    /********** End **********/
}

int main()
{
    // 年、月、星期几
    int y, m, xq;

    // 输入年月
    cin >> y >> m;

    // 计算星期几
    xq = whatDay(y,m);

    // 输出星期
    cout << y << "年" << m << "月1日是星期";
    if(xq == 7)
        cout << "日" << endl;
    else
        cout << xq << endl;

    return 0;
}