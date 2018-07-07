#include<stdio.h>
int main()

{
    int a,b=0,n,rem,t;
    scanf("%d",&n);
    t=n;
if(n<=1000)
{
    while(n>0)
    {
        rem=n%10;
        b=b*10+rem;
        n=n/10;

    }
}
if(t==b)
{
    printf("Yes");
}
else
{
    printf("no");
}
return 0;
}
