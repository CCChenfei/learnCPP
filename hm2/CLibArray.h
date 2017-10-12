//
// Created by chenf on 17-10-2.
//

#ifndef HM2_CLIBARRAY_H
#define HM2_CLIBARRAY_H


class CArray {
    int *array;
    int num;
    int cap;
public:
    CArray()
    {
        array = nullptr;
        num = 0;
        cap = 0;
    }
    void recapacity(int new_cap);
    void append(int i);
    int size()const;
    int &at(int i);
    void copy(const CArray &array1);
    bool compare(const CArray &array1)const;
    void insert(int n, int i);

    ~CArray()
    {
        delete[]array;
        array = nullptr;
        num = 0;
        cap = 0;
    }
};


#endif //HM2_CLIBARRAY_H
