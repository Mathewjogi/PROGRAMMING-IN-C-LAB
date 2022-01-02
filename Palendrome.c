#include <stdio.h>
void main()
{
  int n,r,sum=0,var;
  printf("Enter a number:");
  scanf("%d",&n);
  var=n;
  while(n>0)
  {
    r=n%10;
    n=n/10;
    sum=sum*10+r;
  }
  if(var==sum)
  {
    printf("The number is a Palindrome");
  }
  else
  {
    printf("The number is not a Palindrome");
  }
}
