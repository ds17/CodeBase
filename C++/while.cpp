#include <iostream>
using namespace std;

int main(){
//while
    //先判断，在决定是否执行循环体
    int  sum = 0, i = 0;
    cin >> i;  //输入11，就不再执行
    while (i <= 10){
        sum += i;
        ++i;
    }

//do-while
    //循环后判断
    //无论如何都会至少执行一次循环体
    cin >> i;  //输入11也会执行一次循环
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    
//其他控制语句
    while (i<10)
    {
        /* code */
        break;  //跳出循环，循环结束
        continue;  //结束本次循环，接着判断是否执行下一个循环
        goto;  //尽量不要使用
        /* code */
    }
    
    return 0;
}