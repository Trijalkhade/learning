#include<stdio.h>
int main()
{
  int i,n,fact=1;
  printf("Enter a number:");
  scanf(" %d",&n);
  printf("\nFACTORIAL is:\n");
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
    printf("\n %d",fact);
  }
  return 0;
}
