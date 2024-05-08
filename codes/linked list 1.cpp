#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char data;
	struct node * link;
};

int main(){
	struct node * head;
	struct node * first;
	struct node * second;
	
	head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = "create";
    head->link = first;
    
    first->data = "display";
    first->link = second;
    
    second->data = "exit";
    second->link = NULL;
    
    return 0;
}
