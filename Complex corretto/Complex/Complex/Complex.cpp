/*
 * Complex.cpp
 *
 *  Created on: 21/ott/2011
 *      Author: Paolo
 */
#include <iostream>

 using std::cout;

 #include "Complex.h"

 Complex::Complex( double real, double imaginary )
 { setComplexNumber( real, imaginary ); }

 void Complex::addition( const Complex &a )
 {
 realPart += a.realPart;
imaginaryPart += a.imaginaryPart;
 }

 void Complex::subtraction( const Complex &s )
 {
 realPart -= s.realPart;
 imaginaryPart -= s.imaginaryPart;
 }

 void Complex::printComplex( void )
 { cout << '(' << realPart << ", " << imaginaryPart << ')'; }

 void Complex::setComplexNumber( double rp, double ip )
 {
 realPart = rp;
 imaginaryPart = ip;
 }
