#include<stdio.h>
void main()
{
	int n,co=0,ce=0,count=0;
	while(count<10)
	{
		printf("Enter no: ");
		scanf("%d",&n);
		count=count+1;
		if(n%2==0)
		{
			ce=ce+1;
		}

		else{
			co=co+1;
		}
	}

	printf("Even numbers=%d",ce);
	printf("Odd numbers=%d",co);
}