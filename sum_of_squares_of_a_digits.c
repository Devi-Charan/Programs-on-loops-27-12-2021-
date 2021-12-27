//Write a c program to find sum of squares of digits of a given number
#include<stdio.h>
main()
{
	int a,d,m,s=0;
	printf("Enter the value for a:");
	scanf("%d",&a);
	while(a>0)
	{
		d=a%10;
		m=d*d;
		s=s+m;
		a=a/10;
	}
	printf("sum of squares of digits of a given number is %d",s);
}
