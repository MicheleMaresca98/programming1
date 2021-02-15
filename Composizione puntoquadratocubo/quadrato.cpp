/*
 * quadrato.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */

#include "quadrato.h"
#include <iostream>
using std::ostream;
using std::endl;

quadrato::quadrato(double init_x,double init_y,double init_lato)
:lowerPoint(init_x,init_y)
{
	lato=init_lato;
}


ostream& operator << (ostream& outs,const quadrato& source){
	outs<<"The lower point is "<<source.lowerPoint<<endl;
	outs<<"The side is "<<source.lato<<endl;
	outs<<"The Area is "<<source.area()<<endl;
	return outs;
}
