/*
 * exceptionrational.h
 *
 *  Created on: Feb 9, 2019
 *      Author: michelemaresca
 */

#ifndef EXCEPTIONRATIONAL_H_
#define EXCEPTIONRATIONAL_H_

namespace michele_maresca{
class exceptionrational{
public:
exceptionrational():message("Il denominatore deve essere diverso da zero"){}
const char* what(){return message;}

private:
	const char* message;
};

}

#endif /* EXCEPTIONRATIONAL_H_ */
