/*
 * driver.cpp
 *
 *  Created on: Feb 2, 2019
 *      Author: michelemaresca
 */


#include <iostream>
#include <cstdlib>
#include "node.h"
#include "polinomio.h"
#include "eccpoly.h"
using namespace std;
using namespace michele_maresca;
int main(){

	polinomio<int> a;

	insertpoly(a);
	a.print();

	cout<<endl;
	cout<<"stampo con costruttore di copia: "<<endl;

	polinomio<int> c(a);
	c.print();
	cout<<endl;
	cout<<"somma c+a:"<<endl;
	polinomio<int> d;
	d=c+a;
	d.print();
	cout<<endl;

	cout<<"prodotto c*a:"<<endl;
	polinomio<int> e;
	e=c*a;
	e.print();

	return 0;
}








