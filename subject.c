//Read marks in 5 subjects and count how many scored greater than 50
#include<stdio.h>
main()
{
	int a,i,sum=0;
    for(i=1;i<=5;i++)
    {
    	printf("Enter the marks: ");
    	scanf("%d",&a);
    	if(a>50)
    	{
    		sum=sum+1;
		}
    }
    printf("%d subjects scored greater than 50",sum);
}
