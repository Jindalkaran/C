#include<stdio.h>
void mergesort(int*,int,int);
void merge(int*,int,int,int);
void quicksort(int*,int,int);
int partition(int*,int,int);

void main()
{
	int a[10],n,i,c;
	printf("Enter no ,of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("1.merge 2.quick");
	scanf("%d",&c);
		switch(c)
		{
			case 1:mergesort(a,0,n-1);break;
			case 2:quicksort(a,0,n-1);break;
		}
	printf("Result=");
	for(i=0;i<n;i++)
		printf("%d,",a[i]);
}

void mergesort(int *a,int s,int e)
{
	int q;
	if(s<e)
	{
	q=(s+e)/2;
	mergesort(a,s,q);
	mergesort(a,q+1,e);
	merge(a,s,q+1,e);
	}
	
}

void merge(int *a,int ls,int rs,int re)
{
	int m;
	int temp[re+1];
	int le=rs-1;
	int k=0,i=ls,j=rs;
	while(i<=le && j<=re)
	{
		if(a[i]<=a[j])
		{
			temp[k]=a[i];i++;
		}	
		else
		{
			temp[k]=a[j];j++;
		}
		k++;
	}
	while(i<=le)
	{
		temp[k]=a[i];i++;k++;
	}
	while(j<=re)
	{
		temp[k]=a[j];j++;k++;
	}
	
	for(m=0;m<k;m++)
	{
		a[ls+m]=temp[m];
	}
}

void quicksort(int *a,int s,int e)
{
	int q;
	if(s<e)
	{
		q=partition(a,s,e);
		quicksort(a,s,q-1);
		quicksort(a,q+1,e);
	}
}

int partition(int *a,int s,int e)
{
	int temp;
	int k=a[e],j;
	int i=s-1;
	for(j=s;j<e;j++)
	{
		if(a[j]<=k)
		{	i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[e];
	a[e]=temp;
	return (i+1);
}