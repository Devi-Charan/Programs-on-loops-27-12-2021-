//Program to read x,y values and calculate x power raised to y (x^y)
#include<stdio.h>
main()
{
	int x,y,p=1;
	printf("Enter the value for x:");
	scanf("%d",&x);
    printf("Enter the value for y:");
	scanf("%d",&y);
	while(y>0)
	{
		p=p*x;
		y=y-1;
	}
	printf("%d",p);
}
