/*
 * cubo.h
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */

#ifndef CUBO_H_
#define CUBO_H_


#include "quadrato.h"

class cubo{
	friend ostream& operator << (ostream& outs,const cubo& source);
public:
	cubo(double init_x=0.0,double init_y=0.0,double init_lato=0.0);

	double volume()const{return base.area() * base.get_lato();}

private:
	quadrato base;
};



#endif /* CUBO_H_ */
