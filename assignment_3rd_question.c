//Write a c program to find product of odd digits in a given number
#include<stdio.h>
main()
{
	int a,n,m;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a!=0)
	{
		n=a%10;
		if(n%2!=0)
		{
			m=m*n;
		}
		a=a/10;
	}
	printf("product of odd digits in a given number is %d",m);
}

