#include<stdio.h>
void main()
{
	int n;
	float sum=0.0,i;
	printf("\n enter no of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i*i);
	}
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			printf("1");
		}
		else
		{
			printf("+ 1/%d",i*i);
		}
	}
	printf("sum of the series= %f",sum);
}
