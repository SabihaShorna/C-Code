#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex {
     private :
       double real,imaginary;
     public :
       //Complex();
       Complex(double real=0,double imaginary=0);
       Complex operator*(Complex);
       Complex operator!=(Complex);
       void Print();

};
#include "Complex.tpp"
#endif COMPLEX_H_INCLUDED


