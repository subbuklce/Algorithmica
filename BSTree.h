/*
 * BSTree.h
 *
 *  Created on: 21-Jun-2016
 *      Author: subbu
 */

#ifndef BSTREE_H_
#define BSTREE_H_
#include<iostream>
using namespace std;

struct BSTreeNode;
typedef BSTreeNode* BSTreeNodePtr;

struct BSTreeNode{
	int data;
	BSTreeNodePtr left,right;

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
	void insert(BSTreeNodePtr,int&);
	void remove();
	void display(BSTreeNodePtr);
	void insert( int &value);
};

#endif /* BSTREE_H_ */
