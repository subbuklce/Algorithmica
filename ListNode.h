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

	ListNode(int value):data(value),next (NULL){

	}
};



#endif /* LISTNODE_H_ */
