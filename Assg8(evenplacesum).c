#include<stdio.h>
int main()
{
	int n,r,count=0,sum=0,cnt=0,i;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		count++;
		if(count%2==0)
		{
			sum=sum+r;
		}
		n/=10;
	}
	for(i=2;i<=sum/2;i++)
	{
		if(sum%i==0)
		{
			cnt++;
		}
	}
	if(cnt==0)
	{
		printf("%d",sum);
	}
	else
	printf("Sum is not prime");
}
