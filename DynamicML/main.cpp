#include <iostream>

using namespace std;

int main()
{


     int *dArr;
     dArr=new int[3];
     dArr[0]=1;
     dArr[1]=2;
     dArr[2]=3;
     for(int i=0; i<3;i++){
        cout << dArr[i] << endl;
     }

     delete[] dArr;
     cout << dArr[0] << endl;
     dArr = NULL;
     cout << dArr[0] << endl;
    return 1;
}
