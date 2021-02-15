/*
 * queue.h
 *
 *  Created on: Jan 31, 2019
 *      Author: michelemaresca
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include <cstdlib>
#include <cassert>
#include "node.h"
namespace michele_maresca {
template<class Item>
class queue {
public:
	typedef Item value_type;
	typedef std::size_t size_type;

	queue();
	~queue();
	queue(const queue<Item>& source);

	void operator = (const queue<Item>& source);
	void push(const Item& entry);
	void pop() ;

	Item front() const {
		assert(!empty());
		return front_ptr->data();
	}

	bool empty() const {
		return count == 0;
	}
	std::size_t size() const {
		return count;
	}
private:
	node<Item>* front_ptr;
	node<Item>* rear_ptr;
	size_type count;
};
}

#include "queue.template"

#endif /* QUEUE_H_ */
