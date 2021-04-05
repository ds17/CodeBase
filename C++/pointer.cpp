#include <iostream>
using namespace std;

int val = 42;
int *p = & val;

//指针的指针
double dval;
double *pd1 = &dval; //*:定义指针，&：取地址符
double *pd2 = pd1;  //声明指针pd2并初始化和pd1的值相同

//指针的类型实际上被用于指定它所指向对象的类型

cout << *pd2;  //*：解引符号