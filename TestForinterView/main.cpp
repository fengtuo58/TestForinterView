//
//  main.cpp
//  TestForinterView
//
//  Created by tuo on 2019/5/16.
//  Copyright © 2019 tuo. All rights reserved.
//

#include <iostream>
using namespace std;

char array1 [100]= {0};
char array2[100];
class M
{
    int a;
};
int main(int argc, const char * argv[]) {
    
    // insert code here...
    std::cout << "Hello, World!\n";
    cout<< new M << endl;  //heap。0x100706b10
    cout<< new (array1) M << endl;//初始化数据段 0x1000020d0
    cout<< &argc << endl;//函数入参全局变量 0x7ffeefbff588
    cout<< new (array2) M << endl;//bss 为初始化数据段  0x100002140
    return 0;
}
