#include <stdio.h>
int main()
{
int n, m, sum =0;
printf("\n Enter the value of m : ");
scanf("%d", &m);
printf("\n Enter the value of n : ");
scanf("%d", &n);
while(m<=n)
{
 sum = sum + m;
 m = m+ 1;
}
printf("\n The sum of numbers is = %d", sum);
return 0;
}