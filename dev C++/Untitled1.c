#include<stdio.h>
int me(int);
int me(int n1)
{
	if(n1==1)
	return 1;
	return n1*(me(n1-=1));
}
void main()
{
	int n=5;
	int c;
	printf("HELLO");
	c=me(n);
	printf("%d",c);
}
