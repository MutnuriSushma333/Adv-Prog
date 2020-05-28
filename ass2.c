/*print nth table*/
/*While loop demo*/
#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		printf("\n %d X %d =%d",n,i,i*n);
		i++;
	}
}
