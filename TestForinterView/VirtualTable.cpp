//
//  VirtualTable.cpp
//  TestForinterView
//
//  Created by tuo on 2019/5/22.
//  Copyright © 2019 tuo. All rights reserved.
//


#include <stdio.h>
static int fun()
{
    static int m;
    printf("%d\n", m);
    return 0;
}
