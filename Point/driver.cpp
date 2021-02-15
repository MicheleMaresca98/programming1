/*
 * driver.cpp
 *
 *  Created on: Feb 3, 2019
 *      Author: michelemaresca
 */
#include <iostream>
using namespace std;
#include "point.h"

using namespace michele_maresca;

int main(){
point speed1(5,7);
point speed2(1,2);
point total;
total= speed1 + speed2;
cout << total.get_x() << endl;
cout << total.get_y() << endl;
point mid=middle(speed1,speed2);
cout<<mid;
point a(2);
point b;

if(a==b)
	cout<<"i due punti sono uguali"<<endl;

cout<<"distanza a b :"<<endl;
cout<<distance(a,b);

}
