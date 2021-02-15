/*
 * Complex.h
 *
 *  Created on: 21/ott/2011
 *      Author: Paolo
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
class Complex {
 public:
 Complex( double = 0.0, double = 0.0 ); // default constructor
 void addition( const Complex & );
 void subtraction( const Complex & );
 void printComplex( void );
 void setComplexNumber( double, double );
 private:
 double realPart;
 double imaginaryPart;
 };

#endif /* COMPLEX_H_ */
