/*
 * driver.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */



#include <iostream>

using std::cout;
using std::endl;

#include "punto.h"
#include "quadrato.h"
#include "cubo.h"

int main(){
	punto p(2.0,3.0);
	quadrato q(4.0,5.6,3.0);
	cubo c(3.5,2.1,2.0);

	cout<<p<<'\n' <<q<<'\n'<<c<<endl;


}
