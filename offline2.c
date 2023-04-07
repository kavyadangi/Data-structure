#include<stdio.h>
struct student{
    int sap_id;
    char* name;

};
int main(void){
    struct student s1;
    s1.name=(char*) malloc(20*sizeof(char));

    printf("enter ur sap id");
    scanf("%d",&s1.sap);
    while((getchar()) != '\n');
    scanf("%19[^\n]s1",s1.name);
    printf("stored data");
    printf("%d")
} 
}
