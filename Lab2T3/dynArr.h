#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class dynArr
{
private: // variable declaration
int **data;
int row,col;
public:
dynArr();// calling function
dynArr(int,int);
~dynArr();
void setValue(int,int,T);
T getValue(int,int);
};
#include "dynArr.tpp"
#endif // DYNARR_H_INCLUDED

