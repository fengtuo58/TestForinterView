#include <string>
#include <iostream>
using namespace std;
#include <typeinfo>
#include <cmath>
//extern class String;
#include "String.hpp"
void f(char const *ptr)
{
    cout << "1" << endl;
}

void f(int v)
{
    cout << "2" << endl;
}

class A {
    
public:
    void p()
    {
        cout << "p" << endl;
    }
  ~A()
    {
        cout << "A destoryed" << endl;
    }
};
A func()
{
    
    return A();
}

struct Test1
{
   
    int i ;
    double d ;
     char c ;
};
#define CLASS struct
CLASS KK{
public:
    int m;
};

CLASS MM :  KK{
    
};

class AA {
public:
    virtual void func1()
    {
        cout << "fun1 in AA" << endl;
    }
    
    void func2()
    {
        cout << "fun2 in AA" << endl;
    }
    
};


int id[sizeof(unsigned long)];
class BB: public AA {
public:
    void func1() {
        
        cout << "fun1 in class B" << endl;
        
    }
    
    virtual void func2() {
        
        cout << "fun2 in class B" << endl;
        
    }
    
};

class classA {
    
};
classA operator*(const classA& a1,const classA& a2)
{
    return classA();
}

void funA(int mm[10])
{
    cout << endl <<sizeof(mm) << endl;
}
struct MemTest{
    
};
int main(int argc, char *argv[])
{
//    A s = func();
//    s.p();
//    s = ;
//    cout << endl << sizeof(Test1) << endl;
    //输出1 2
//    MM mm;
//    mm.m = 0;
 //
 //   AA &bn = *(new BB);
 //   bn.func1();
 //   bn.func2();
 
   // operator*的返回结果必须是一个const对象。如果不是，这样的变态代码也不会编译出错：//
//    classA a, b, c;
//    (a * b) = c; // 对a*b的结果赋值
//   // 操作(a * b) = c显然不符合编程者的初衷，也没有任何意义。
   String1 s; //类或结构体的前向声明只能用来定义指针对象，因为编译到这里时还没有发现定义，不知道该类或者结构的内部成员，没有办法具体的构造一个对象，所以会报错。 将类成员改成指针就好了
    cout << s;
    int m[10];
    //注意当数组作为函数的参数进行传递时，该数组自动退化为同类型的指针
    funA(m);
    float a, b;
    a = 2.5000000000001;//编译器自己加e 极小值
    b= 2.50;
    float zero = a - b;
    if (zero == 0) {
        cout << "ok";
    }
    char aa[] = "hello";
    aa[0] = 'X';
    char *p = "world"; // 注意p 指向常量字符串
//    p[0] = 'X';
    MemTest *mTest1=new MemTest[10];
    
    MemTest *mTest2=new MemTest;
    
    int *pInt1=new int [10];
    
    int *pInt2=new int;
    
    delete[]pInt1; //-1-
    
    delete[]pInt2; //-2-
    
    delete[]mTest1;//-3-
    
    delete[]mTest2;//-4-
//    std::cout << [](float f) { return std::abs(f); }(-3.5);
//    std::cout << [](float f) -> int { return std::abs(f); } (-3.5);
//    auto lambda = [](int f) ->int {return f * f;};
//    cout << lambda(5);
//    std::function<int()> lambda1 = [] () -> int { return 100 * 100; } ;
//    float f01 = 1.0;
//    std::cout << [=](float f) { return f01 + std::abs(f); } (-3.5) << endl;
//    float f0 = 1.0;
//    std::cout << [&](float f) mutable { return f0 += std::abs(f); } (-3.5);//fo is a copy for fo in outsides
//    //C++ 11 标准说，如果以传值的形式捕获外部变量，那么，lambda 体不允许修改外部变量，对 f0 的任何修改都会引发编译错误。
//    std::cout << '\n' << f0 << '\n';
//https://www.cnblogs.com/langzou/p/5962033.html
    float f0 = 1.0f;
    float f1 = 10.0f;
    std::cout << [=, &f0](float a) { return f0 += f1 + std::abs(a); } (-3.5);
    std::cout << '\n' << f0 << '\n';
//f0 通过引用被捕获，而其它变量，比如 f1 则是通过值被捕获。
//    []        // 不捕获任何外部变量å
//    [=]      // 以值的形式捕获所有外部变量
//    [&]      // 以引用形式捕获所有外部变量
//    [x, &y] // x 以传值形式捕获，y 以引用形式捕获
//    [=, &z]// z 以引用形式捕获，其余变量以传值形式捕获
//    [&, x]  // x 以值的形式捕获，其余变量以引用形式捕获
    
    return 0;
}
