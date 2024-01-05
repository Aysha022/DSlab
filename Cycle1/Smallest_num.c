#include <stdio.h>
void main()
{
  int a[10],n,i;
  int *small;
  printf("Enter the number of numbers: ");
  scanf("%d",&n);
  printf("Enter %d numbers\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
  small=&a[0];
  for(i=1;i<n;i++)
  {
    if(*(a+i) < *small)
    {
      *small=*(a+i);
    }
  }
  printf("The smallest number in the list is %d\n",*small);
}
