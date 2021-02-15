/*
 * node.h
 *
 *  Created on: Jan 31, 2019
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
	typedef std::size_t size_type;
	node(const Item& init_data = Item(),node* init_link = NULL){
		data_field=init_data;
		link_field=init_link;
	}
	//~node();
	void set_data(const Item& new_data){data_field=new_data;}
	void set_link(node* new_link){link_field=new_link;}
	Item data(){return data_field;}
	node* link(){return link_field;}
	const Item data() const {return data_field;}
	const node* link() const {return link_field;}

private:
	node* link_field;
	Item data_field;
};

//TOOLKIT
template <class Item>
void list_clear(node<Item>*& head_ptr);
template <class Item>
std::size_t list_length(const node<Item>* head_ptr);
template <class Item>
void list_head_insert(node<Item>*& head_ptr,const Item& entry);
template <class Item>
void list_head_remove(node<Item>*& head_ptr);
template <class Item>
void list_copy(node<Item>* source_ptr,node<Item>*& head_ptr,node<Item>*& tail_ptr);
template <class Item>
void list_insert(node<Item>*& previous_ptr,const Item& entry);
}

#include "node.template"


#endif /* NODE_H_ */
