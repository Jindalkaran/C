#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	int i,s,j;
	printf("Enter string\n");
	gets(a);
	int l=strlen(a);
	printf("\n%c",a[0]);
	for(i=0;i<l;i++)
	{
		if(a[i]==' ')
		printf(".%c",a[i+1]);
	}
	printf("\n%c",a[0]);
	for(i=0;i<l;i++)
	{
		if(a[i]==' ')
		s=i;
	}
	for(i=0;i<l;i++)
	{
		if(a[i]==' ')
		printf(".%c",a[i+1]);
		if(i==s)
		{
			for(j=(s+2);j<l;j++)
			printf("%c",a[j]);
		}
	}
}
