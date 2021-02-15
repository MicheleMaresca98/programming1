/*
 * queue.h
 *
 *  Created on: Feb 9, 2019
 *      Author: michelemaresca
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include "node.h"

namespace michele_maresca{
template <class Item>
class queue{
public:
	typedef std::size_t size_type;
	typedef Item value_type;

	queue(){front_ptr=NULL;count=0;}
	queue(const queue& source)
	{node<Item>* tail_ptr;count=source.count;list_copy(source.front_ptr,front_ptr,tail_ptr);}
	~queue(){list_clear(front_ptr);}

	void push(const Item& entry);
	void pop();
	Item front()const;
	bool empty()const{return count == 0;}
	size_type size()const{return count;}

	void operator = (const queue& source);
private:
	node<Item>* front_ptr;
	size_type count;
};
}
#include "queue.template"
#endif /* QUEUE_H_ */
