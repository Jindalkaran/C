#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i;
	struct student
	{
		char name[20];
		int rollno;
		int marks;
	};
	printf("\nEnter n");
	scanf("%d",&n);
	struct student s[n],temp;
	for(i=0;i<n;i++)
	{
		printf("Enter name,roll,marks");
		scanf("%s %d %d",&s[i].name,&s[i].rollno,&s[i].marks);
	}
	temp=s[0];
	for(i=1;i<n;i++)
	{
		if(s[i].marks>temp.marks)
		temp=s[i];
	}
	printf("\n\n Maximum:\t%s %d %d",temp.name,temp.rollno,temp.marks);
}