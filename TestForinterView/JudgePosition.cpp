//
//  JudgePosition.cpp
//  TestForinterView
//
//  Created by tuo on 2019/6/1.
//  Copyright © 2019 tuo. All rights reserved.
//

#include "JudgePosition.hpp"
Pos::Pos(Pos &p)
{
    raw = p.raw;
    column = p.column;
}

bool JudgePosition::operator()(Pos &position)
{
    double rate1 = (p1.column - p2.column) / (p1.raw - p2.raw);
    
    return 0;
}

void TestFunction()
{
    
}
