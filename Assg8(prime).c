#include<stdio.h>
int main()
{
	int a[10],i,n,count=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum=sum+a[i];
		}
	}
	for(i=2;i<=sum/2;i++)
	{
		if(sum%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not a prime");
	}
}
