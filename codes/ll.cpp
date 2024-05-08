#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
struct node * newnode(int data){
	struct node * new_node = (struct node *)malloc(sizeof(struct node));
	new_node -> data = data;
	new_node -> next = NULL;
	return new_node;
}
void displaylist(struct node*head){
	struct node * a = head;
	while(a != NULL){
		printf("%d", a -> data);
		a = a-> next;
		printf("\n");
	}
}
int main(){
	struct node * head = newnode(5);
	head -> next =newnode(8);
	head -> next -> next = newnode(90);
	displaylist(head);
	return 0;
}
