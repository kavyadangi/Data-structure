#include <stdio.h>  
#include <stdlib.h>
#include <unistd.h>
   
struct treenode
{  
    int data;  
    struct treenode *left;  
    struct treenode *right;  
}*new, *root;  

struct queuenode  
{  
    struct treenode *qnode;
    struct queuenode *next;
}*qnew, *front, *ptr, *temp;  

int count;
int dma();
int qdma();
void enqueue(struct treenode *node);
struct treenode* dequeue();
void insertNode();
void inorderTraversal(struct treenode *node);
void postorderTraversal(struct treenode *node);
void preorderTraversal(struct treenode *node);
void GC_PO(struct treenode *node); 

int main()
{  
    int choice;
    while(1)
    {
        system("clear");
        printf("\n1:Insert, 2:Inorder, 3:Postorder, 4:Preorder, 5:Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                insertNode();
                sleep(3);
                break;
            case 2:
                printf("\nInorder Traversal: ");  
                inorderTraversal(root);
                printf("\n");
                sleep(2);
                break;
            case 3:
                printf("\nPostorder Traversal: ");
                postorderTraversal(root);
                printf("\n");
                //GC_PO(root);
                //printf("%p Root.\n", root);
                sleep(2);
                break;
            case 4:
                printf("\nPreorder Traversal: ");  
                preorderTraversal(root);
                printf("\n");
                sleep(2);
                break;
            case 5:
                printf("\nApplication exit selected.\n");
                sleep(1);
                exit(0);
            default:
                printf("\nWrong choice.\n");
        }
    }
    return 0;  
}

int dma()
{  
    new = (struct treenode*)malloc(sizeof(struct treenode));  
    if(new!=NULL)
    {
        printf("DMA successful for tree node. Enter data to be stored: ");
        scanf("%d", &new->data);
        new->left = NULL;  
        new->right = NULL;
        return 0;
    }
    else return 1;
}  

int qdma()  
{  
    qnew = (struct queuenode*) malloc(sizeof(struct queuenode));  
    if(qnew!=NULL) return 0;
    else return 1;
}  
   
void enqueue(struct treenode *node)
{  
    if(qdma()!=1)
    {
        printf("DMA successful for Q node. Tree node with %d is inserted into Queue.\n", node->data);
        qnew->qnode = node;
        qnew->next = NULL;
        if(front==NULL) front = qnew;
        else
        {
            for(ptr=front; ptr->next!=NULL; ptr=ptr->next);
            ptr->next = qnew;
        }
        count++;
    }
    else printf("DMA unsuccessful for Q node.\n");
    sleep(2);
}   
   
struct treenode* dequeue()
{  
    if(front==NULL) printf("Queue is empty.\n");
    else
    {
        struct treenode *node = front->qnode;
        printf("Tree Node with %d is removed from Queue.\n", node->data);
        if(front->next==NULL)       //One node
        {  
            free(front);
            front = NULL;
        }
        else                        //more nodes
        {
            temp = front;
            front = front->next;
            free(temp);
        }   
        count--;
        return node;
    }
    sleep(2);
}  
   
void insertNode() 
{  
    if(dma()!= 1)
    {
        if(root==NULL) 
        {
            root = new; 
            printf("%d is stored in root node.\n", new->data);
        }
        else 
        {   
            enqueue(root);  
            while(1) 
            {  
                struct treenode *node = dequeue();  
                if(node->left != NULL && node->right != NULL) 
                {  
                    enqueue(node->left);  
                    enqueue(node->right);  
                }  
                else 
                {  
                    if(node->left == NULL)
                    {
                        node->left = new;  
                        printf("%d linked to left of %d.\n", new->data, node->data);
                    }
                    else if(node->right == NULL)
                    {
                        node->right = new; 
                        printf("%d linked to right of %d.\n", new->data, node->data);
                    }
                    break;  
                }  
            }
            for(int i=1, n=count; i<=n; i++) new=dequeue();
        }  
    }
    else printf("\nDMA unsuccessful for tree node.\n");
}  
   
void inorderTraversal(struct treenode *node) 
{  
    if(root == NULL) printf("Tree is empty.\n");  
    else 
    {  
        if(node->left != NULL)  
            inorderTraversal(node->left);  
        printf("%d ", node->data);  
        if(node->right != NULL)  
            inorderTraversal(node->right);  
    }  
}

void postorderTraversal(struct treenode *node) 
{  
    if(root == NULL) printf("Tree is empty.\n");  
    else 
    {  
        if(node->left != NULL)  
            postorderTraversal(node->left);  
        if(node->right != NULL)  
            postorderTraversal(node->right);
        printf("%d ", node->data);
    }  
}

void preorderTraversal(struct treenode *node) 
{  
    if(root == NULL) printf("Tree is empty.\n");  
    else 
    {  
        printf("%d",node->data);
        if(node->left!=NULL)
            preorderTraversal(node->left);
        if(node->right!=NULL)
            preorderTraversal(node->right);
    }  
}

/*void GC_PO(struct treenode *node) 
{  
    if(root == NULL) printf("Tree is empty.\n");  
    else 
    {  
        if(node->left != NULL)  
            GC_PO(node->left);  
        if(node->right != NULL)  
            GC_PO(node->right);
        free(node);
    }  
}*/