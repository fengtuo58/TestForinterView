#include <iostream>
using namespace std;

class Person
{
public:
    virtual Person& print()
    {
        cout << "Person" << endl;
        return *this;
    }
    void f(int m)
    {
        
    }
    
    void f(int m) const
    {
        
    }
protected:
    string _str;
    
};
class Student :public Person
{
public:
    Student& print()
    {
        cout << "Student" << endl;
        return *this;
    }
protected:
    string _num;
};
void func(Person& p)
{
    p.print();
}
// 重仔 重定义 重写
int TestOveride()
{
    Person p;
    Student s;
    func(p);
    func(s);
    system("pause");
    return 0;
}
