#include<stdio.h>
#define MAX 10
void insert(int a[MAX][MAX],int,int);
void mul(int a[MAX][MAX],int b[MAX][MAX],int c[MAX][MAX],int,int,int,int);
void display(int a[MAX][MAX],int,int);

void main()
{
  int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
  int m1,n1,m2,n2;
  printf("Enter size of Matrix 1:");
  scanf("%d %d",&m1,&n1);
  printf("Enter size of Matrix 2:");
  scanf("%d %d",&m2,&n2);
  if(n1!=m2)
    printf("\nMULTIPLICATION NOT POSSIBLE");
  else
  {
    printf("\nEnter MAtrix1 elements");
    insert(a,m1,n1);
    display(a,m1,n1);
    printf("\nEnter MAtrix2 elements");
    insert(b,m2,n2);
    display(b,m2,n2);
    printf("\nResults:\n");
    mul(a,b,c,m1,n1,m2,n2);
    display(c,m1,n2);
  }
}

void insert(int a[MAX][MAX],int m,int n)
{
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
}
void display(int a[MAX][MAX],int m,int n)
{
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
  }
}

void mul(int a[MAX][MAX],int b[MAX][MAX],int c[MAX][MAX],int m1,int n1,int m2,int n2)
{
  int i,j,k,sum=0;
  for(i=0;i<m1;i++)
  {
    for(j=0;j<n2;j++)
    {
      sum=0;
      for(k=0;k<m2;k++)
        sum+=a[i][k]*b[k][j];
      c[i][j]=sum;
    }
  }
}
