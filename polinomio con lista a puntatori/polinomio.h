/*
 * polinomio.h
 *
 *  Created on: Feb 6, 2019
 *      Author: michelemaresca
 */

#ifndef POLINOMIO_H_
#define POLINOMIO_H_
#include "node.h"
namespace michele_maresca{
template <class Item>
class polinomio{
public:
	polinomio(){link=NULL;}
	polinomio(const polinomio& source);
	~polinomio(){list_clear(link);}

	void insert(const Item& new_coef,const Item& new_exp){list_insert_ord(link,new_coef,new_exp);}

	node<Item>* get_link(){return link;}
	const node<Item>* get_link()const {return link;}

	void print(){list_print(link);}

//friend polinomio operator +=( polinomio<Item>& p1, polinomio<Item>& p2){
//	polinomio<Item> sum;
//	node<Item>* cursor1;
//	node<Item>* cursor2;
//
//	for(cursor1=p1.get_link();cursor1 != NULL; cursor1=cursor1->link()){
//		sum.insert(cursor1->coef(),cursor1->exp());
//	}
//	for(cursor2=p2.get_link();cursor2 != NULL; cursor2=cursor2->link()){
//			sum.insert(cursor2->coef(),cursor2->exp());
//		}
//	return sum;
//}

//friend void operator -=(const polinomio& p){
//	node<Item>* cursor=p.link;
//	Item new_coef;
//		while(cursor != NULL){
//			new_coef=0;
//			new_coef-=p.link->coef();
//		this->insert(new_coef,p.link->exp());
//		cursor=cursor->link();
//		}
//}
//friend void operator *=(const polinomio& p){
//	node<Item>* cursor=p.link;
//		Item new_coef;
//			while(cursor != NULL){
//				new_coef=1;
//				new_coef*=p.link->coef();
//			this->insert(new_coef,p.link->exp());
//			cursor=cursor->link();
//			}
//}

	void operator = (const polinomio& source);

private:
	node<Item>* link;
};


template <class Item>
polinomio<Item> operator + ( polinomio<Item>& p1, polinomio<Item>& p2);

template <class Item>
polinomio<Item> operator - ( polinomio<Item>& p1, polinomio<Item>& p2);

template <class Item>
polinomio<Item> operator * ( polinomio<Item>& p1, polinomio<Item>& p2);

template <class Item>
void operator +=(polinomio<Item>& p,polinomio<Item>& addend){p=p+addend;}

template <class Item>
void operator -=(polinomio<Item>& p,polinomio<Item>& addend){p=p-addend;}

template <class Item>
void operator *=(polinomio<Item>& p,polinomio<Item>& addend){p=p*addend;}
}

#include "polinomio.template"

#endif /* POLINOMIO_H_ */
