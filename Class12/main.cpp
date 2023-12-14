#include <iostream>
#include <math.h>

using namespace std;
int fibonacci(int n){
if (n<= 1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
        return 0;

    return ((num % 10) + sumOfDigits(num / 10));
}
float sumOfSeries(float n)
{
   if ( n==0)
    return 1;
    return ((1.0/pow(2,n)) + sumOfSeries(n-1));
}



int main()
{
    cout << sumOfSeries(3.0) << endl;
    cout << sumOfDigits(345) << endl;
    return 0;
}
