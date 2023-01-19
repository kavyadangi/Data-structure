#include<stdio.h>
#include"arithmetic.h"
extern int add(int,int);
extern int sub(int,int);
int main(){
 int a,b,res;
    a=6;
    b=2;
    res=add(a,b);
    printf("%d",res);
    res=sub(a,b);
    printf("%d",res);
    return 0;
    
}