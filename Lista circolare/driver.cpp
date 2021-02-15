/*
 * driver.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: michelemaresca
 */

#include "queue.h"
#include <iostream>

using namespace michele_maresca;
using namespace std;

int main(){
	queue<int> a;
	queue<char> b;


for(int i=0;i<5;i++)
	a.push(i);

cout<<"La prima coda presenta "<<a.size()<<" elementi e il primo elemento è "<<a.front()<<endl;
a.pop();
cout<<"Dopo il pop la coda presenta "<<a.size()<<" elementi e il primo elemento è "<<a.front()<<endl;




for(char i='a';i<'e';i++)
	b.push(i);

cout<<"La seconda coda presenta "<<b.size()<<" elementi e il primo elemento è "<<b.front()<<endl;
b.pop();
cout<<"Dopo il pop la coda presenta "<<b.size()<<" elementi e il primo elemento è "<<b.front()<<endl;

}


