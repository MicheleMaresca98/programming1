/*
 * drvier.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: michelemaresca
 */

#include <iostream>
#include "rational.h"

using namespace std;
using namespace michele_maresca;

int main(){
	rational a(7,3);
	rational b(1,3);

	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	cout<<a<<" - "<<b<<" = "<<a-b<<endl;
	cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	cout<<a<<" / "<<b<<" = "<<a/b<<endl;

	cout<<a<<" is: "<<endl;
	if(a<b){
		cout<<" < "<<b<<" according to the overloaded < "<<endl;
	}else{
		cout<<" >= "<<b<<" according to the overloaded < "<<endl;
	}

	if(a>b){
			cout<<" > "<<b<<" according to the overloaded > "<<endl;
		}else{
			cout<<" <= "<<b<<" according to the overloaded > "<<endl;
		}

	if(a<=b){
			cout<<" <= "<<b<<" according to the overloaded <= "<<endl;
		}else{
			cout<<" > "<<b<<" according to the overloaded <= "<<endl;
		}

	if(a>=b){
			cout<<" >= "<<b<<" according to the overloaded >= "<<endl;
		}else{
			cout<<" < "<<b<<" according to the overloaded >= "<<endl;
		}

	if(a==b){
			cout<<" == "<<b<<" according to the overloaded == "<<endl;
		}else{
			cout<<" != "<<b<<" according to the overloaded == "<<endl;
		}

	if(a!=b){
			cout<<" != "<<b<<" according to the overloaded != "<<endl;
		}else{
			cout<<" == "<<b<<" according to the overloaded != "<<endl;
		}
}

