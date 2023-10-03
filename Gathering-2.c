#include<stdio.h>
sum(int num[])
{
	int i,sum=0;
	for(i=0;i<=5;i++)
	{
		sum=sum+num[i];
	}
	printf("sum of=%d",sum);
}

main()
{
	int a[]={1,2,5,3,4};
	sum(a);
}

