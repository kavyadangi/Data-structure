#include<stdio.h>
int main()
{
    int n, count=0, loc, loc1, ch, se;
    printf("Enter no of elements");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<=(n-3); i++){
        printf("Enter element a[%d]", i);
        scanf("%d",&a[i]);
        count++;
    }
    printf("Array is :");
    for(int i=0; i<=(n-3); i++){
        printf("%d", a[i]);
    }
    printf("\n");
    printf("Number of elements in array = %d\n", count);
    printf("Enter location of element to be deleted");
    scanf("%d", &loc);
    if(loc>=1 && loc<(n-3)){
        while((n-3)>=loc){
            a[loc]=a[loc+1];
            loc++;
        }
        n--;
    }
    printf("Array after deletion is :");
    for(int i=0; i<=(n-3); i++){
        printf("%d", a[i]);
    }
    printf("\n");
    printf("Enter location of element to be inserted");
    scanf("%d", &loc1);
    int i=n-3;
    while(i>=loc1){
        a[i+1]=a[i];
        i--;
    }
    printf("Enter number to be inserted");
    scanf("%d", &ch);
    a[loc1]=ch;
    printf("Array after insertion is :");
    for(int i=0; i<=(n-3); i++){
        printf("%d", a[i]);
    }
    printf("\n");
    printf("Enter element to be searched");
    scanf("%d", &se);
    for(int i=0; i<=(n-3); i++){
        if(a[i]==se){
            printf("%d is available in array", a[i]);
        }
        else if(i==n-2){
            printf("Search unsuccessful");
        }
    }
    return 0;
}