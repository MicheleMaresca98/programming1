/*
 * driver.cpp
 *
 *  Created on: Feb 10, 2019
 *      Author: michelemaresca
 */

#include <iostream>
#include "node.h"

using namespace std;
using namespace michele_maresca;

int main(){
	node<int>* a=NULL;
	int value;
	for(int i=20;i>0;i-=2)
		list_head_insert(a,i);

	cout<<"The list is : ";
	list_print(a);
	cout<<endl;
	cout<<"Enter a value to search for :";
	cin>>value;
	node<int>* trovato=list_search(a,value);
	cout<<endl;
	cout<<"Destroying nodes..."<<endl;
	list_print(a);
	cout<<endl;
	cout<<"All nodes destroyed"<<endl;
}


