#include <iostream>

using namespace std;
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
        return 0;

    return ((num % 10) + sumOfDigits(num / 10));
}
int main()
{
    cout <<  sumOfDigits(234)<< endl;
    return 0;
}
