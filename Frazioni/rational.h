/*
 * rational.h
 *
 *  Created on: Feb 3, 2019
 *      Author: michelemaresca
 */
#include <iostream>
using namespace std;

#ifndef RATIONAL_H_
#define RATIONAL_H_

namespace michele_maresca{
class rational{
public:
	rational(int init_num=int(),int init_den=1);

	void set_num(const int& new_num){num=new_num;}
	void set_den(const int& new_den){den=new_den;}

	int get_num()const {return num;}
	int get_den()const {return den;}

friend istream& operator >> (istream& ins,rational& target);

private:
int num;
int den;
};
rational operator + (rational a,rational b);
rational operator - (rational a,rational b);
rational operator * (rational a,rational b);
rational operator /  (rational a,rational b);
bool operator == (const rational& a,const rational& b);
bool operator != (const rational& a,const rational& b);
bool operator < (const rational& a,const rational& b);
bool operator > (const rational& a,const rational& b);
bool operator <= (const rational& a,const rational& b);
bool operator >= (const rational& a,const rational& b);
ostream& operator <<(ostream& outs,const rational& source);
void simply(int& init_num,int& init_den);
}



#endif /* RATIONAL_H_ */
