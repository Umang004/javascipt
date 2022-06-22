#include<stdio.h>
void main()
{
	int i,n;
	i=2;
	printf("enter n=");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("Number is  Not prime number");
			break;
			i++;
		}
		if(n%i!=0)
		{
			printf("Number is prime number");
			break;
		}
	}	
} 