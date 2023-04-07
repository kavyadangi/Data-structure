//wap to get a record of n students
#include<stdio.h>
struct student{
  int roll_no,marks;
  char name[50];
  
}s;
int main(void){
    int n;
    char a;
    struct student s[50],a
   printf("enter no of students");
   scanf("%d",&n);
   for( int i=0;i< n;i++)
 {
  printf("Enter name, roll and marks of student:\n");
  scanf("%s%d%f",s[i].name, &s[i].roll_no, &s[i].marks);
 }
 for(int i=0;i< n-1;i++)
 
 {
  for(int j=i+1;j< n;j++)
  {
   if(s[i].marks>s[j].marks)
   {
    a = s[i];
    s[i] = s[j];
    s[j] = a;
   }
  }
 }
 printf("Sorted records are:\n");
 for( int i=0;i< n;i++)
 {
  printf("Name: %s\n", s[i].name);
  printf("Roll: %d\n", s[i].roll_no);
  printf("Marks: %0.2f\n\n", s[i].marks);
 }
 return 0;
}

