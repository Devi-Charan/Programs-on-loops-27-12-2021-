//Write a c program to find sum of multiples of 5 in range a,b (including a and b)
#include<stdio.h>
main()
{
	int a,b,sum=0;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%5==0)
		{
		sum=sum+a;
	    }
	    a=a+1;
	}
	printf("sum of multiples of 5 is %d",sum);
}
