/*
 * rationalexception.h
 *
 *  Created on: Feb 3, 2019
 *      Author: michelemaresca
 */

#ifndef RATIONALEXCEPTION_H_
#define RATIONALEXCEPTION_H_

namespace michele_maresca{
class rationalexception{
public:
	rationalexception():message("Non puoi inserire un denominatore uguale a 0\n"){}
		const char* what(){return message;}
private:
	const char* message;
};
}



#endif /* RATIONALEXCEPTION_H_ */
