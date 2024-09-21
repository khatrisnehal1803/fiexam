#include<stdio.h>
#include<conio.h>
// sum of all elements of the array;`	
main()
{
	int i,sum=0,n;
	
	printf("Enter array size:");
	scanf("%d",&n);
	printf("\n");
	
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
		printf("\n");
		
	for(i=0;i<n;i++)
	{
		printf("enter b[%d] :",i);
		scanf("%d",&b[i]);
	}
		printf("\n");
		
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum = sum +a[i];
		}
	}
		printf("\n");
		
	
	
}
