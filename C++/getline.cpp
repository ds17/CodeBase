#include <iostream>
#include <string>

using namespace std;

int main(){

    string line;
    while (getline(cin, line)){   //getline包含了转行符，但换行符实际上被丢弃了
        cout << line << endl;
    }
    return 0;
}