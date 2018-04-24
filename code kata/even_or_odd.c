#include<stdio.h>
int main()
{
int a;
printf("Enter the number: ");
scanf("%d",&a);
if(1<=a<=100000)
{
  if(a%2==0)
  {
  printf("even");
  }
  else
{
printf("odd");
}
}
return 0;
}
