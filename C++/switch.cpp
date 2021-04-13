#include <iostream>
using namespace std;

int main(){
    int day;
    cin >> day;
/*
    switch (表达式)      //表达式，判断值都是int型或char型
    {
    case 常量表达式:     //以case中的常量表达式值为入口标号，由此开始顺序执行，直至最后或break
        语句
        语句
        break;
    case 常量表达式:
        语句
        语句
        break;
    default:
        语句
        语句
        break;
    }
*/
    switch (day)
    {
    case 0:  //冒号后不可用花括号
        cout << "sunday" << endl;
        break;          
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    default:
        cout << "others" << endl;
        break;      //每个场合的break必不可少，否则case到目标条件后，后续条件都是满足的
    }

    return 0;
}