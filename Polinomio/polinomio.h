/*
 * polinomio.h
 *
 *  Created on: Feb 1, 2019
 *      Author: michelemaresca
 */
#include "node.h"
#include "eccpoly.h"
#include <cstdlib>
#ifndef POLINOMIO_H_
#define POLINOMIO_H_


namespace michele_maresca {
template <class Item>
class polinomio {
public:
	polinomio(){link=NULL;}
	~polinomio(){list_clear(link);}
	polinomio(const polinomio<Item> & target)
	{
		node<Item>*tail;
		list_copy(target.link,link,tail);
	}
	node<Item>*link_val(){return link;}
	node<Item>*link_val()const {return link;}
	void get_coeff(){link->data();}
	void get_exp(){link->exp();}
	bool empty()const{ return (link==NULL);}
	void assign_coef(Item new_coeff,Item new_exp){
		for(node<Item>*cursor =link; cursor!=NULL; cursor=cursor->link()){
			if(cursor->exp()==new_exp){
				cursor->set_data(new_coeff);
				return;
			}

		}
		list_ord_insert(new_coeff,new_exp,link);
	}
	void add_coef(Item new_coeff,Item new_exp){
		for(node<Item>*cursor =link; cursor!=NULL; cursor=cursor->link()){
			if(cursor->exp()==new_exp){
				Item old_coeff=cursor->data();
				Item new1=old_coeff+new_coeff;
				cursor->set_data(new1);
				return;
			}
		}
		list_ord_insert(new_coeff,new_exp,link);
	}
	void insert(const Item & coeff,const Item & exp){

		if(link==NULL)
		{
			list_head_insert(coeff,exp,link);
		}
		else{
			if(exp<link->exp()){
				list_head_insert(coeff,exp,link);
			}
			else{
				node<Item>* cursor;
				for(cursor=link; cursor!=NULL; cursor=cursor->link()){
						if(cursor->exp()==exp)
						{
							 Item x=cursor->data()+coeff;
							 cursor->set_data(x);
							 return;
						}
						else if(cursor->link()==NULL)
						{
								list_insert(coeff,exp,cursor);
								return;
						}
						else if(cursor->link()->exp()>exp){
								list_insert(coeff,exp,cursor);
								return;
						}
					}
				}
		}
}

	void operator=(const polinomio<Item> & a){
		node<Item> * tail_ptr;
		if(this==&a)
		{
		return;
		}

		list_clear(link);
		list_copy(a.link,link,tail_ptr);
	}
	friend polinomio<Item> operator+(const polinomio<Item> & a, const polinomio<Item> &b){
		polinomio<Item> somma;
		node<Item>*cursorA=a.link;
		node<Item>*cursorB=b.link;

		while(cursorA!=NULL){
			somma.insert(cursorA->data(),cursorA->exp());
			cursorA=cursorA->link();
		}
		while(cursorB!=NULL){
					somma.insert(cursorB->data(),cursorB->exp());
					cursorB=cursorB->link();
				}

		return somma;
	}
	friend polinomio<Item> operator-(const polinomio<Item> & a, const polinomio<Item> &b){
		polinomio<Item> differenza;
		node<Item>*cursorA=a.link;
		node<Item>*cursorB=b.link;

		while(cursorA!=NULL){
				differenza.insert(cursorA->data(),cursorA->exp());
				cursorA=cursorA->link();
			}
			while(cursorB!=NULL){
						differenza.insert(-cursorB->data(),cursorB->exp());
						cursorB=cursorB->link();
					}

			return differenza;

	}
	friend polinomio<Item> operator*(const polinomio<Item>&a,const polinomio<Item>&b){
		polinomio<Item> prodotto;

			for(node<Item>* min=a.link;min!=NULL;min=min->link()){
				for(node<Item>*max=b.link;max!=NULL;max=max->link()){
				prodotto.insert(min->data()*max->data(),min->exp()+max->exp());
			}
		}

		return prodotto;
	}

	void print(){list_print(link);}
	void operator+=(const polinomio<Item> & a){
		(*this)=(*this)+a;
	}

	void operator-=(const polinomio<Item> & a){
			(*this)=(*this)-a;
	}

	void operator*=(const polinomio<Item> & a){

				(*this)=(*this)*a;
	}


private:
	node<Item>*link;
};
template <class Item>
void insertpoly(polinomio<Item>& newpoly){
	int termine;
	int i=1;
	int coeff;
	int exp;
	cout<<"quanti termine vuoi inserire\n";
	cin>>termine;
	while(i<=termine){
		cout<<"inserisci coefficiente["<<i<<"]\n";
		cin>>coeff;
		cout<<"inserisci espenente["<<i<<"]\n";
		cin>>exp;
		try{
			if(coeff==0)
				throw eccpoly();
			newpoly.insert(coeff,exp);
			i++;
		}catch(eccpoly& ex){
			cout<<"exception: "<<ex.what1()<<endl;

		}

	}

}

} /* namespace michele_maresca */



#endif /* POLINOMIO_H_ */
