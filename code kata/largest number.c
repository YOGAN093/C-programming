#include<stdio.h>
#include<ctype.h>
int main()
{
int a,b,c;
printf("Enter the first Number: ");
scanf("%d",&a);
printf("Enter the second Number: ");
scanf("%d",&b);
printf("Enter the third Number: ");
scanf("%d",&c);
if(b<a)
{
  printf("%d is greater",a);
}
else if(a<b)
{
  printf("%d is greater",b);
}
else
{
    printf("%d is greater",c);
}

return 0;
}
