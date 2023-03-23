#include<stdio.h>
int display(int*,int);
int main(){
    int n ;
    printf("enter the no of elemnts:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    display(arr,n);
    return 0;
}
int display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        for(int i=1;i<=n-4;i++){
        printf(",");
    }
    }
    
}
