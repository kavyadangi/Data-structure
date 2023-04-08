//creating a dynamic struct
#include<stdio.h>
#include<stdlib.h>
struct student{
    int sap;

};
int main(void){
    int n=10;

    struct student *s,a,s[n];
    s=&a;    //static allocation
    s=(struct student*)malloc(sizeof(struct student));    //dynamic allocation
    s->sap=1234567890;


}