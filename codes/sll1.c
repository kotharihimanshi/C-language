#include<stdio.h>
#include<stdlib.h>

typedef struct sll
{
    int val;
    struct sll *next;
}node;

node *head =  NULL;

void create();
void display();
void insert_at_start();
void insert_at_posi();
void insert_at_last();
void delete_at_posi();



int main()
{
    int choice;
        while(1)
        {
            //display options
            printf("\n1:Create node\n2:Display List\n3:Insert at specific position\n4:Insert value at start of list\n5:Insert value at end of list\n6:Exit\n\n");
            printf("\nENTER YOUR CHOICE\n");//taking choice from user
            scanf("%d", &choice);

            switch(choice)
            {
                case 1: create();
                    break;
                case 2: display();
                    break;
                case 3: insert_at_posi();
                    break;
                case 4: insert_at_start();
                    break;
                case 5: insert_at_last();
                    break;
                case 6: exit(0);
                    default: printf("--------------Invalid Choice--------------");
            }
        }

    return 0;
}

void create()
{
    node *temp = (node *)malloc(sizeof(node));
    
    printf("enter the value to be entered\n");
    scanf("%d", &temp->val);

    temp->next =  NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        node *q = head;

        while(q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;        
    }
}

void display()
{
    node *q = head;
    if(head == NULL)
    {
        printf("the list is EMPTY\n");
    }
    else
    {
    while(q != NULL)
        {
            printf("%d\n", q->val);
            q = q->next;
        }
    }
}

void insert_at_start()
{
    node *temp = (node *)malloc(sizeof(node));
    printf("enter the value to be inserted at start\n");
    scanf("%d", &temp->val);

    temp->next = head;
    head = temp;
}

void insert_at_posi()
{
    int posi;
    node *temp =  (node *)malloc(sizeof(node));
    node *q = head;
    printf("enter the value to be inserted \n");
    scanf("%d", &temp->val);
    printf("Enter the position where to insert the value\n");
    scanf("%d", &posi);
    posi--;

    for(int i=1; i<posi-1; i++)
    {
        q = q->next;
        if(q == NULL)
        {
            printf("-------------Invalid Position-------------\n");
        }            
    }
    temp->next = q->next;
    q->next = temp;
        
}


void insert_at_last()
{
    node *temp = (node *)malloc(sizeof(node));
    printf("enter the value to be entered at last\n");
    scanf("%d", &temp->val);

    node *q = head;
    while(q->next != NULL)
    {
        q = q->next;
    }
    q->next = temp;
    temp->next = NULL;
}

void delete_at_posi()
{
    int posi;
    printf("enter the position to delete \n");
    scanf("%d", &posi);

    node *temp;
    node *q = head;

    for(int i=1; i<posi-1; i++)
    {
        q = q->next;
        if(q = NULL)
        {
            printf("\n\n----------------Invalid Position\n----------------\n");
        }
    }
    temp = q->next;
    q->next = temp->next;
    free(temp);
}