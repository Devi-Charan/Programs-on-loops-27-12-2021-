//Check whether a number is perfect or not(A number is perfect if sum of factors of number is equal to twice number)
#include<stdio.h>
main()
{
	int a,i,sum=0,d;
	printf("enter the number:");
	scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    	d=a%i;
    	if(d==0)
    	{
    		sum=sum+i;
		}
	}
	if(sum==a*2)
	{
		printf("It is a perfect number");
	}
	else
	{
		printf("It is not a perfect number");
	}
}
