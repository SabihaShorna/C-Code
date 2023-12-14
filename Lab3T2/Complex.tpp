#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double real,double imaginary){
    this->real = real;
    this->imaginary = imaginary;
}
//Complex::Complex(){
 // real=0;
 // imaginary=0;
//}

void Complex::Print(){
    cout<< "Real ="<<real << endl;
    cout<<"Imaginary =" << imaginary << endl;
}

Complex Complex::operator*(Complex a){
    Complex t;
    t.real=real*a.real;
    t.imaginary=imaginary*a.imaginary;
    return t;
}
Complex Complex::operator!=(Complex a){
    Complex t;
    t.real=real+a.real;
    t.imaginary=imaginary+a.imaginary;
    return t;
}


