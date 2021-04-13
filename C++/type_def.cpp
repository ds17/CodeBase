using namespace std;


int main(){

//auto vs decltype
    int a = 0;
    auto  b =a;  //继承表达式的类型，并用其进行初始化
    decltype(a) b; //只继承表达式的类型，不用表达式的值激励性初始化

//类型别名
    typedef int zhengShu;
    using ShaungJingDu = double;

    return 0;
}



