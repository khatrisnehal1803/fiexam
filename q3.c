#include<stdio.h>
#include<conio.h>
// calculate profit and loss on a transaction;
main()
{
	int profit,loss,sell,cost;
	
	printf("enter a profit vule=");
	scanf("%d",&profit);
	
	printf("enter a loss vule=");
	scanf("%d",&loss);
	
	if(cost>sell)
	{
		loss=cost-sell;
		printf("loss vule is %d",loss);
	}
	else if (cost-sell);
	{
		profit=sell-cost;
		printf ("profit vule is %d",profit);
	}
}
