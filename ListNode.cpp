/*
 * ListNode.cpp
 *
 *  Created on: 06-Jun-2016
 *      Author: subbu
 */
#include "ListNode.h"

void SingleLinkedList::insert(){

	//dummuy node
	ListNode *tmp= new ListNode(-1);
	root = tmp;
	for(int i =1;i<10;++i){
		ListNode *newelement = new ListNode(i);
		tmp->next = newelement;
		tmp = newelement;
	}

}

void SingleLinkedList::remove(int data){
	ListNode *tmp = root->next;
	ListNode *prev;
	while(tmp  != NULL){
		if(data == tmp->data ){
			cout<<"\n element found and removing it";
			prev = tmp->next;
			delete tmp;
			return;
		}
		prev = tmp;
		tmp =tmp->next;
	}
	cout<<"\n element not found";
}

void SingleLinkedList::display(){
	ListNode *tmp = root->next;
	while(tmp  != NULL){
		cout<<endl<<tmp->data ;
		tmp =tmp->next;
	}
}

