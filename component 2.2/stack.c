#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int top=-1;					

void push(int*, int);	
void pop(int*);
void display(int*);

int main()
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int stack[size];
	
	int choice;
	while(1)
	{
		system("clear");
		printf("*****Stack Operations*****\n\n");
		printf("Menu: 1.Push, 2.Pop, 3.Display, 4.Exit\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push(stack, size);
				sleep(1);
				break;
			case 2:
				pop(stack);
				sleep(1);
				break;
			case 3:
				display(stack);
				sleep(2);
				break;
			case 4: 
				printf("Exiting application...\n");
				sleep(1);
				exit(0);
			default:
				printf("Wrong choice. Try again...\n");
				sleep(1);
		}
	}
	return 0;
}

void push(int *stack, int size)
{
	if(top==size-1)
		printf("Stack is Full.\n");
	else
	{
        top++;
		printf("enter data");
		scanf("%d",&stack[top]);
	}

}

void pop(int *stack)
{
	if(top==-1)
		printf("Stack is empty.\n");
	else
	{
		printf("deleted elmnt is %d",stack[top]);
        top--;
	}
}

void display(int *stack)
{
	if(top==-1)
		printf("Stack is empty.\n");
	else
	{
		printf("Stack has foll. element(s): ");
		for(int i=top; i>=0; i--)
			printf("%d ", stack[i]);
		printf("\n");
	}
}
