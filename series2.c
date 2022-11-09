#include<stdio.h>
void main()
{
	int n,i=1,a,sum=0;
	printf("Enter no:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			a=-1*i;
		}

		else{
			a=i;
		}

		sum=sum+a;
		i++;
	}

	printf("Sum=%d",sum);
}