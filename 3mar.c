#include<stdio.h>
int n;
int queue[n],front = -1, rear = -1;
void enqueue(int item){
    if(rear == n-1){
        printf("cannot enqueue the queue is full\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear = rear++;
        queue[rear] = item;
        printf("enqueue dn %d",item);
   }
}
void printQueue(){
    if(rear == -1)
        printf("cannot display as queue is empty");
    else{
        int i;
        printf("after using :");
        for(i = front; i <= rear; i++)
	        printf("%d ",queue[i]);
   }
}
int main()
{
    int n;
    printf("enter no of elemnts");
    scanf("%d",&n);
    enqueue(n);
    printQueue(n);
    return 0;
}