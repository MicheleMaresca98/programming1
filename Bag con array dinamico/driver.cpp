/*
 * driver.cpp
 *
 *  Created on: Feb 1, 2019
 *      Author: michelemaresca
 */



#include <iostream>
#include "bag.h"
using namespace std;
using namespace michele_maresca;





int main(){
bag<int> b1(5);
bag<char> b2(4);
b1.insert(2);
b1.insert(3);
b1.insert(3);
b1.insert(3);



b2.insert('m');
b2.insert('q');
b2.insert('m');
cout<<"nella bag ci sono "<<b2.count('m')<<" 'm' prima della cancellazione di tutte le 'm'."<<endl;
b2.erase('m');
cout<<"nella bag ci sono "<<b2.count('m')<<" 'm' dopo la cancellazione di tutte le 'm'."<<endl;
cout<<"nella bag ci sono "<<b1.count(3)<<" tre prima della cancellazione di un tre."<<endl;
if(b1.erase_one(3)==true){
cout<<"nella bag ci sono "<<b1.count(3)<<" tre dopo la cancellazione di un tre."<<endl;
}
	return 0;
}


