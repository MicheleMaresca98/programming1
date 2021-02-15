/*
 * driver.cpp
 *
 *  Created on: Feb 7, 2019
 *      Author: michelemaresca
 */



#include "dnode.h"
#include <iostream>
using namespace michele_maresca;
using namespace std;


int scelta(){
	int s;


	cout<<"\n1.inserisci in testa:\n";
	cout<<"2.inserisci in coda\n";
	cout<<"3.elimina dalla testa\n";
	cout<<"4.elimina dalla coda \n";
	cout<<"5.esci\n";
	cout<<"inserisci la tua scelta :\n?";
		cin>>s;


	return s;
}

int main() {
	int c;
	int inserimento;
	dnode<int> A;
	do {

		switch (c = scelta()) {

		case 1: {
			cout << "Inserisci :";
			cin >> inserimento;
			A.list_insert_fore(inserimento);
			A.list_print();
			break;
		}

		case 2: {
			cout << "Inserisci :";
			cin >> inserimento;

			A.list_insert_back(inserimento);
			A.list_print();
			break;
		}

		case 3: {
			A.list_remove_fore();
			A.list_print();
			break;
		}

		case 4: {
			A.list_remove_back();
			A.list_print();
			break;
		}

		}

	} while (c != 5);

	return 0;
}

