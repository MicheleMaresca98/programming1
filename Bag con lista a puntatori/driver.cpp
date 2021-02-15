/*
 * driver.cpp
 *
 *  Created on: Feb 5, 2019
 *      Author: michelemaresca
 */

#include "bag.h"
#include <iostream>
using namespace michele_maresca;
using namespace std;

int main() {
	bag<int> a;

	a.insert(2);
	a.insert(2);
	a.insert(2);
	a.insert(3);
	a.insert(3);
	a.insert(3);
	a.insert(5);

	cout << "Nella bag ci sono " << a.count(2) << " due " << endl;
	a.erase_one(2);

	cout << "Nella bag ci sono " << a.count(2)
			<< " due dopo l'eliminazione di un due" << endl;

	cout << "Nella bag ci sono " << a.count(3) << " tre " << endl;
	a.erase(3);

	cout << "Nella bag ci sono " << a.count(3)
			<< " tre dopo l'eliminazione di un due" << endl;

}
