#include <stdio.h>
void main()
{
  int a[20],b[20],c[20],i,j,k=0,p,n1,n2;
  printf("Enter the number of elements in first array: ");
  scanf("%d",&n1);
  printf("Enter the first sorted array of %d numbers\n",n1);
  for(i=0;i<n1;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the number of elements in second array: ");
  scanf("%d",&n2);
  printf("Enter the second sorted array of %d numbers\n",n2);
  for(j=0;j<n2;j++)
  {
    scanf("%d",&b[j]);
  }
  i=0;
  j=0;
  while(i<n1&&j<n2)
  {
    if(a[i]<b[j])
    {
      c[k]=a[i];
      k++;
      i++;
    }
    else
    {
     c[k]=b[j];
      k++;
      j++;
    }
  }
 for(p=i;p<n1;p++,k++)
 {
   c[k]=a[p];
 }
 for(p=j;p<n2;p++,k++)
 {
   c[k]=b[p];
 }
 printf("Merged Array is\n-------------\n");
 for(i=0;i<k;i++)
 {
   printf("%d\n",c[i]);
 }
}
