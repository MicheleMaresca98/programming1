/*
 * driver.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */


#include "cilindro.h"
#include "cerchio.h"
#include "punto.h"

using namespace std;
#include <iostream>

int main(){
	punto p(3.14,5.0);
	cerchio ce(1.0,1.0,2);
	cilindro ci(4.0,4.0,3,4);

	cout<<p<<'\n'<<ce<<'\n'<<ci<<endl;
}


