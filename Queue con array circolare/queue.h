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
namespace michele_maresca{
template <class Item>
class queue{
public:

	typedef std::size_t size_type;
	typedef Item value_type;
	static const size_type CAPACITY = 30;
	//COSTRUTTORE
	queue();
	//MODIFICATION MEMBER FUNCTION
	void push(const Item& entry);
	void pop();
	//NON-MODIFICATION MEMBER FUNCTION
	bool empty() const {return count==0;}
	Item front()const {
		assert(!empty());
		return data[first];
	}
	size_type size() const {return count;}
private:
	Item data[CAPACITY];
	size_type first;
	size_type last;
	size_type count;
	size_type next_index (size_type i){return ((i+1) % CAPACITY);}
};
}

#include "queue.template"

#endif /* QUEUE_H_ */
