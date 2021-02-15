/*
 * bag.h
 *
 *  Created on: Feb 5, 2019
 *      Author: michelemaresca
 */

#ifndef BAG_H_
#define BAG_H_
#include <cstdlib>
#include "node.h"
namespace michele_maresca{
template <class Item>
class bag{
public:
	typedef std::size_t size_type;
	typedef Item value_type;
	bag(){head_ptr=NULL;many_nodes=0;}
	~bag(){list_clear(head_ptr);many_nodes=0;}
	bag(const bag& source);

	void insert(const Item& entry){list_head_insert(head_ptr,entry);++many_nodes;}
	bool erase_one (const Item& target);
	size_type erase (const Item& target);

	size_type size()const{return many_nodes;}
	size_type count(const Item& target)const;

//	void operator = (const bag& source);
//	void operator +=(const bag& addend);


private:
	node<Item>* head_ptr;
	size_type many_nodes;
};
//template <class Item>
//bag<Item> operator +(const bag<Item>& b1,const bag<Item>& b2);
}

#include "bag.template"

#endif /* BAG_H_ */
