/*
 * dnode.h
 *
 *  Created on: Feb 7, 2019
 *      Author: michelemaresca
 */
#include "node.h"

#ifndef DNODE_H_
#define DNODE_H_

namespace michele_maresca{
template <class Item>
class dnode{
public:
	typedef Item value_type;
	typedef std::size_t size_type;

	dnode(const value_type& init_data = value_type( ), node<Item>* init_fore = NULL,node<Item>* init_back = NULL  )
		    {
			data_field = init_data;
			link_fore = init_fore;
			link_back = init_back;
		    }

		// Member functions to set the data and link fields:
	    	void set_data(const value_type& new_data) { data_field = new_data; }
	    	void set_fore(node<Item>* new_fore)             { link_fore = new_fore; }
	    	void set_back(node<Item>* new_back)             { link_back = new_back; }

		// Const member function to retrieve the current data:
		value_type data( ) const { return data_field; }

		// Two slightly different member functions to retrieve each current link:
		const node<Item>* fore( ) const { return link_fore; }
	    	node<Item>* fore( )             { return link_fore; }
		const node<Item>* back( ) const { return link_back; }
	    	node<Item>* back( )             { return link_back; }

	    	void list_print();

	    	void list_insert_back(const Item& entry){
	    		node<Item>* cursor=link_fore;
	    		while(cursor->link() != link_back){
	    			cursor=cursor->link();
	    		}
	    		list_insert(cursor,entry);}

	    	void list_insert_fore(const Item& entry){list_head_insert(link_fore,entry);}

	    	void list_remove_back(){
	    		node<Item>* cursor=link_fore;
	    			    		while(cursor->link() != link_back){
	    			    			cursor=cursor->link();
	    			    		}
	    			    		list_remove(cursor);}


	    	void list_remove_fore(){list_head_remove(link_fore);}

		private:
		value_type data_field;
		node<Item> *link_fore;
		node<Item> *link_back;
};
}
#include "dnode.template"
#endif /* DNODE_H_ */
