//
//  JudgePosition.hpp
//  TestForinterView
//
//  Created by tuo on 2019/6/1.
//  Copyright © 2019 tuo. All rights reserved.
//

#ifndef JudgePosition_hpp
#define JudgePosition_hpp

#include <stdio.h>
class Pos{
    public:
        double raw;
        double column;
        Pos(double x=0, double y=0): raw(x), column(y){}
        Pos(Pos &p);
};

class JudgePosition{
    private:
        Pos p1;
        Pos p2;
        Pos p3;
    public:
        bool operator ()(Pos &position);
        JudgePosition(Pos p1, Pos p2, Pos p3): p1(p1), p2(p2), p3(p3) {}
};
#endif /* JudgePosition_hpp */
