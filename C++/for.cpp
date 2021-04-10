#include <iostream>
#include <string>

using namespace std;

int sum = 0;
int main(){


    for (int val=1; val <= 10; ++val){
        sum += val;
    }

    // for (declaration : expression)
    //     statement
    string s ("hello world!!!");
    for (auto each_char : s){
        cout << each_char << endl;
    }

    return 0;
}