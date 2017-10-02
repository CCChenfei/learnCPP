//
// Created by chenf on 17-10-2.
//

#include "CLibArray.h"
#include <string.h>

void CArray::recapacity(int new_cap) {
    int * temp = new int[new_cap];
    memcpy(temp, array, sizeof(int)*cap);
    delete[]array;
    array = temp;
    cap = new_cap;

}

int CArray::size() {
    return num;
}

void CArray::append(int i) {
    if(num>=cap)
    {
        recapacity((cap+1)*2);
    }
    array[num] = i;
    num++;
}

int &CArray::at(int i) {
    return array[i];
}

void CArray::copy(const CArray &array1) {
    if(cap<array1.num)
    {
        recapacity(array1.num);
    }
    memcpy(array, array1.array, sizeof(int)*array1.num);
    num = array1.num;
}

bool CArray::compare(const CArray &array1) {
    if(array1.num!=num)
        return false;
    for(int i = 0; i<num ;i++)
    {
        if(array[i]!=array1.array[i])
            return false;
    }
    return true;
}

void CArray::insert(int n, int i) {
    if(num>=cap)
        recapacity((cap+1)*2);
    for(int i = num; i > n; i--)
    {
        array[i] = array[i-1];
    }
    array[n] = i;
    num++;
}