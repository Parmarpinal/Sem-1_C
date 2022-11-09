#include<stdio.h>
void main()
{
	int a,b,ans,choice;
	printf("Enter no1: ");
	scanf("%d",&a);
	printf("Enter no2: ");
	scanf("%d",&b);
	printf("Enter no. for choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		{
			ans=a+b;
			printf("Answer=%d",ans);
			break;
		}
		case 2:
		{
			ans=a-b;
			printf("Answer=%d",ans);
			break;
		}
		case 3:
		{
			ans=a*b;
			printf("Answer=%d",ans);
			break;
		}
		case 4:
		{
			ans=a/b;
			printf("Answer=%d",ans);
			break;
		}
		default:
		{
			printf("Invalid choice");
		}
	}
}