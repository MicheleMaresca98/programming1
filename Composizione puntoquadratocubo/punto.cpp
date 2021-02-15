/*
 * punto.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */


#include "punto.h"

ostream& operator << (ostream& outs,const punto& source){
	outs<<" ( "<<source.get_x()<<" , "<<source.get_y()<<" ) ";
	return outs;
}

