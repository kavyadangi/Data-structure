#include<stdio.h>
int get(int);
void display(int,int);
int main(){
 int n ,array,p;
 printf("enter no of elemnts:\n");
 scanf("%d",&n);
 array=get(n);
 display(array,n);
 return 0;
}
int get(int n){
    int a[n],p;
    p=&a;
    printf("enter dash %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        return p;
    }
}
void display(int p,int n){
    int p;
    printf("the ddash %d elemetns are:",n);
    for(int i=0;i<n;i++)
    printf("%d \n",p[n]);
    }
