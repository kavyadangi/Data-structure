#include <stdio.h> 
#include <stdlib.h> 
struct node{ 
    int data; 
    struct node *next; 
}; 
 
void insertend(struct node *prev){ 
    struct node *avail, *new; 
    avail=malloc(sizeof(struct node)); 
    if(avail==NULL){ 
        printf("Overflow"); 
    } 
    else{         
        new=avail; 
        printf("Enter data of node at end"); 
        scanf("%d", &new->data); 
        new->next=NULL; 
        prev->next=new; 
    } 
} 
void insertbegin(struct node *head, struct node *new){ 
    struct node *avail; 
    avail=malloc(sizeof(struct node)); 
    if(avail==NULL){ 
        printf("Overflow"); 
    } 
    else{         
        new=avail; 
        printf("Enter data of new node at begin"); 
        scanf("%d", &new->data); 
        new->next=head;  
        head=new; 
    } 
    struct node *p; 
    p=head; 
    while(p!=NULL){ 
        printf("%d\n", p->data); 
        p=p->next; 
    } 
} 
void display(struct node *head){ 
    struct node *p; 
    p=head; 
    while(p!=NULL){ 
        printf("%d\n", p->data); 
        p=p->next; 
    } 
} 
int main(){ 
    int n, a; 
    printf("Enter number of elements"); 
    scanf("%d", &n); 
    struct node *p, *head, *prev, *new; 
    for(int i=0; i<n; i++){ 
        p=malloc(sizeof(struct node)); 
        scanf("%d", &p->data); 
        p->next=NULL; 
        if(i==0){ 
            head=p; 
            prev=p; 
        } 
        else{ 
            prev->next=p; 
            prev=p; 
        } 
    } 
    insertend(prev); 
    insertbegin(head, new); 
    return 0;    
}