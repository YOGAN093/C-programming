#include<stdio.h>
int main()
{
int a;
printf("Enter the number: ");
scanf("%d",&a);
if(1<=a<=100000)
{
printf("Positive");
}
else if(a==0)
{
printf("Zero");
}
else
{
printf("negative");
}
return 0;
}
