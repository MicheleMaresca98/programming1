/*
 * punto.h
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */

#ifndef PUNTO_H_
#define PUNTO_H_

#include <iostream>
using std::ostream;

class punto{
	friend ostream& operator << (ostream& outs,const punto& source);
public:
	punto(double init_x=0.0,double init_y=0.0){x=init_x;y=init_y;}

	double get_x()const{return x;}
	double get_y()const{return y;}

	void set_x(const double& new_x){x=new_x;}
	void set_y(const double& new_y){y=new_y;}

private:
	double x,y;
};



#endif /* PUNTO_H_ */
