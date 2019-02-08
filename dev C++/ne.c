#include<stdio.h>
main()
{
	int d,r;
	int a[25];
	printf("Enter the number");
	scanf("%d",&d);
	int i=0,j;
	while(d!=0)
	{
		r=d%2;
		a[i]=r;
		i++;
		d=d/2;
	}
	printf("\n");
	for(j=(i-1);j>=0;j--)
	printf("%d",a[j]);
}
