#include<stdio.h>
struct sapid{
    
    int sapid;
};
int main(void){
  
  int n;
  printf("enter the number of sapids ");
  scanf("%d",&n) ;
  struct sapid s[n];
  for(int i=0;i<=n;i++){
    printf("%d",s[n].sapid);
    scanf("%d",s[n].sapid);
  }
  return 0; 
}