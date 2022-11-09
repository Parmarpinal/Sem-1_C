#include<stdio.h>
void main()
{
	int n,i=2,fac=1;
	printf("Enter no:");
	scanf("%d",&n);
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}

	printf("Factorial=%d",fac);
}