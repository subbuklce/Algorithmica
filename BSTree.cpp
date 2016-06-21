//============================================================================
// Name        : BSTree.cpp
// Author      : Subrahmanyam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "BSTree.h"

void BSTree::display(BSTreeNodePtr current){
	if(current == NULL){
		cout<<"null";
	}
	else {
		cout<<current->data;
		display(current->left);
		display(current->right);
	}
}

/*void BSTree::insert(BSTreeNodePtr current , int &value){
	if(current == NULL){
		current = new BSTreeNode;
		current ->data = value;
		current->left = current->right = NULL;
		return ;
	}
	if(value < current->data){
		insert(current->left, value);
	}
	else{
		insert(current->right, value);
	}
}*/

void BSTree::insert( int &value){
	BSTreeNodePtr tmp = root;

	while(true){
		if(tmp == NULL){
			tmp = new BSTreeNode;
			tmp->data = value;
			tmp->left = tmp->right = NULL;
			if(root= NULL)
				root = tmp;
			break;
		}
		if(tmp->data > value){
			tmp= tmp->left;
		}
		else{
			tmp= tmp->right;
		}

	}
}

BSTreeNodePtr BSTree::getRootAddress(){
	return root;
}
