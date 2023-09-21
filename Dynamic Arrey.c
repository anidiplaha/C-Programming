#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		printf("\n Enter The Number");
		scanf("%d",&arr[i]);
	}
	printf("\n The Given Values arre...");
	for(i=0;i<=10;i++)
	{
		printf("%d",arr[i]);
	}
	getch();
}
