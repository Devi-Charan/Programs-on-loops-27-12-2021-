// Read n numbers and print even numbers in it
#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d is an even number\n",i);
		}
		i=i+1;
	}
}
	
