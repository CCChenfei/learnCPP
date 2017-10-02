//
// Created by chenf on 17-9-19.
//

#ifndef HM1_CLIBARRAY_H
#define HM1_CLIBARRAY_H

struct CArray
{
    int *data;
    int num;
    int cap;
};

void array_initial(CArray &array);

void array_recap(CArray &array, int c);

inline int array_capacity(CArray array)
{
    return array.cap;
}

void array_append(CArray &array, int i);

inline int array_size(CArray array)
{
    return array.num;
}

int &array_at(CArray array, int n);

void array_copy(CArray &array1, CArray &array2);

bool array_compare(CArray& array1, CArray &array2);

void array_insert(CArray &array, int n, int i);

void array_destroy(CArray &array);




#endif //HM1_CLIBARRAY_H
