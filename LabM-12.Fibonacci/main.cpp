
#include <iostream>
using namespace std;
long factorial(int n)
{
if (n == 0)
return 1;
else
return(n * factorial(n-1));
}
int main()
{
    cout << factorial(1) << endl;
    return 0;

}
