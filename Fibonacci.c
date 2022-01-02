#include <stdio.h>
void main()
{
  int n,i,a=0,b=1,c;
  printf("Enter a limit:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
  }
}
