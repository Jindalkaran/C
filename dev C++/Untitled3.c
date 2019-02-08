//wap to print pattern
#include<stdio.h>
int main()
{
	printf("Enter the no.");
	int a;
	scanf("%d",&a);
	int i,j,k;
	for(i=a;i>=1;i--)
{
	for(k=a;k>i;k--)
	printf(" ");
	for(j=1;j<=i;j++)
	printf("0");
	
printf("\n");
}
return 0;
}

