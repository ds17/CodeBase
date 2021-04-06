#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int val = 42;
    int *p = & val;

    //指针的指针
    double dval = 3.14159;
    double *pd1 = &dval; //*:定义指针，&：取地址符
    double *pd2 = pd1;  //声明指针pd2并初始化和pd1的值相同

    //指针的类型实际上被用于指定它所指向对象的类型

    //解引
    *pd2 = 3.6;  //*：解引符号，赋值后对象dval的值发生变化

    //获得空指针的方法
    int *p1 = nullptr;
    int *p2 = 0; //直接将p2初始化为字面常量0
    int *p3 = NULL; //首选需要#include cstdlib

    //指针的引用
    /*
    引用不是一个对象，因此不能定义引用的指针;
    但指针是一个对象，因此可以定义指针的引用；
    指针的引用首先是一个指针；
    */
    int i = 42, *p = &i;
    int *&r = p; //*&r：从右往左，离变量名最近的符号对变量的类型有最直接的影响，因此r是一个引用，声明符的其他部分用以确定r引用的类型

    
    return 0;
}




