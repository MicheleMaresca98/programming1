/*
 * node.h
 *
 *  Created on: Jan 30, 2019
 *      Author: michelemaresca
 */

#ifndef NODE_H_
#define NODE_H_

#include<cstdlib>
namespace michele_maresca {
template <class Item>
class node {
public:

	//constructor
	node(Item data_init=Item(),node * link_init=NULL)
		{ link_field=link_init; data_field=data_init;}
	//functions
	void set_data(const Item & new_data){ data_field=new_data;}
	void set_link(node*new_link){link_field=new_link;}
	Item data()const {return data_field;}
	node<Item>*link() const {return link_field;}
	node<Item>*link(){return link_field;}


private:
	node<Item>* link_field;
	Item data_field;
};
//toolkit
template <class Item>
void list_print(const node<Item>* target_ptr) ;
template <class Item>
void list_head_insert(node<Item>*&head,const Item& entry);
template <class Item>
node<Item>* previous_ptr(node<Item>*head_ptr,const node<Item>*trovato_ptr);
template <class Item>
node<Item>*list_search(node<Item>*head_ptr,const Item & target);
template <class Item>
const node<Item>*list_search(const node<Item>*head_ptr,const Item & target);
template <class Item>
void list_insert(node<Item>* previous_ptr,const Item &entry);
template <class Item>
std::size_t length(const node<Item>*head_ptr);
template <class Item>
node<Item>* list_locate(node<Item>*head_ptr,size_t position);
template <class Item>
const node<Item>* list_locate(const node<Item>*head_ptr,size_t position);
template <class Item>
void list_head_remove(node<Item>*&head_ptr);
template <class Item>
void list_remove(node<Item>*previous_ptr);
template <class Item>
void list_clear(node<Item>*&head_ptr);
template <class Item>
void list_copy(const node<Item>*source_ptr, node<Item>*&head_ptr2,node<Item>*&tail_ptr2);
template <class Item>
std::size_t list_occurences(const node<Item>*head_ptr,const Item & entry);
template <class Item>
void list_ord_insert(const Item & data,node<Item> *& head_ptr);
template <class Item>
node<Item>* list_merge(node<Item> * head_ptr1,node<Item> * head_ptr2);
}

#include "node.template"



#endif /* NODE_H_ */
