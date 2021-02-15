/*
 * point.h
 *
 *  Created on: Feb 3, 2019
 *      Author: michelemaresca
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>
//#include <cstdlib>
using namespace std;

namespace michele_maresca{
class point{


public:
	point(double init_x=double(),double init_y=double()){x=init_x;y=init_y;}

	void set_x(const double& new_x){x=new_x;}
	void set_y(const double& new_y){y=new_y;}
	void shift(const double& move_x,const double& move_y){x+=move_x;y+=move_y;}

	double get_x()const{return x;}
	double get_y()const{return y;}
	void rotate_to_upper_right(point &p);

	friend  istream& operator>>(istream& ins, point& target);

private:
	double x;
	double y;
};
double distance(const point &p1, const point &p2);
point middle (const point &p1, const point &p2);
bool operator==(const point &p1, const point &p2);
bool operator!=(const point &p1, const point &p2);
point operator+( const point &p1, const point &p2);
ostream &operator<<(ostream &outs, const point &source);

}


#endif /* POINT_H_ */
