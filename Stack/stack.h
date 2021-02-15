/*
 * stack.h
 *
 *  Created on: Jan 30, 2019
 *      Author: michelemaresca
 */

#ifndef STACK_H_
#define STACK_H_
#include <cstdlib>
#include <cassert>
#include "node.h"
namespace michele_maresca{
template <class Item>
class stack{
public:
	//TYPEDEFS
	typedef std::size_t size_type;
	typedef Item value_type;
	//COSTRUTTORI E DISTRUTTORE
	stack(){top_ptr =NULL;}
	~stack(){list_clear(top_ptr);}
	stack(const stack& source);
	//MODIFICATION MEMBER-FUNCTION
	void push(const Item& entry){list_head_insert(top_ptr,entry);}
	void pop(){
		assert(!empty());
	list_head_remove(top_ptr);
	}
	void operator = (const stack& source);
	//NON-MODIFICATION MEMBER-FUNCTION
	Item top() const {
		assert(!empty());
		return top_ptr -> data();
	}
	bool empty() const {return top_ptr == NULL;}
	size_type size() const {return list_length(top_ptr);}
private:
	node<Item>* top_ptr;
};
}


#include "stack.template"

#endif /* STACK_H_ */
