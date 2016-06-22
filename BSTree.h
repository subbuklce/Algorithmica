/*
 * BSTree.h
 *
 *  Created on: 21-Jun-2016
 *      Author: subbu
 */

#ifndef BSTREE_H_
#define BSTREE_H_
#include<iostream>
#include <stdlib.h>
using namespace std;

struct BSTreeNode;
typedef BSTreeNode* BSTreeNodePtr;

struct BSTreeNode{
	int data;
	BSTreeNodePtr left,right;
	BSTreeNode():data(0),left(NULL),right(NULL){

	}

};

class BSTree{
private:
	BSTreeNodePtr root;
	int size;
public:
	BSTree():root(NULL),size(0){
		//		root = new BSTreeNode;
		//		root->data = -1 ;
		//		root->left = root->right = NULL;
	};
	BSTreeNodePtr getRootAddress();

	void remove();
	void display();
	void insert( int &value);
};

#endif /* BSTREE_H_ */
