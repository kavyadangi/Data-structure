#include<stdio.h>
int main()
{
    char a[200];
    char*b;
    char s[10];
    printf("enter a string");
    scanf("%s", s);
    printf("entered string %s\n",s);
    while((getchar()) != '\n');
    printf("enter another string");
    scanf("%[^\n]s",a);
    printf("entered string %s\n",a);
    printf("enbter another string");
    scanf("%[^\t]s",a);
    printf("entered string %s \n",a);

    return 0;
}