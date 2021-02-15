/*
 * rational.h
 *
 *  Created on: Feb 9, 2019
 *      Author: michelemaresca
 */

#ifndef RATIONAL_H_
#define RATIONAL_H_
#include <iostream>
using std::ostream;
namespace michele_maresca{
class rational{
public:
rational(int init_num=0,int init_den=1);

int get_num()const{return num;}
int get_den()const{return den;}

void set_num(const int& new_num){num=new_num;}
void set_den(const int& new_den){den=new_den;}

private:
	int num;
	int den;
	void simply();
	int MCD();
};
ostream& operator << (ostream& outs,const rational& source);
rational operator + (const rational& r1,const rational& r2);
rational operator - (const rational& r1,const rational& r2);
rational operator * (const rational& r1,const rational& r2);
rational operator / (const rational& r1,const rational& r2);


bool operator == (const rational& r1,const rational& r2);

bool operator > (const rational& r1,const rational& r2);

bool operator < (const rational& r1,const rational& r2);

bool operator <= (const rational& r1,const rational& r2);

bool operator >= (const rational& r1,const rational& r2);

bool operator != (const rational& r1,const rational& r2);

}



#endif /* RATIONAL_H_ */
