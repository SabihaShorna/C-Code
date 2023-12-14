#include "dynarr.h"
#include <iostream>
using namespace std;

int main()
{
    dynarr d1();
    dynarr d2(5);

    int i;

    cout<<"Enter 5 numbers : " << endl;
    for(i=0;i<5;i++){
            int x;
            cin>>x ;
        d2.setValue(i,x);
    }

    cout<<"Stored numbers are : ";
    for(i=0;i<5;i++){
        cout << d2.getValue(i)<<"  ";
    }

    return 0;


}
