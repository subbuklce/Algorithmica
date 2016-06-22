//============================================================================
// Name        : BSTree.cpp
// Author      : Subrahmanyam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "BSTree.h"

void BSTree::display(){
	BSTreeNodePtr tmp = root;
	while(true){
		if(tmp == NULL){
			cout<<"null\n";
			break;

		}
		if(tmp->left != NULL){
			cout<<endl<<tmp->data;
			tmp = tmp->left;

		}
		if(tmp->right != NULL){
			cout<<endl<<tmp->data;
			tmp = tmp->right;
			continue;
		}
		if(tmp->left == NULL &&
				tmp->right == NULL	){
			cout<<endl<<tmp->data;
			return;
		}


	}


}



void BSTree::insert( int &value){
	BSTreeNodePtr tmp = root;
	if(tmp == NULL){
		tmp = new BSTreeNode;
		tmp -> data = value;
		root = tmp;


		return;

	}
	while(true){
		if(value < tmp->data){
			if(tmp->left== NULL){
				tmp->left = new BSTreeNode;
				tmp->left -> data = value;
				break;
				return;
			}
			else{
				tmp= tmp->left;
				continue;
			}

		}
		else
		{
			if(tmp->right== NULL){
				tmp->right = new BSTreeNode;
				tmp->right -> data = value;
				break;
				return;
			}
			else{
				tmp= tmp->right;
				continue;
			}
		}

	}
}

BSTreeNodePtr BSTree::getRootAddress(){
	return root;
}
