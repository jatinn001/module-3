#include<stdio.h>
main()
{
	int arr[100];
	int i,n;
	printf("\n enter the length of array : ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	
	{
		printf("\n input array [%d] :",i);
		scanf("%d",&arr[i]);
		
	}
	
	printf("\n even elements are.....");
	
	for (i=0;i<n;i++)
	
	{
		if (arr[i]%2==0)
		{
			printf("even");
			
		}
		else 
		{
			printf("odd");
		}
	}
