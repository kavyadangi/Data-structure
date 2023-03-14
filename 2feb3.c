#include<stdio.h>
struct node{
    int sap;
};
int main(void){
 struct node a,*b;
 b=&a;
 
 b->sap=20;
 scanf("%d",&b->sap);
 
 printf("sapid is: %d",b->sap);
 return 0;
 }
