/*
 * driver.cpp
 *
 *  Created on: Jan 31, 2019
 *      Author: michelemaresca
 */





#include <cstdlib>
#include <iostream>
using namespace std;
#include "queue.h"
using namespace michele_maresca;

int main(){
	queue<int> a;
	a.push(5);
//	a.push(6);
//	a.push(7);
	cout<<a.front()<<endl;
	a.pop();
	cout<<a.front()<<endl;
	cout<<"fine";
}
