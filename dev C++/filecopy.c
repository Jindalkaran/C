#include<stdio.h>
main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("1.txt","a");
	f2=fopen("2.txt","r");
	while(1)
	{	
		ch=fgetc(f2);
		if(ch==EOF)
		break;
		fputc(ch,f1);
	}
	fclose(f1);
	fclose(f2);
}
	