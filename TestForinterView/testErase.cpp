//
//  testErase.cpp
//  TestForinterView
//
//  Created by tuo on 2019/6/9.
//  Copyright © 2019 tuo. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
void testErase()
{
    int m[] = {0, 2, 3, 4, 5, 6, 7};
    std::vector<int> vec(m, m+sizeof(m)/sizeof(*m));
    for (auto ptr = vec.begin(); ptr != vec.end(); ptr++){
        std::cout << "begin:" << *ptr << std::endl;
        if (*ptr & 1){
            std::cout << "DDD"<< *ptr << "KKK" << std::endl;
            vec.erase(ptr);
        }
        std::cout << "after:" << *ptr << std::endl;
        std::cout << "----------------------------" << std::endl;
    }
}
