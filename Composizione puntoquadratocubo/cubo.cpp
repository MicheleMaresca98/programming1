
/*
 * cubo.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */
#include <iostream>
using std::endl;

#include "cubo.h"

cubo::cubo(double init_x,double init_y,double init_lato)
:base(init_x,init_y,init_lato){}

ostream& operator << (ostream& outs,const cubo& source){
	outs<<source.base<<endl;
		outs<<"The Volume is "<<source.volume()<<endl;
		return outs;
}
