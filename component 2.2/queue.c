#include<stdio.h>		//printf(), scanf()
#include<stdlib.h>	//malloc(), free(), exit()
#include<unistd.h>	//sleep()
struct node								//Mem. req. of each node in LL 
{
	int data;
	struct node *next;
}*new, *head, *ptr, *temp;			

int count;								//Size of LL

void dma();	
void enqueue();
void display();
void dequeue();

int main()
{
	int choice;
	while(1)	
	{
		system("clear");
		printf("********* Queue Operations *********\n\n");
		printf("(1)Insert, (2)Delete, (3)Display, (4)Exit\n\n");
		printf("Enter choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				enqueue();
				sleep(1);
				break;
			case 2:
				dequeue();
				sleep(1);
				break;
			case 3:
				display(); 
				sleep(2);
				break;
			default:
			{
				printf("Application Exit selected.....\n");
				sleep(1);	
				exit(0);						
			}
		}	
	}
	return 0;
}

void dma()
{
	new = (struct node*)malloc(sizeof(struct node));
	if(new!=NULL)
	{
		printf("\nEnter data: ");
		scanf("%d", &new->data);
		new->next = NULL;
	}
	else
		printf("\nDMA unsuccessful");
}

void enqueue() 
{
	dma();
	if(new!=NULL)
	{
		if(head==NULL) 
			head=new;
		else
		{
			for(ptr=head; ptr->next!=NULL; ptr=ptr->next);
			ptr->next = new;
		}
		count++;
		printf("\nInsertion completed. Queue has %d node(s).\n", count);
	}
}

void display() 
{
	if(head==NULL)
		printf("\nQueue is Empty\n");
	else
	{
		printf("\n%d element(s) in Queue: ", count);
		for(ptr=head; ptr!=NULL; ptr=ptr->next)
			printf("%d ", ptr->data);
		printf("\n");
	}
}

void dequeue() 
{
	if(head==NULL)
		printf("\nQueue is Empty\n");
	else if(count==1)
	{
		/*if(head==ptr){
            head=ptr=NULL;
            printf("Deleted element is : %d", ptr->data);
            free(ptr);
        }*/
		struct node *ptr=head;
		head=ptr=NULL;
		printf("Deleted element is : %d", ptr->data);
        free(ptr);

		
	}
        
	else if(count>1)
	{
		struct node *ptr=head;
		head=ptr->next;
         printf("Deleted element is : %d\n", ptr->data);
        free(ptr);
		
		
            
	}

} 
	

