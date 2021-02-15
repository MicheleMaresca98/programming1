/*
 * exceptionpolinomio.h
 *
 *  Created on: Feb 6, 2019
 *      Author: michelemaresca
 */

#ifndef EXCEPTIONPOLINOMIO_H_
#define EXCEPTIONPOLINOMIO_H_

namespace michele_maresca{
class exceptionpolinomio{
public:
	exceptionpolinomio():message("Non puoi inserire un coefficiente uguale a 0"){}
	const char* what(){return message;}
private:
	const char* message;
};
}



#endif /* EXCEPTIONPOLINOMIO_H_ */
