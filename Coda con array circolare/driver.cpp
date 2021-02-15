/*
 * driver.cpp
 *
 *  Created on: Feb 5, 2019
 *      Author: michelemaresca
 */

#include <iostream>
#include "coda.h"

using namespace std;
using namespace michele_maresca;

int main(){
	coda<int> a;

	for(int i=0;i<5;i++)
		a.push(i);

	cout<<"La dimensione della coda è: "<<a.size()<<endl;
	cout<<"Il primo elemento è: "<<a.front()<<endl;

	a.pop();

	cout<<"La dimensione della coda dopo il pop è: "<<a.size()<<endl;
		cout<<"Il primo elemento dopo il pop è: "<<a.front()<<endl;

}

