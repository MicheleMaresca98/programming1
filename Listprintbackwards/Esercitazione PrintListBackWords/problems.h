/*
 * problem.h
 *
 *  Created on: Jan 30, 2019
 *      Author: michelemaresca
 */

#ifndef PROBLEMS_H_
#define PROBLEMS_H_

namespace michele_maresca {

class problems {
public:
	problems()
    : messagge("Non pui inserire numeri negati o zero\n"){}
	const char* what(){return messagge;}
private:
	const char*messagge;
};

}



#endif /* PROBLEMS_H_ */
