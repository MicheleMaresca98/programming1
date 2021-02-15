/*
 * punto.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */


#include "punto.h"

ostream& operator << (ostream& outs, const punto& source){
	outs<<" ( "<<source.x<<" , "<<source.y<<" )";
	return outs;
}
