#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf(" ");
scanf("%c",&ch);
if(isalpha(ch))
{
  printf("Alphabet");
}
else
{
  printf("No");
}
return 0;
}
