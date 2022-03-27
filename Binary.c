#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],n,i,elt,b,e,m,pos=-1;
   clrscr ();
   printf ("Limit:");
   scanf ("%d",&n);
   printf ("Elements:");
   for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
      }
    printf("Array Elements:\n");
    for (i=0;i<n;i++)
      {
        printf("%d\t",a[i]);
       }
 printf("Element to be searched:");
scanf ("%d",&elt);
b=0;
e=n-1;
while (b<=e)
  {
    m=(b+e)/2;
    if(a[m]==elt)
      {
         pos=m;
         printf("Successful Search!!");
       break;
       }
     else if (a[m]>elt)
      e=m-1;
     else
      b=m+1;
    }
if(pos==-1)
  printf("Unsuccessful Search!!");
getch ();
}
