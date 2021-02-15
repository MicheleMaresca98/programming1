/*
 * main.cpp
 *
 *  Created on: Jan 31, 2019
 *      Author: michelemaresca
 */
#include <iostream>
#include <cstdlib>

#include "binarytree.h"
//#include "binarytree.template"
using namespace std;
using namespace michele_maresca;

int main(){
	binary_tree_node<int>*tree = NULL;
	binary_tree_node<int>*left;
	binary_tree_node<int>*right;

	const int root = 5;
	const int left_ = 6;
	const int right_ = 7;

	const int number1 = 8;
	const int number2 = 9;
	const int number3 = 10;
	const int number4 = 11;

	tree = new binary_tree_node<int>(root,NULL,NULL);

	left = new binary_tree_node<int>(left_,NULL,NULL);
	left->set_left(new binary_tree_node<int>(number1,NULL,NULL));
	left->set_right(new binary_tree_node<int>(number2,NULL,NULL));
	tree->set_left(left);

	right = new binary_tree_node<int>(right_,NULL,NULL);
	right->set_left(new binary_tree_node<int>(number3,NULL,NULL));
	right->set_right(new binary_tree_node<int>(number4,NULL,NULL));
	tree->set_right(right);

print(tree,2);
	return 0;
}







