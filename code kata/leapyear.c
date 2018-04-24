#include <stdio.h>
 
int main()
{
  int n;
 
  printf(" ");
  scanf("%d", &n);
 
  if ( n%400 == 0) 
    {
        printf("yes");
    }
  else if ( n%100 == 0) 
    {
        printf("yes");
    }
  else if ( n%4 == 0 ) 
   {
       printf("yes");
   }
  else 
  {
    printf("no");  
  }
  return 0;
}
