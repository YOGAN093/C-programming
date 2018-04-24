#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("Enter the Character: ");
scanf("%c",&ch);
if(isalpha(ch))
{
  printf("Alphabet");
}
else
{
  printf("Not");
}
return 0;
}
