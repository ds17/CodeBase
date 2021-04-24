#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    srand(unsigned (time(NULL)));  //time(NULL)返回系统当前时间
    int a = 100, b = 199;

    //取得 [a,b)之间的随机数
    cout << rand() % (b-a) + a << "\n"; 

    //取得 [a, b]的随机整数
    cout << rand() % (b-a+1) + a << "\n";

    //取得 (a, b]的随机整数
    cout << rand() % (b - a) +a +1 << "\n";

    //取得0~1之间的浮点数
    cout << rand() / double(RAND_MAX) << "\n";
    
    cout << "\n";
    system("pause");
    return 0;
}
