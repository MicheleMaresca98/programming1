/*
 * rational.cpp
 *
 *  Created on: Feb 3, 2019
 *      Author: michelemaresca
 */

#include "rational.h"
#include <iostream>
#include "rationalexception.h"
using namespace std;
namespace michele_maresca{
rational::rational(int init_num,int init_den){
	try{
		if(init_den==0)
			throw rationalexception ();
	}catch(rationalexception& ex){
		cout<<ex.what();
		cout<<"il denominatore è stato sostituito con 1"<<endl;
		init_den=1;
	}
	if(init_den <0){
		init_num=-init_num;
		init_den=-init_den;
	}
	simply(init_num,init_den);


	num=init_num;
	den=init_den;

}

void simply(int& init_num,int& init_den){

while((init_num%init_den)==0){
	if(init_den != 1){
			init_num=init_num/init_den;
			init_den=init_den/init_den;
		}else{
			return;
		}
}
//cout<<"il numeratore cambiato è: "<<init_num<<endl;
return;
}

istream& operator >> (istream& ins,rational& target){
ins>>target.num;
ins>>target.den;
simply(target.num,target.den);
return ins;
}

rational operator + (rational a,rational b){
int sum_num=a.get_num()*b.get_den() + a.get_den()*b.get_num();
		int sum_den=a.get_den()*b.get_den();
	rational sum(sum_num,sum_den);
return sum;
}
rational operator - (rational a,rational b){
	int dif_num=a.get_num()*b.get_den() - a.get_den()*b.get_num();
			int dif_den=a.get_den()*b.get_den();
		rational dif(dif_num,dif_den);
	return dif;
}
rational operator * (rational a,rational b){
int prod_num=a.get_num()*b.get_num();
int prod_den=a.get_den()*b.get_den();
rational prod(prod_num,prod_den);
return prod;
}
rational operator /  (rational a,rational b){
	int quoz_num=a.get_num()*b.get_den();
	int quoz_den=a.get_den()*b.get_num();
	rational quoz(quoz_num,quoz_den);
	return quoz;
}
bool operator == (const rational& a,const rational& b){
	return (a.get_num()== b.get_num()) and (a.get_den() == b.get_den());
}
bool operator != (const rational& a,const rational& b){return !(a==b);}

bool operator < (const rational& a,const rational& b){
return  (a.get_num()/a.get_den() < b.get_num()/b.get_den());
}
bool operator > (const rational& a,const rational& b){
	return (a.get_num()/a.get_den() > b.get_num())/b.get_den() ;
}
bool operator <= (const rational& a,const rational& b){
	return (a.get_num()/a.get_den() <= b.get_num()/b.get_den());
}
bool operator >= (const rational& a,const rational& b){
	return (a.get_num()/a.get_den() >= b.get_num()/b.get_den());
}
ostream& operator <<(ostream& outs,const rational& source){
if(source.get_den()==1){
	outs<<source.get_num();
}else{
	outs<<source.get_num()<<" / "<<source.get_den();
}
return outs;

}

}
