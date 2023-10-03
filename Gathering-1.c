#include<stdio.h>

int fact(int n)
{
	int factorial = 1;
	if(n<=1)
	{
		return 1;
	}
	else
	{
		factorial = n*fact(n-1);
	}
	
	return factorial;
}

int main()
{
	int n;
	
	printf("Enter value =");
	scanf("%d",&n);
	
	printf("factorial =%d",fact(n));
	
	return 0;
}

