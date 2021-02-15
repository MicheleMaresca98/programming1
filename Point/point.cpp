/*
 * point.cpp
 *
 *  Created on: Feb 3, 2019
 *      Author: michelemaresca
 */


#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;
namespace michele_maresca {
void point::rotate_to_upper_right(point &p){
	double new_x;
		double new_y;

	while (p.get_x() < 0 or p.get_y() < 0) {
		new_x = y;
		new_y = -x;
		p.set_x(new_x);
		p.set_y(new_y);
		}
}

double distance(const point &p1, const point &p2) {
	double answer1,answer2,answer;
	answer1=(p2.get_x()-p1.get_x())*(p2.get_x()-p1.get_x());
	answer2=(p2.get_y()-p1.get_y())*(p2.get_y()-p1.get_y());
	answer=answer1+answer2;
	return sqrt(answer);
}

point middle(const point &p1, const point &p2) {
	double midpoint_x, midpoint_y;
	midpoint_x = (p1.get_x() + p2.get_x()) / 2;
	midpoint_y = (p1.get_y() + p2.get_y()) / 2;
	point midpoint(midpoint_x, midpoint_y);
	return midpoint;
}

point operator+(const point &p1, const point &p2) {
	double sum_x, sum_y;
	sum_x = (p1.get_x() + p2.get_x());
	sum_y = (p1.get_y() + p2.get_y());
	point sum(sum_x, sum_y);
	return sum;
}

ostream& operator<<(ostream &outs, const point &source) {
	outs << "Il punto è ( " << source.get_x() << " , " << source.get_y()
			<< " )";
	return outs;
}

istream& operator>>(istream &ins, point &target) {
	ins >> target.x >> target.y;
	return ins;
}

bool operator==(const point &p1, const point &p2){
	return
			((p1.get_x() == p2.get_x()) and (p1.get_y() == p2.get_y()));
}


bool operator!=(const point &p1, const point &p2) {
	return !(p1==p2);
}
}
