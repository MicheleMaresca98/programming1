/*
 * node.h
 *
 *  Created on: Feb 1, 2019
 *      Author: michelemaresca
 */

#include <cstdlib>
#include<iostream>

#ifndef NODE_H_
#define NODE_H_

namespace michele_maresca {
template <class Item>
class node {
public:
	node(Item coeff_init=Item(),Item  exp_init=Item(),node<Item>*link_init=NULL)
	{link_field=link_init; coeff_field=coeff_init; exp_field=exp_init;}
	void set_link(node<Item>*link){link_field=link;}
	void set_data(Item & entry){coeff_field=entry;}
	void set_exp(Item & exp){exp_field=exp;}
	const node<Item>*link() const{return link_field;}
	node<Item>*link(){return link_field;}
	Item data()const{return coeff_field;}
	Item exp()const{return exp_field;}

private:
	node<Item>*link_field;
	Item coeff_field;
	Item exp_field;

};
	template <class Item>
	void list_head_insert(const Item & coeff,const Item& exp,node<Item>*& head_ptr);
	template <class Item>
	void list_ord_insert(const Item & coeff,const Item& exp,node<Item>*& head_ptr);
	template <class Item>
	void list_print(const node<Item>*head_ptr);
	template <class Item>
	void list_insert(const Item & coeff,const Item &exp ,node<Item>*previous_ptr);
	template <class Item,class NodePtr>
	NodePtr list_search(NodePtr head_ptr,Item entry);
	template <class NodePtr>
	NodePtr list_locate(NodePtr head_ptr,std::size_t position);
	template <class Item>
	void list_head_remove(node<Item>*&head_ptr);
	template <class Item>
	node<Item>*previous_pr(node<Item>*head_ptr,const node<Item>*trovato);
	template <class Item>
	void list_remove(node<Item>*previous_ptr);
	template <class Item>
	std::size_t length(const node<Item>*head_ptr);
	template <class Item>
	void list_clear(node<Item>*&head_ptr);
	template <class Item>
	void list_copy(node<Item>*source_ptr,node<Item>*&head,node<Item>*&tail);
} /* namespace michele_maresca */
#include "node.template"
#endif /* NODE_H_ */
