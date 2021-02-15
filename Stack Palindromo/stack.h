/*
 * stack.h
 *
 *  Created on: Feb 5, 2019
 *      Author: michelemaresca
 */

#ifndef STACK_H_
#define STACK_H_
#include "node.h"
#include <cstdlib>
#include <cassert>
namespace michele_maresca{
template <class Item>
class stack{
public:
	typedef std::size_t size_type;
	typedef Item value_type;

	stack(){front_ptr=NULL;}
	~stack(){list_clear(front_ptr);}
	void push(const Item& entry){ list_head_insert(front_ptr,entry);}
	void pop(){assert(!empty());list_head_remove(front_ptr);}
	Item top(){assert(!empty());return front_ptr->data();}
	bool empty(){return front_ptr == NULL;}
private:
	node<Item>* front_ptr;
};
}

#endif /* STACK_H_ */
