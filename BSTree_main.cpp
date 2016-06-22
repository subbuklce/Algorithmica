/*
 * Caller.cpp

 *
 *  Created on: 21-Jun-2016
 *      Author: subbu
 */
#include "BSTree.h"

int main() {

	BSTree object;
	int data[] = {5,6,4};

	object.insert(data[0]);
	object.insert(data[1]);
	object.insert(data[2]);


	object.display();


	return 0;
}




