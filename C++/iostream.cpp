//输入、输出
#include <iostream> 
#include <iomanip>

using namespace std;

void test1();
void test2();

int main(){

    test1();
    cout << "\n";
    system("pause");
    return 0;
}

void test1()
{
    int v1, v2;
    cout << "content" << endl;
    cin >> v1 >> v2;     //挨个提取输入流，顺次写入变量

    //setw(int)：设置域宽
    //setprecision(int)：设置浮点数的小数位数，位数包含小数点
    cout << setw(10) << setprecision(3) <<3.1415;   

    //ends:插入空字符
    cout <<"tt" << ends << "oo"; 
}

//.. cin作为条件时
void test2()
{
/*
    根据流状态是否正常决定true or false；
    当输入流工作正常时为true,输入流错误时返回false；
    例如：i时int类型 cin >> i，键盘输入字符型，流状态错误返回false;
    键盘输入 ctrl + Z，即结束符时，输入流状态错误，返回false
*/

    if (cin) cout << "true \n" ; //cin啥也没做时，默认为true
    else cout << "False \n";   


    int i;
    char c;
    cout << "input sth: \n";
    cin >> i;

    if (cin) cout << "true \n" ; //如果输入数据类型匹配，则为ture
    else cout << "False \n";   //类型不匹配 或 结束符，则为 False

    //测试：输入 a , 输出 False； 输入 ctrl + Z ，输出False

}