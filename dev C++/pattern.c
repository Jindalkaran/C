#include<stdio.h>
 main()
 {
 	int i,j,a=64;
 	for(i=0;i<3;i++)
 	{
 		for(j=1;j<=(2-i);j++)
 		printf(" ");
 		for(j=0;j<=i;j++)
 		printf("%c ",++a);
 		printf("\n");

 }
}
