#include<stdio.h>
void main()
{
	int i=1,count=0;
	while(count<15)
	{
		printf(",%2d",i);
		i=i+3;
		count=count+1;
	}
}