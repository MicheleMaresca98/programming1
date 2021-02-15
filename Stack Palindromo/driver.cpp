/*
 * driver.cpp
 *
 *  Created on: Feb 5, 2019
 *      Author: michelemaresca
 */


#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#include "stack.h"
using namespace michele_maresca;
void palindroma(string);



int main(){
//	string inserimento;
	char inserimento[100];
	cout<<"Enter a sequence: "<<endl;
	while(cin.getline(inserimento,100)){
		palindroma(inserimento);
	}
}

void palindroma(string a){
	stack<char> pila;
	for(size_t i=0;i<a.length();i++){
		pila.push(a[i]);
	}
	for(size_t i=0;i<a.length();i++){
			if(pila.top() != a[i]){
				cout<<"Non è palindroma "<<endl;
				return;
			}
			pila.pop();
		}
	cout<<"E' palindroma "<<endl;
}

