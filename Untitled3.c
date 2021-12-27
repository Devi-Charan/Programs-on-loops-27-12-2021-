//Read a number and count the digits in given number
#include <stdio.h>
int main()
{
    int a,b,t=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0) 
	{
        b=a%10;
        t=t+1;
        a=a/10;
    }
    printf("Total numbers of digits are: %d",t);
}
