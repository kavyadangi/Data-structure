#include <stdio.h>
int main(){
    int n, i, data,flag;
    printf("Enter max size of array");
    scanf("%d", &n);
    int arr[n];0
    for(i=0; i<n; i++){
        printf("Enter data");
        scanf("%d", &arr[i]);
    }
    printf("Enter data to be searched");
    scanf("%d", &data);
    for(i=0;i<n;i++){
        if(arr[i]==data){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("found %d at %d",data,i);
    }
    else{
        printf("not found");
    }
    
    return 0;
}