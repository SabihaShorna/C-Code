#include "dynArr.h"
#include <iostream>

using namespace std;

template <class T>
dynArr<T>::dynArr()
{
data = NULL;
}
template <class T>
dynArr<T>::dynArr(int row,int col)
{
data = new int*[row];
for(int i=0;i<row;i++){
        data[i]=new int[col];
    }
}
template <class T>
dynArr<T>::~dynArr()
{
    for(int i=0;i<row;i++){
       delete [] data[i];
    }
delete [] data;
}
template <class T>
T dynArr<T>::getValue(int i,int j)
{
return data[i][j];
}
template <class T>
void dynArr<T>::setValue(int i,int j,T value)
{
    data[i][j]=value;
}

