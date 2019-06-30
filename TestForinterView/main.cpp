#include <string>
#include <iostream>
using namespace std;
#include <typeinfo>

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
    classA a, b, c;
    (a * b) = c; // 对a*b的结果赋值
   // 操作(a * b) = c显然不符合编程者的初衷，也没有任何意义。
    return 0;
}
