#include <iostream>
#include<math.h>
using namespace std;
float sumOfSeries(float n)
{
   if ( n==0)
    return 1;
    return ((1.0/pow(2,n)) + sumOfSeries(n-1));
}

int main()
{
    cout << sumOfSeries(3) << endl;
    return 0;
}
