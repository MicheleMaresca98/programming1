/*
 * stack.h
 *
 *  Created on: Feb 7, 2019
 *      Author: michelemaresca
 */

#ifndef STACK_H_
#define STACK_H_
#include "node.h"
#include <cassert>
namespace michele_maresca{
template <class Item>
class stack{
public:
	typedef Item value_type;
	typedef std::size_t size_type;

	stack(){top_ptr=NULL;}
	stack(const stack& source){node<Item>*tail_ptr;list_copy(source.top_ptr,top_ptr,tail_ptr);}
	~stack(){list_clear(top_ptr);}

	void push(const Item& entry){list_head_insert(top_ptr,entry);}
	void pop(){assert(!empty());list_head_remove(top_ptr);}
	Item top()const{return top_ptr->data();}

	bool empty()const{return top_ptr == NULL;}

	void operator = (const stack& source);
private:
	node<Item>* top_ptr;
};
}

#include "stack.template"
#endif /* STACK_H_ */
