#include<stdio.h>
#include<stdlib.h>


struct queue
{
int queue[N];
int front=-1;
int rear=-1;
};

void enqueue(int x)
             {
	if (rear==N-1)
	{
	    printf("The queue is Full\n");
	}
	else if(front==-1 && rear==-1)
	{
	    printf("The queue is Empty\n");
	    front=rear=0;
	   queue[rear]=x;
	}
	else
	{
	     rear++;
	     queue[rear]=x;
	} }
void main()
{
   enqueue(3);
   enqueue(4);
   enqueue(5);
}


