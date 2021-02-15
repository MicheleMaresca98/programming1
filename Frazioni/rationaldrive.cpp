/*
 * rationaldrive.cpp
 *
 *  Created on: Feb 3, 2019
 *      Author: michelemaresca
 */



#include <iostream>
using namespace std;

#include "rational.h"
using namespace michele_maresca;
int main(){
rational a;
rational b;

cout<<"Insersici numeratore e denominatore del secondo numero: "<<endl;
cin>>a;
cout<<"Insersici numeratore e denominatore del secondo numero: "<<endl;
cin>>b;

cout<<a<<endl;

cout<<b<<endl;

cout<<"La somma è: "<<a+b<<endl;

cout<<"il prodotto è: "<<a*b<<endl;

cout<<"Il quoziente è: "<<a/b<<endl;

cout<<"La differenza è: "<<a-b<<endl;
}
