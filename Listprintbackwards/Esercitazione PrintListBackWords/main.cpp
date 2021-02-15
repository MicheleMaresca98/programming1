/*
 * main.cpp
 *
 *  Created on: Jan 30, 2019
 *      Author: michelemaresca
 */

#include <iostream>
#include <cstdlib>
#include "node.h"
#include "list.h"
using namespace std;
using namespace michele_maresca;

int main(){
	list<int> firstlist;
	firstlist.listinsert();
	cout<<"questa � la lista = \n";
	firstlist.printlist();
	cout<<endl;
	cout<<"la lista n ordine inverso =\n";
	firstlist.printlistback();

return 0;
}






