#include<stdio.h>
#include<ctype.h>
int main()
{
int a,b,c;
printf(" ");
scanf("%d %d %d",&a,&b,&c);
if(b<a)
{
  printf("%d",a);
}
else if(a<b)
{
  printf("%d",b);
}
else
{
    printf("%d",c);
}

return 0;
}
