#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],result[10][10],i,j,m,n,p,q,k;
  printf("Enter size of first matrix A:\n");
  scanf("%d %d",&m,&n);
  printf("Enter size of second matrix B:\n");
  scanf("%d %d",&p,&q);
  printf("\nEnter first matrix A:\n");
  for(i=0;i<m;++i)
  {
    for(j=0;j<n;++j)
    {
      scanf("\t%d",&a[i][j]);
    }
  }
  printf("\nEnter second matrix B:\n");
  for(i=0;i<p;++i)
  {
    for(j=0;j<q;++j)
    {
      scanf("\t%d",&b[i][j]);
    }
  }
  printf("The multiplication of matrix A and B is \n");
  if(n==p)
  {
   for(i=0;i<m;++i)
   {
     for(j=0;j<q;++j)
     {
       result[i][j]=0;
       for(k=0;k<n;++k)
       {
         result[i][j]=result[i][j]+(a[i][k]*b[k][j]);
       }
        printf(" \t%d",result[i][j]);
     }
     printf("\n");
   }
  }
  else
  {
    printf("NOT POSSIBLE");
  }
  return 0;
}
