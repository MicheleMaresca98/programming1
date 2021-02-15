/*
 * driver.cpp
 *
 *  Created on: Feb 7, 2019
 *      Author: michelemaresca
 */
#include <iostream>
#include "stack.h"
#include <string>

using namespace std;
using namespace michele_maresca;
bool is_balanced(string);
int main(){
	char equazione[100];
	cout<<"Inserisci espressione: "<<endl;
	while(cin.getline(equazione,100)){
		if(is_balanced(equazione)==true){
			cout<<"L'espressione è bilanciata."<<endl;
		}else{
			cout<<"L'espressione NON è bilanciata."<<endl;
		}
	}
}

bool is_balanced(string eq){
	stack<char> s;
	for(size_t i=0;i<eq.length();++i){
		if(eq[i]=='('){
		s.push(eq[i]);
	}else if(eq[i]==')'){
		s.pop();
	}
	}
	if(s.empty() == true){
		return true;
	}else{
		return false;
	}
}
