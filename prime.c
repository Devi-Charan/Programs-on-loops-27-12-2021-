// Check whether a number is prime or not.
#include<stdio.h>
main()
{
	int a,i=1,d,f=0;
	printf("Enter the value for a:");
	scanf("%d",&a);
	while(i<=a)
	{
		d=a%i;
     	if(d==0)
		{
		   f++;
	    }
	    i++;
	}
	if(f==2)
	{
	    printf("It is a prime number");
	}
	else
	{
	    printf("It is not a prime number");
	}
}

