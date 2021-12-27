//Read n numbers and print even numbers in it
#include<stdio.h>
main()
{
	int n,a,i;
	printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	printf("Enter a number:");
    	scanf("%d",&a);
    	if(a%2==0)
    	{
    		printf("%d is an even number\n",a);
	    }
	    else
	    {
	    	printf("%d is not an even number\n",a);
		}
	}
}
