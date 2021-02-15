/*
 * cerchio.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */


#include "cerchio.h"
#include <iostream>
using std::endl;

cerchio::cerchio(double init_x,double init_y ,double init_raggio)
:punto(init_x,init_y)
{
	raggio=init_raggio;
}


ostream& operator << (ostream& outs, const cerchio& source){
	outs<<"Il centro del cerchio è ";
	outs<<static_cast<punto>(source)<<endl;
	outs<<"Il raggio del cerchio è "<<source.raggio<<endl;
	outs<<"L'area del cerchio è "<<source.area()<<endl;
	return outs;

}
