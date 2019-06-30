//
//  String.hpp
//  TestForinterView
//
//  Created by tuo on 2019/6/30.
//  Copyright © 2019 tuo. All rights reserved.
//

#ifndef String_hpp
#define String_hpp
#include <string.h>
#include <stdio.h>

#endif /* String_hpp */
class String
{
public:
    String(const char *str = NULL); // 普通构造函数
    String(const String &other); // 拷贝构造函数
    ~ String(void); // 析构函数
    String & operator =(const String &other); // 赋值函数
private:
    char *m_data; // 用于保存字符串
};
