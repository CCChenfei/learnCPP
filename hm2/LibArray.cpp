//
// Created by chenf on 17-10-2.
//

// LibArray.cpp : 定义控制台应用程序的入口点。
//

// 实验内容：
// 1：将C语言版本LibArray用C++封装，注意，原C版本保留一个备份

// 实验目的：
// 1：C++类定义的基本方法

// 只提交CLibArray.cpp及CLibArray.h

//#include "stdafx.h"

#include <assert.h>

#include "CLibArray.h"

int main()
{
    CArray array;
    // 不再需要initial，但应该有正确的初始化
    // array_initial(array); 

    //array.recap(10); 
    //assert(array.capacity() == 10); 

    //////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < 20; ++i)
    {
        array.append(i);
    }
    assert(array.size() == 20);

    for (int i = 0; i < array.size(); ++i)
    {
        assert(array.at(i) == i);
    }

    //////////////////////////////////////////////////////////////////////////
    CArray array2, array3;
    // array_initial(array2); 
    // array_initial(array3); 

    array2.copy(array);
    assert(array.compare(array2) == true);

    array3.copy(array);
    assert(array.compare(array3) == true);

    //////////////////////////////////////////////////////////////////////////
    array2.insert(2, 3);
    assert(array.compare(array2) == false);

    //////////////////////////////////////////////////////////////////////////
    array3.at(2) = 5;
    assert(array.compare(array3) == false);

    //////////////////////////////////////////////////////////////////////////
    // 不再需要destroy，但应该有正确的内存释放
    // array_destroy(array); 
    // array_destroy(array2); 
    // array_destroy(array3); 

    return 0;
}

