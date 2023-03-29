#include <stdio.h>
#include <string.h>
#define MAX 20
int queue[MAX];
int front=-1, rear=-1;
void insert(void);
int delete(void);
void display(void);
int main(){
int option, val;
do
{
 printf("\n ***** MAIN MENU *****");
 printf("\n 1. Insert an element in queue");
 printf("\n 2. Delete an element from queue");
 printf("\n 3. Display the queue");
 printf("\n 4. EXIT");
 printf("\n Enter your option : ");
 scanf("%d", &option);
switch(option)
 {
 case 1:
 insert();
break;
 case 2:
 val = delete();
if(val!=-1)
printf("\n The number deleted is : %d\n", val);
 break;
 case 3:
 display();
break;
 }
}while(option!=4);
return 0;
}void insert()
{
int num;
printf("\n Enter the number to be inserted in the queue : ");
scanf("%d", &num);
if(front==0 && rear==MAX-1)
 printf("\n OVERFLOW");
else if(front==-1 && rear==-1)
{
front=rear=0;
 queue[rear]=num;
}
else if(rear==MAX-1 && front!=0)
{
rear=0;
 queue[rear]=num;
}
else
{
 rear++;
 queue[rear]=num;
}
}
int delete()
{
int val;
if(front==-1 && rear==-1)
 {
 printf("\n UNDERFLOW");
 return -1;
 }
val = queue[front];
if(front==rear)
 front=rear=-1;
else
{
 if(front==MAX-1)
front=0;
 else
 front++;
}
return val;
}
void display()
{
int i;
printf("\n");
if (front ==-1 && rear==-1){
 printf ("\n QUEUE IS EMPTY");
}
else
{
 if(front<rear)
 {
 for(i=front;i<=rear;i++)
 printf("%d ", queue[i]);
 }
 else
 {
 for(i=front;i<MAX;i++)
 printf("%d ", queue[i]);
for(i=0;i<=rear;i++)
 printf("%d ", queue[i]);
 }
}
}