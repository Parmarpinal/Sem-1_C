#include<stdio.h>
void main()
{
	int x,y,ans=1,i=1;
	printf("Enter no1:");
	scanf("%d",&x);
	printf("Enter no2:");
	scanf("%d",&y);
	while(i<=y)
	{
		ans=ans*x;
		i++;
	}

	printf("ans=%d",ans);
}