/*
 * cilindro.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: michelemaresca
 */


#include "cilindro.h"
#include <iostream>
using std::endl;
cilindro::cilindro(double init_x,double init_y,double init_raggio,double init_altezza)
:cerchio(init_x,init_y,init_raggio)
 {altezza=init_altezza;}

ostream& operator << (ostream& outs, const cilindro& source){
	outs<<"Alla base del cilindro : "<<endl;
//	outs<<"Il raggio del cerchio di base è "<<source.get_raggio()<<endl;
//	outs<<"L'area del cerchio di base è "<<source.area()<<endl;
	outs<<static_cast<cerchio>(source)<<endl;
	outs<<"L'altezza del cilindro è "<<source.altezza<<endl;
	outs<<"Il volume del cilindro è "<<source.volume()<<endl;
	return outs;
}
