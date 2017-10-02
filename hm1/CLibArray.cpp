//
// Created by chenf on 17-9-19.
//

#include <string.h>
#include "CLibArray.h"


void array_initial(CArray &array)
{
    array.num = 0;
    array.cap = 0;
    array.data = new int[array.cap];

}

void array_recap(CArray &array, int c)
{
    int* temp = new int[c];
    memcpy(temp,array.data,sizeof(int)*array.num);
    delete[]array.data;
    array.data = temp;
    array.cap = c;
}


void array_append(CArray &array, int i)
{
    if(array.num>=array.cap)
    {
        array_recap(array,array.cap+1);
    }
    array.data[array.num] = i;
    array.num++;
}


int &array_at(CArray array, int n)
{
    return array.data[n];
}

void array_copy(CArray &array1, CArray &array2)
{
    array2.cap = array1.cap;
    array_recap(array2,array2.cap);
    for(int i=0;i<array1.num;i++)
    {
        array2.data[array2.num] = array1.data[i];
        array2.num++;
    }
}

bool array_compare(CArray &array1, CArray &array2)
{
    if(array1.num==array2.num) {
        for (int i = 0; i < array1.num; i++) {
            if (array1.data[i] != array2.data[i])
                return false;
        }
        return true;
    }
    else
        return false;
}

void array_insert(CArray &array, int n, int i)
{
    if(array.num>=array.cap)
    {
        array_recap(array,array.cap+1);
    }
    for(int i = array.num;i>n;i--)
    {
        array.data[i] = array.data[i-1];
    }
    array.data[n] = i;
}

void array_destroy(CArray &array)
{
    delete []array.data;
    array.num = 0;
    array.cap = 0;
}

