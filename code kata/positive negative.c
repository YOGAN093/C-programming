#include<stdio.h>
int main()
{
int a;
printf("Enter the number: ");
scanf("%d",&a);
if(a>0)
{
printf("The number is positive");
}
else if(a==0)
{
printf("The number is zero");
}
else
{
printf("The number is negative");
}
return 0;
}
