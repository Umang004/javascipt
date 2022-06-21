#include<stdio.h>
void main()
{
	int sum=0,n,x,y;
	printf("enter n=");
	scanf("%d",&n);
	y=n;
	while(n>0)
	{
		x=n%10;
		n=n/10;
		sum=sum+(x*x*x);
	}
	if(sum==y)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is Not Armstrong");
	}
}