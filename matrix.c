#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("Enter the number of rows and columns of the Matrices::");
scanf("%d %d",&m, &n);
int A[m][n],B[m][n],sum[m][n],mul[m][n],sub[m][n];

printf("Enter elements of matrix A:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);


printf("Enter elements of matrix B:\n");
for(i=0;i<m;i++)
  for(j=0;j<n;j++)
      scanf("%d",&B[i][j]);
      
      for(i=0;i<m;i++)
        for(j=0;j<n;j++)
          sum[i][j]=A[i][j]+B[i][j];
          
          for(i=0;i<m;i++)
        for(j=0;j<n;j++)
         sub[i][j]=A[i][j]-B[i][j];
         
         
         
         if(m==n)
         {
         for(i=0;i<m;i++)
         {
         for(j=0;j<n;j++)
         {
         mul[i][j]=0;
         for(k=0;k<n;k++)
         {
          
          
          mul[i][j]+=A[i][k]*B[k][j] ;
          }
          }
          }
          }
          
          
          
          printf("\n Matrix addition:\n");
           for(i=0;i<m;i++)
           {
           for(j=0;j< n;j++)
           printf("%d",sum[i][j]);
           printf("\n");
           }
           printf("\n Matrix Substraction:\n");
           for(i=0;i<m;i++)
           {
            for(j=0;j<n;j++)
              printf("%d",sub[i][j]); 
              printf("\n");
              }
              if(m==n)
              {
              printf("\n Matrix Multiplication:\n");
              for(i=0;i<m;i++)
              {
              for(j=0;j<n;j++)
              printf("%d",mul[i][j]);
              printf("\n");
              }
              }
              else
              {
              printf("\n matrix multiplicatiom not possible(not square matrices).\n");
              }
              return 0;
              }        
          
          
