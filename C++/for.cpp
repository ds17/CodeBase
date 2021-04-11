#include <iostream>
#include <string>

using namespace std;

int sum = 0;
int main(){

    //for循环
    for (int val=1; val <= 10; ++val){
        sum += val;
    }

    //范围for循环
    // for (declaration : expression)
    //     statement
    string s ("hello world!!!");
    for (auto each_char : s){
        cout << each_char << endl;
    }
    //不能在范围for循环中向vector对象添加元素

    return 0;
}