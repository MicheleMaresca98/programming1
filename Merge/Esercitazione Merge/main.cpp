/*
 * main.cpp
 *
 *  Created on: Jan 30, 2019
 *      Author: michelemaresca
 */

#include <iostream>
#include "node.h"
#include <cstdlib>
using namespace std;
using namespace michele_maresca;

int main(){
	node<int>* head_ptr=NULL;
	list_ord_insert(2,head_ptr);
	list_ord_insert(5,head_ptr);
	list_ord_insert(4,head_ptr);
	list_ord_insert(6,head_ptr);
	list_print(head_ptr);
	cout<<endl;
	node<int>* head_ptrr=NULL;
	list_ord_insert(2,head_ptrr);
	list_ord_insert(5,head_ptrr);
	list_ord_insert(4,head_ptrr);
	list_ord_insert(6,head_ptrr);
	list_print(head_ptrr);
	cout<<endl;
	node<int>* head_ptrrr=NULL;
	head_ptrrr=list_merge(head_ptr,head_ptrr);
	list_print(head_ptrrr);
	return EXIT_SUCCESS;
}






