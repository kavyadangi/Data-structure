#include <stdio.h> 
#include <stdlib.h> 
struct node{ 
    int data; 
    struct node *next; 
}; 
struct node *head=NULL; 
struct node *create(struct node *); 
struct node *display(struct node *); 
struct node *insertbegin(struct node *); 
struct node *insertend(struct node *); 
struct node *insertbefore(struct node *); 
struct node *insertafter(struct node *); 
int main(){ 
    int option; 
    do 
    { 
        printf("\n\n *MAIN MENU *"); 
        printf("\n 1: Create a list"); 
        printf("\n 2: Display the list"); 
        printf("\n 3: Add a node at the beginning"); 
        printf("\n 4: Add a node at the end"); 
        printf("\n 5: Add a node before a given node"); 
        printf("\n 6: Add a node after a given node"); 
        printf("\n 7: EXIT"); 
        printf("\n\n Enter your option : "); 
        scanf("%d", &option); 
        switch(option) 
        { 
        case 1:  
        head = create(head); 
        printf("\n LINKED LIST CREATED"); 
        break; 
        case 2:  
        head = display(head); 
        break; 
        case 3: 
        head = insertbegin(head); 
        break; 
        case 4: 
        head = insertend(head); 
        break; 
        case 5: 
        head = insertbefore(head); 
        break; 
        case 6: 
        head = insertafter(head); 
        break; 
        } 
    }while(option!=7); 
} 
struct node *create(struct node *head){ 
    int n, i; 
    printf("Enter number of elements in linkedlist"); 
    scanf("%d", &n); 
    struct node *prev, *p; 
    for(i=0; i<n; i++){ 
        p=malloc(sizeof(struct node)); 
        scanf("%d", &p->data); 
        p->next=head; 
        if(i==0){ 
            head=p; 
            prev=p; 
        } 
        else{ 
            prev->next=p; 
            prev=p; 
        } 
    } 
    return head; 
} 
struct node *display(struct node *head){ 
    struct node *ptr; 
    ptr=head; 
    while(ptr->next!=head){ 
        printf("%d\n", ptr->data); 
        ptr=ptr->next; 
    } 
    printf("%d\n", ptr->data); 
    return head; 
} 
struct node *insertbegin(struct node *head){ 
    struct node *new, *avail, *p; 
    avail=malloc(sizeof(struct node)); 
    if(avail==NULL){ 
        printf("Overflow"); 
    }     
    else{ 
        new=avail; 
        printf("Enter data to be inserted at beginning"); 
        scanf("%d", &new->data); 
        p=head; 
        while(p->next!=head){ 
            p=p->next; 
        } 
        p->next=new; 
        new->next=head; 
        head=new; 
    } 
    return head; 
} 
struct node *insertend(struct node *head){ 
    struct node *new, *avail, *ptr; 
    avail=malloc(sizeof(struct node)); 
    if(avail==NULL){ 
        printf("Overflow"); 
    } 
    else{ 
        new=avail; 
        ptr=head; 
        printf("Enter data to be inserted at end"); 
        scanf("%d", &new->data); 
        while(ptr->next!=head){ 
            ptr=ptr->next; 
        } 
        ptr->next=new; 
        new->next=head; 
    } 
    return head; 
} 
struct node *insertbefore(struct node *head){ 
    struct node *new, *avail, *ptr, *preptr; 
    int a; 
    avail=malloc(sizeof(struct node)); 
    if(avail==NULL){ 
        printf("Overflow"); 
    } 
    else{ 
        new=avail; 
        printf("Enter node before which new node is to be inserted"); 
        scanf("%d", &a); 
        printf("Enter data to be inserted"); 
        scanf("%d", &new->data); 
        ptr=head; 
        while(ptr->data!=a){ 
            preptr=ptr; 
            ptr=ptr->next; 
        } 
        preptr->next=new; 
        new->next=ptr; 
    } 
    return head; 
} 
struct node *insertafter(struct node *head){ 
    struct node *new, *avail, *postptr, *ptr; 
    int a; 
    avail=malloc(sizeof(struct node)); 
    if(avail==NULL){ 
        printf("Overflow"); 
    } 
    else{ 
        new=avail; 
        printf("Enter node after which new node is to be inserted"); 
        scanf("%d", &a); 
        printf("Enter data to be inserted"); 
        scanf("%d", &new->data); 
        ptr=head; 
        while(postptr->data!=a){
postptr=ptr; 
            ptr=ptr->next; 
        } 
        printf("%d", postptr->data); 
        postptr->next=new; 
        new->next=ptr; 
    } 
    return head; 
}