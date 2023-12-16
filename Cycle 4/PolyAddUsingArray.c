#include <stdio.h>
struct poly
{
  int exp;
  float coeff;
}p[10],q[10],r[10];

void main() 
{
  int i,j,k=0,m,n;
  printf("Enter the no of terms in first poly: ");
  scanf("%d",&m);
  printf("Enter the coeff and degree of %d terms: ",m);
  for(i=0;i<m;i++)
  {
    scanf("%f",&p[i].coeff);
    scanf("%d",&p[i].exp);
  }
  printf("Enter the no of terms in second poly: ");
  scanf("%d",&n);
   printf("Enter the coeff and degree of %d terms: ",n);
  for(j=0;j<n;j++)
  {
    scanf("%f",&q[j].coeff);
    scanf("%d",&q[j].exp);
  }
  i=0;
  j=0;
  while(i<m&&j<n)
  {
    if(p[i].exp==q[j].exp)
    {
     r[k].coeff=p[i].coeff+q[j].coeff;
     r[k].exp=p[i].exp;
     i++;
     j++;
     k++;
    }
    else if(p[i].exp>q[j].exp)
    {
      r[k].coeff=p[i].coeff;
      r[k].exp=p[i].exp;
      i++;
      k++;
    }
    else
    {
      r[k].coeff=q[j].coeff;
      r[k].exp=q[j].exp;
      j++;
      k++;
    }
  }
  for(i=k;i<m;i++,k++)
  {
    r[k].coeff=p[i].coeff;
    r[k].exp=p[i].exp;
  }
  for(j=k;j<n;j++,k++)
  {
    r[k].coeff=q[j].coeff;
    r[k].exp=q[j].exp;
  }
  printf("Resultant poly\n");
  for(k=0;k<m+n;k++)
  {
    printf("%0.2f ",r[k].coeff);
    printf("%d\n",r[k].exp);
  }
}
