#include<stdio.h>
int main() {
   int a[20], n, element, pos=0,i;
printf("Enter the length of the array : ");
   scanf("%d", &n);
printf("Enter array elements: ");
   for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("Enter element to search: ");
   scanf("%d",&element);
for(i=0; i<n; i++) {
        if(a[i]==element) {
            printf("%d found at position %d\n", element, i+1);
            }
else
    if ( pos==1)
   printf("%d not found.\n", element);
   return 0;
}
}
