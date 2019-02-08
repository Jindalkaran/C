#include<stdio.h>
#include"header.h"
#define KARAN
int main()
{
	printf("Enter a no.");
	int n;
	scanf("%d",&n);
	int f=func(n);
	printf("factorial=%d\n",f);
	#ifndef KARAN
printf("AGARWAL\n");
#else
printf("Jindal\n");
#endif
printf("A GOOD MAN\n");
	return 98;
}
