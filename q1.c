#include<stdio.h>
#include<conio.h>
// Whether a number is even or odd;
main()
{
	int n;
	
	printf("enter the n:");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("this number is even.");
	}
	else
	{
		printf("this number is odd.");
	}	
}