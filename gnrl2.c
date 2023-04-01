#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}
*new,*ptr,*temp,*head
;
void insertbegin()
{
	int n,choice;
	while(choice==1)
	{
		new=(struct node*)malloc(sizeof(struct node));

		if(new!=NULL)
		{
			printf("DMA is succesufull\n");
			scanf("%d",&n);
			new->data=n;
			temp=head;
			head=new;
			new->next=temp;
			
		}
		else{
			printf("dma is unsucceful\n");
			scanf("%d",&choice);
		}
	}
}
void insertend()
{
	int n,choice;
	while(choice==1)
	{
		new=(struct node*)malloc(sizeof(struct node));
		if(new!=NULL)
		{
			printf("DMA is succesufull\n");
			printf("enter the elments:\n");
			scanf("%d",&n);
			new->data=n;
			new->next=NULL;
			if(head==NULL)
			{
			head=new;
			}
			else{
				for(ptr=head;ptr->next!=NULL;ptr=ptr->next)
					ptr->next=new;
			}
		}
		else{
			printf("DMA is unsuccefull\n");
			scanf("%d",&choice);
		}
	}
	void display()
	{
		if(head=NULL)
		{
		printf("lis is empty");
		}
		else{
			printf("the elements of ll are:\n");
		for(ptr=head;ptr->next!=NULL;ptr=ptr->next)
			scanf("%d",&ptr->data);
		}
	}
			
			
		int main()
		{
			insertbegin();
			display();
			insertend();
			display();
			return 0;
		}
}