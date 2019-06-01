//
//  main.cpp
//  TestForinterView
//
//  Created by tuo on 2019/5/16.
//  Copyright © 2019 tuo. All rights reserved.
//一个cpp文件是一个编译单元

#include <iostream>
#include "VirtualTable.hpp"
#include <string>
#include <vector>
using namespace std;
extern int fun();
char array1 [100]= {0};
char array2[100];
class M
{
    int a;
};

class B;
class A
{
public:
    weak_ptr<B> pb_;
    ~A()
    {
        cout<<"A delete\n";
    }
};
class B
{
public:
    int k;
    shared_ptr<A> pa_;
    ~B()
    {
        cout<<"B delete\n";
    }
};
void fun1()
{
    shared_ptr<B> pb(new B());
    shared_ptr<A> pa(new A());
    pb->pa_ = pa;
    pa->pb_ = pb;
    cout << shared_ptr<B>((pa->pb_))->k;
    cout<<pb.use_count()<<endl;
    cout<<pa.use_count()<<endl;
}





int main(int argc, const char * argv[]) {
   // VirtualTable();
    //fun();
   // float m = 2.1;
   // float k = 3.4 - 1.3;
   // cout<< (m==k) << endl;
   // auto_ptr< string> p1 (new string ("I reigned lonely as a cloud."));
   // auto_ptr<string> p2;
   // p2 = p1; //auto_ptr不会报错. 一个指针赋值给另一个指针之后，前一个指针（源指针被赋值为空）。
   // cout << *p2 << endl;
   // cout << p1.get();
   //
   // unique_ptr<string> p3 (new string ("auto"));   //#4
   // unique_ptr<string> p4;                       //#5
   // //p4 = p3;//此时会报错！！
   //
   // unique_ptr<string> pu1(new string ("hello world"));
   // unique_ptr<string> pu2;
   // //pu2(pu1);                                      // #1 not allowed
   // unique_ptr<string> pu3;
   // pu3 = unique_ptr<string>(new string ("You"));   // #2 allowed
   // unique_ptr<string> ps1(new string("A")), ps2(new string("B"));
//    ps1 = demo("hello");
    //ps2 = move(ps1);
//    ps1 = demo("world!"));
    //cout << ps1 << *ps2 << endl;
    
    //std::string str = "Hello";
    //std::vector<std::string> v;
    ////调用常规的拷贝构造函数，新建字符数组，拷贝数据
    //v.push_back(str);
    //std::cout << "After copy, str is \"" << str << "\"\n";
    ////调用移动构造函数，掏空str，掏空后，最好不要使用str
    //v.push_back(std::move(str));
    //std::cout << "After move, str is \"" << str << "\"\n";
    //std::cout << "The contents of the vector are \"" << v[0]
    //<< "\", \"" << v[1] << "\"\n";
    fun1();
}
