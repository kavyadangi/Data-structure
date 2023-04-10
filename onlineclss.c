#include<stdio.h>
int main()
{
    char a[20];
    char*b;
    char s1[10]="hello";
    char s2[]="tpday";
    char s3[10]={'h','e','l','l','o'};
    s1[0]='c';
    printf("entered string: %s\n",s1);
    *(s1+3)='d';
    printf("entered string: %s\n",s1);
    return 0;
    
}