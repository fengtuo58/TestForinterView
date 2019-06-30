//
//  String.cpp
//  TestForinterView
//
//  Created by tuo on 2019/6/30.
//  Copyright © 2019 tuo. All rights reserved.
//

#include "String.hpp"
//普通构造函数
String::String(const char *str)
{
    if(str==NULL)
    {
        m_data = new char[1];   // 得分点：对空字符串自动申请存放结束标志'\0'的空
        *m_data = '\0';         //加分点：对m_data加NULL 判断
    }
    else
    {
        int length = strlen(str);
        m_data = new char[length+1];    // 若能加 NULL 判断则更好
        strcpy(m_data, str);
    }
}
// String的析构函数
String::~String(void)
{
    delete [] m_data;
}
//拷贝构造函数
String::String(const String &other) // 得分点：输入参数为const型
{
    int length = strlen(other.m_data);
    m_data = new char[length+1];    //加分点：对m_data加NULL 判断
    strcpy(m_data, other.m_data);
}
//赋值函数
String & String::operator =(const String &other) // 得分点：输入参数为const型
{
    if(this == &other)  //得分点：检查自赋值
        return *this;
    delete [] m_data;   //得分点：释放原有的内存资源
    int length = strlen( other.m_data );
    m_data = new char[length+1];    //加分点：对m_data加NULL 判断
    strcpy( m_data, other.m_data );
    return *this;   //得分点：返回本对象的引用
}