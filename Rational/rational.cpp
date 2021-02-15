/*
 * rational.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: michelemaresca
 */


#include "rational.h"
#include "exceptionrational.h"
#include <iostream>
using std::cout;
using std::endl;

namespace michele_maresca{
rational::rational(int init_num,int init_den){
	try{
			if(init_den <0){
				init_den=-init_den;
				init_num=-init_num;
			}else if(init_den==0)
				throw exceptionrational();
}catch(exceptionrational& ex){
	cout<<ex.what()<<endl;
	init_den=1;
	cout<<"Il denominatore è stato sostituito con 1"<<endl;
}
num=init_num;
den=init_den;
simply();
}

ostream& operator << (ostream& outs,const rational& source){
	if(source.get_den() == 1){
		outs<<source.get_num();
	}else{
	outs<<source.get_num()<<" / "<<source.get_den();
	}
	return outs;
}
	rational operator + (const rational& r1,const rational& r2){
		int sum_num,sum_den;
		sum_num=r1.get_num()*r2.get_den() + r2.get_num()*r1.get_den();
		sum_den=r1.get_den()*r2.get_den();
		rational sum(sum_num,sum_den);
		return sum;
	}
	rational operator - (const rational& r1,const rational& r2){
		int dif_num,dif_den;
				dif_num=r1.get_num()*r2.get_den() - r2.get_num()*r1.get_den();
				dif_den=r1.get_den()*r2.get_den();
				rational dif(dif_num,dif_den);
				return dif;
	}
	rational operator * (const rational& r1,const rational& r2){
		int prod_num,prod_den;
				prod_num=r1.get_num()*r2.get_num();
				prod_den=r1.get_den()*r2.get_den();
				rational prod(prod_num,prod_den);
				return prod;
	}
	rational operator / (const rational& r1,const rational& r2){
		int quoz_num,quoz_den;
				quoz_num=r1.get_num()*r2.get_den();
				quoz_den=r1.get_den()*r2.get_num();
				rational quoz(quoz_num,quoz_den);
				return quoz;
	}

	bool operator == (const rational& r1,const rational& r2){
	return r1.get_num()/r1.get_den() == r2.get_num()/r2.get_den();
}

bool operator > (const rational& r1,const rational& r2){
	return r1.get_num()/r1.get_den() > r2.get_num()/r2.get_den();
}

bool operator < (const rational& r1,const rational& r2){
	return r1.get_num()/r1.get_den() < r2.get_num()/r2.get_den();
}

bool operator <= (const rational& r1,const rational& r2){
	return r1.get_num()/r1.get_den() <= r2.get_num()/r2.get_den();
}

bool operator >= (const rational& r1,const rational& r2){
	return r1.get_num()/r1.get_den() >= r2.get_num()/r2.get_den();
}

bool operator != (const rational& r1,const rational& r2){
	return r1.get_num()/r1.get_den() != r2.get_num()/r2.get_den();
}
void rational::simply(){
	int mcd=MCD();
	num=num/mcd;
	den=den/mcd;
}
	int rational::MCD(){
		int a=num;
		int b=den;
		int resto=a%b;
		if(resto == 0){
			return b;
		}else {
			while(resto != 0){
				a=den;
				b=resto;
				resto=a%b;
			}
			return b;
		}
	}

}
