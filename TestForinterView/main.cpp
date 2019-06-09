#include <iostream>
#include <vector>
using namespace std;
class A
{
public:
    A(int pram1, int pram2, int pram3);
private:
    int a;
    int &b;
    const int c;
};

A::A(int pram1, int pram2, int pram3): c(pram3), b(pram2)
{
    a=pram1;
    b=pram2;
   // c=pram3;
}

int main() {
    vector<int> a;
    a.reserve(100);
    a.resize(50);
    cout<<a.size()<<"  "<<a.capacity()<<endl;
    //50  100
    a.resize(150);
    cout<<a.size()<<"  "<<a.capacity()<<endl;
    //150  200
    a.reserve(50);
    cout<<a.size()<<"  "<<a.capacity()<<endl;
    //150  200
    a.resize(50);
    cout<<a.size()<<"  "<<a.capacity()<<endl;
    //50  200
}
