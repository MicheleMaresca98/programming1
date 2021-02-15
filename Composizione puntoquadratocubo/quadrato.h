/*
 * quadrato.h
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */

#ifndef QUADRATO_H_
#define QUADRATO_H_

#include "punto.h"

class quadrato{
	friend ostream& operator << (ostream& outs,const quadrato& source);
public:
	quadrato(double init_x=0.0,double init_y=0.0,double init_lato=0.0);

	double get_lato()const{return lato;}

	void set_lato(const double& new_lato){lato=new_lato;}

	double area()const{return lato*lato;}

private:
	double lato;
	punto lowerPoint;
};



#endif /* QUADRATO_H_ */
