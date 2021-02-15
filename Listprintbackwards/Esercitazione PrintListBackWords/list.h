/*
 * list.h
 *
 *  Created on: Jan 30, 2019
 *      Author: michelemaresca
 */

#ifndef LIST_H_
#define LIST_H_

#include <cstdlib>
#include <iostream>
#include "node.h"
#include "problems.h"
using namespace std;

namespace michele_maresca {
template <class Item>
class list {
public:
	list(){link=NULL;}
	~list(){michele_maresca::list_clear(link);}
	node<Item>*linkget(){return link;}
	const node<Item>*linkget() const {return link;}
	void listinsert(){
			int termini=0;
			Item entry;
			int i=1;
			cout<<"Quanti termini vuoi inserire nella lista?\n";
			cin>>termini;

			while(i<=termini){
				cout<<"inserisci l'elemento ["<<i<<"]";
				cin>>entry;
				try{
					if(entry<=0)
						throw problems();
					michele_maresca::list_ord(link,entry);
					i++;
				}catch(problems& ex){
					cout<<"exception: "<<ex.what()<<endl;
				}
			}
		}

	void printlist(){michele_maresca::list_print(link);}
	void printlistback(){michele_maresca::list_print_back(link);}



private:
	node<Item>*link;
};


} /* namespace michele_maresca */




#endif /* LIST_H_ */
