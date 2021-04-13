//输入、输出
#include <iostream> 
#include <iomanip>

using namespace std;

int main(){
    int v1, v2;
    cout << "content" << endl;
    cin >> v1 >> v2;     //挨个提取输入流，顺次写入变量

    //setw(int)：设置域宽
    //setprecision(int)：设置浮点数的小数位数，位数包含小数点
    cout << setw(5) << setprecision(3) <<3.1415;   

    //ends:插入空字符
    cout <<"tt" << ends << "oo"; 
    return 0;
}
