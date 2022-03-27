#include<stdio.h>
#include<conio.h>
void test();
void main()
{
  clrscr();
  test();
  getch();
}
void test()
{
   int sum=0,a[25],n,i=0;
   printf("ENTER THE NUMBER OF ELEMENTS:");
   scanf("%d",&n);
   printf("ENTER THE ELEMENTS:");
   while(i<=n-1)
      {
        scanf("%d",&a[i]);
        sum=sum+a[i];
         i++;
       }
     printf("SUM:%d",sum);
   }
