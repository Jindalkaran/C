//find number of vowels,consonents,digit,whtespace
//My KARAN 12me tha ann  4  aa jaya hu....meh
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	int vow=0,con=0,dig=0,ws=0,i;
	char ch[50];
	printf("Enter the string");
	gets(ch);	
	int l=strlen(ch);
	strlwr(ch);
	printf("\n%s",ch);
	for(i=0;i<l;i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		vow++;
		else if(ch[i]==' ')
		ws++;
		else if(isdigit(ch[i]))
		dig++;
		else if(isalpha(ch[i]))
		con++;
	}
	printf("%d  %d  %d  %d",vow,con,dig,ws);
}
