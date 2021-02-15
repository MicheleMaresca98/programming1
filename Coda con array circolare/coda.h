/*
 * coda.h
 *
 *  Created on: Feb 5, 2019
 *      Author: michelemaresca
 */

#ifndef CODA_H_
#define CODA_H_
#include <cstdlib>
#include <cassert>
namespace michele_maresca{
template <class Item>
class coda{
public:
	typedef Item value_type;
	typedef std::size_t size_type;
	static const size_type CAPACITY=30;
	coda();
	void push(const Item& entry);
	void pop();
	Item front()const{assert(!empty());return data[first];}
	size_type size()const{return count;}
	bool empty()const{return count == 0;}
private:
Item data[CAPACITY];
size_type first;
size_type last;
size_type count;
//Helper function
size_type next_index (size_type i){return (i+1) % CAPACITY;}
};
}
#include "coda.template"


#endif /* CODA_H_ */
