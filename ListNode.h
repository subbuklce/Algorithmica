/*
 * ListNode.h
 *
 *  Created on: 06-Jun-2016
 *      Author: subbu
 */

#ifndef LISTNODE_H_
#define LISTNODE_H_

#include<iostream>
using namespace std;

struct ListNode{
	int data;
	ListNode *next;
	ListNode(){};
	ListNode(int value):data(value),next (NULL){

	}
};

class SingleLinkedList{

public:
	void insert();
	void remove(int data);
	void display();


private:
	ListNode *root;
};


#endif /* LISTNODE_H_ */
