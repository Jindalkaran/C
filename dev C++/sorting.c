#include<stdio.h>
void bubble();
void selection();
void insertion();
int n,a[20];
void main()
{
	int i,c;

	printf("Enter no ,of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("1.bubble2.selection,3,insertion");
		scanf("%d",&c);
		switch(c)
		{
			case 1:bubble();break;
			case 2:selection();break;
			case 3:insertion();break;
		}
		printf("Result=");
		for(i=0;i<n;i++)
			printf("%d,",a[i]);
}
void bubble()
{
	int swap=1;
	int i,j,temp;
	for(i=0;i<n && swap==1;i++)
	{
		swap=0;
		for(j=0;j<(n-i-1);j++)
		{
		if(a[j]>=a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			swap=1;
		}
		}
	}
}
void selection()
{
	int i,j,temp,loc;
	for(i=0;i<n;i++)
	{
		loc=i;
		for(j=(i+1);j<n;j++)
		{
			if(a[loc]>a[j])
				loc=j;
		}
		if(loc!=i)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
	}
}
		
void insertion()
{
		int i,j,temp;
		for(i=1;i<n;i++)
		{
			temp=a[i];
			for(j=i-1;j>=0 && temp<a[j];j--)
			{
				a[j+1]=a[j];
			}
			a[j+1]=temp;
		}
}
