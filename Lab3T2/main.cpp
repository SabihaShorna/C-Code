#include "Complex.h"
#include <iostream>

using namespace std;

int main(void)
{
    Complex A(1,1),B(2.0,3.0),C,D(5,6);
    C=A*B;// C=A.operator*(B);
    C=C!=D;//C=C.operator+(D);
    C.Print();
    return 0;
}
