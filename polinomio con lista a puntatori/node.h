/*
 * node.h
 *
 *  Created on: Feb 6, 2019
 *      Author: michelemaresca
 */

#ifndef NODE_H_
#define NODE_H_
#include <cstdlib>

namespace michele_maresca{
template <class Item>
class node{
public:
	typedef Item value_type;
	node(Item init_coef=Item(),Item init_exp=Item(),node* init_link=NULL){coef_field=init_coef;exp_field=init_exp;link_field=init_link;}

	node* link(){return link_field;}
	Item coef(){return coef_field;}
	Item exp(){return exp_field;}

	const node* link()const {return link_field;}
	const Item coef()const {return coef_field;}
	const Item exp()const {return exp_field;}

	void set_link(node* new_link){link_field=new_link;}
	void set_coef(const Item& new_coef){coef_field=new_coef;}
	void set_exp(const Item& new_exp){coef_field=new_exp;}

private:
	node* link_field;
	Item coef_field;
	Item exp_field;

};
//TOOLKIT
template <class Item>
void list_head_insert(node<Item>*& head_ptr,const Item& new_coef,const Item& new_exp);

template <class Item>
void list_insert(node<Item>* previous_ptr,const Item& new_coef,const Item& new_exp);

template <class Item>
void list_clear(node<Item>*& head_ptr);

template <class Item>
void list_head_remove(node<Item>*& head_ptr);

template <class Item>
void list_copy(const node<Item>* source_ptr,node<Item>*& head_ptr, node<Item>*& tail_ptr);

template <class Item>
void list_print(node<Item>* head_ptr);

template <class Item>
void list_insert_ord(node<Item>*& head_ptr,const Item& new_coef,const Item& new_exp);
}
#include "node.template"

#endif /* NODE_H_ */
