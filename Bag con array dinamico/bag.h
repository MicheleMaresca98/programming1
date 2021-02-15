/*
 * bag.h
 *
 *  Created on: Feb 1, 2019
 *      Author: michelemaresca
 */

#ifndef BAG_H_
#define BAG_H_
#include <cstdlib>
namespace michele_maresca{
template <class Item>
class bag{
public:
	typedef Item value_type;
	typedef std::size_t size_type;
	static const size_type DEFAULT_CAPACITY=30;
	bag(size_type initial_capacity=DEFAULT_CAPACITY);
	bag(const bag& source);
	~bag();
	void insert(const value_type& entry);
	void reserve(size_type new_capacity);
	size_type erase(const value_type& target);
	bool erase_one (const value_type& target);
	void operator += (const bag& addend);
	void operator = (const bag& source);
	size_type size()const {return used;}
	size_type count(const value_type& target)const;

private:
	 Item* data;
	 size_type used;
	 size_type capacity;
};

template <class Item>
bag<Item> operator +(const bag<Item>& b1,const bag<Item>& b2);
}

#include "bag.template"

#endif /* BAG_H_ */
