#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;          
	struct node*next;
}*top = NULL;
void push(int);
void pop();
void display();
void main()
{
	int choice, value;
	clrscr();
	printf("\n:: Stack using Linked List ::\n");
	while(1)
	{
		printf("\n:****** MENU ******:\n");
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("\nEnter your choice:\t ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("\nEnter the value to be insert:\t ");
			scanf("%d", &value);
			push(value);
			break;
			case 2: 
			pop(); 
			break;
			case 3: 
			display(); 
			break;
			case 4: 
			{
				printf("\n\t::THE PR0GRAM WILL EXIT IN 3 SECONDS::");
				sleep(3);	
				return 0;
				break;
			}
			default: 
			printf("\nWrong selection!!! Please try again!!!\n");
		}
	}
}

void push(int value)
{
	struct Node *newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	if(top == NULL)
		newNode->next = NULL;
	else
		newNode->next = top;
	top = newNode;
	printf("\nInsertion is Success!!!\n");
}

void pop()
{
	if(top == NULL)
	printf("\nStack is Empty!!!\n");
	else
	{
		struct Node *temp = top;
		printf("\nDeleted element: %d", temp->data);
		top = temp->next;
		free(temp);
	}
}

void display()
{
	if(top == NULL)
		printf("\nStack is Empty!!!\n");
	else
	{
		struct Node *temp = top;
		while(temp->next != NULL)
		{
			printf("%d--->",temp->data);
			temp = temp -> next;
		}
	printf("%d--->NULL",temp->data);
	}
}

