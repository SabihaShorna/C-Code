#include <iostream>
#include "dynArr.h"

using namespace std;

int main()
{
   int row,col; // Variable declaration
   cin>>row>>col;

   dynArr<int> D(row,col);
// taking array input
    for(int ii=0;ii<row;ii++){
        for(int j=0;j<col;j++){
            int value;
            cin>>value;
            D.setValue(ii,j,value);
        }
    }
// printing array
    for(int ii=0;ii<row;ii++){
        for(int j=0;j<col;j++){
            cout<<D.getValue(ii,j)<<" ";
        } cout<<endl;
    }

    return 0;
}
