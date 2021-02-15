/*
 * cerchio.h
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */

#ifndef CERCHIO_H_
#define CERCHIO_H_

#include "punto.h"

class cerchio: public punto{
	friend ostream& operator << (ostream& outs, const cerchio& source);
public:
	cerchio(double init_x=0.0,double init_y =0.0,double init_raggio=0.0);
	void set_raggio(const double& new_raggio){raggio=new_raggio;}
	double get_raggio()const{return raggio;}
	double area()const{return raggio*raggio*3.14;}
private:
	double raggio;
};



#endif /* CERCHIO_H_ */
