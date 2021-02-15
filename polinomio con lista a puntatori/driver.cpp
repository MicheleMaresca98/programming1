/*
 * driver.cpp
 *
 *  Created on: Feb 6, 2019
 *      Author: michelemaresca
 */




#include <iostream>
using namespace std;

#include "polinomio.h"
#include "exceptionpolinomio.h"
using namespace michele_maresca;

void polyinsert(polinomio<int>& p);
int main(){
	polinomio<int> p1;

	polyinsert(p1);

	cout << "Il polinomio inserito è :" << endl;
	p1.print();
	cout << endl;

	polinomio<int> p2;

	polyinsert(p2);

	cout << "Il polinomio inserito è :" << endl;
	p2.print();
	cout << endl;

	cout << "la loro somma è : " << endl;
	polinomio<int> somma;

//	somma = p1 + p2;
	p1+=p2;
	p1.print();
//	somma.print();
	cout << endl;

	cout << "Il loro prodotto è : " << endl;
	polinomio<int> prodotto;

	prodotto = p1 * p2;

	prodotto.print();
	cout << endl;
}




void polyinsert(polinomio<int>& p){
	size_t i=0,terms;
	int coefficient,exponent;
	cout<<"Enter number of polynomial terms : ";
	cin>>terms;
	while(i<terms){
		try{
		cout<<"Enter coeffcient : ";
		cin>>coefficient;
		if(coefficient == 0)
			throw exceptionpolinomio();
		}catch(exceptionpolinomio& ex){
			cout<<ex.what()<<endl;
			cout<<"Inserisci nuovo coefficient diverso da 0 ";
			cin>>coefficient;
		}
		cout<<"Enter exponent : ";
		cin>>exponent;
		p.insert(coefficient,exponent);
		++i;
	}
}



