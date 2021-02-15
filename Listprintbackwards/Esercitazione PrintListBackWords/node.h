/*
 * node.h
 *
 *  Created on: Jan 30, 2019
 *      Author: michelemaresca
 */

#ifndef NODE_H_
#define NODE_H_
#include <cstdlib>

namespace michele_maresca {
template <class Item>
class node {
public:
	node(node<Item>*link_init=NULL,Item data_init=Item()){link_ptr=link_init; data_field=data_init;}
	Item data() const {return data_field;}
	node<Item>*link(){return link_ptr;}
	const node<Item>*link() const {return link_ptr;}
	void set_data(Item entry){data_field=entry;}
	void set_link(node<Item> * new_link){link_ptr=new_link;}
private:
	node<Item>*link_ptr;
	Item data_field;
};
template <class Item>
void list_head_insert(const Item  & data,node<Item>*&head_ptr);
template <class Item>
void list_insert(const Item  & data,node<Item>*previous_ptr);
template <class NodePtr, class Item>
NodePtr list_search(NodePtr head_ptr,const Item  & entry);
template <class Item>
void list_head_remove(node<Item>*&head_ptr);
template <class Item>
void list_print(const node<Item>* head_ptr);
template <class Item>
void list_clear(node<Item>*&head_ptr);
template <class Item>
void list_ord(node<Item>*&head_ptr,const Item & entry);
template <class Item>
node<Item>* previous_ptr(node<Item>*head_ptr,const node<Item>*trovato_ptr);
template <class Item>
void list_print_back(const node<Item>*head_ptr);


} /* namespace FRANCESCOTITO_4860081_P1 */
#include "node.template"




#endif /* NODE_H_ */
