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
	/*	object.insert(object.getRootAddress(),data[0]);
	object.insert(object.getRootAddress(),data[1]);
	object.insert(object.getRootAddress(),data[2]);
	object.display(object.getRootAddress());*/

	object.insert(data[0]);
	object.insert(data[1]);
	object.insert(data[2]);
	object.display(object.getRootAddress());


	return 0;
}




