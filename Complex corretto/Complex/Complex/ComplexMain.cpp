/*
 * ComplexMain.cpp
 *
 *  Created on: 21/ott/2011
 *      Author: Paolo
 */

#include <iostream>

 using std::cout;
 using std::endl;

 #include "Complex.h"

 int main()
 {
 Complex b( 1, 7 ), c( 9, 2 );

 b.printComplex();
 cout << " + ";
 c.printComplex();
 cout << " = ";
 b.addition( c );
 b.printComplex();

 cout << '\n';
 b.setComplexNumber( 10, 1 ); // reset realPart and imaginaryPart
 c.setComplexNumber( 11, 5 );
 b.printComplex();
 cout << " - ";
 c.printComplex();
 cout << " = ";
 b.subtraction( c );
 b.printComplex();
 cout << endl;

 return 0;
 }
