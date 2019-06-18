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

int main(int argc, char *argv[])
{
     auto m = "ff";
     if (typeid(int) == typeid(m))
         cout << "FFFFF" << endl;
    cout <<"gggg" << typeid(NULL).name() << endl;
    int nn [][4] ={1, 1};
    //  cout << sizeof(nn);
    for(int k = 0; k < 4; k++){
        cout << nn[0][k] << endl;
    }
    f(nullptr);
    int * p = nullptr;
    return 0;
}
