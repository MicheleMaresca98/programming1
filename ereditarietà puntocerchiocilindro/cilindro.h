/*
 * cilindro.h
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */

#ifndef CILINDRO_H_
#define CILINDRO_H_

#include "cerchio.h"

class cilindro: public cerchio{
	friend ostream& operator << (ostream& outs, const cilindro& source);
public:
	cilindro(double init_x=0.0,double init_y =0.0,double init_raggio=0.0,double init_altezza=0.0);
	void set_altezza(const double& new_altezza){altezza=new_altezza;}
	double get_altezza()const{return altezza;}
	double volume()const{return area()*altezza;}
private:
	double altezza;
};




#endif /* CILINDRO_H_ */
