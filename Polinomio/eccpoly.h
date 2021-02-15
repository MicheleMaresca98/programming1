/*
 * eccpoly.h
 *
 *  Created on: Feb 2, 2019
 *      Author: michelemaresca
 */

#include <iostream>
using namespace std;
#ifndef ECCPOLY_H_
#define ECCPOLY_H_

namespace michele_maresca {

class eccpoly {
public:
	eccpoly()
	: message("non puoi aggiungere un coefficiente uguale a zero"){}
	const char* what1(){return message;}
private:
	const char*message;
};

} /* namespace michele_maresca */

#endif /* ECCPOLY_H_ */
