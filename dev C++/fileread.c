#include<stdio.h>
main()
{
	int tab=0,lin=0,spa=0,c=0;
	char ch;
	FILE *fp;
	fp=fopen("hlinevline.c","r");
	if(fp==NULL)
	printf("NOT OPEN");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
		if(ch==' ')
		spa++;
		if(ch=='\n')
		lin++;
		if(ch=='\t')
		tab++;
		else
		c++;
	}
	fclose(fp);
	printf("char=%d space=%d tabs=%d lines=%d",c,spa,tab,lin);
}