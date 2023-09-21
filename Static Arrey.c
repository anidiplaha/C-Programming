#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the Number");
		scanf("%d",&arr[i]);
	}
	printf("\n Values in accending order is");
	for(i=0;i<5;i++)
	{
		printf("\n  %d",arr[i]);
	}
	printf("\n Values in deccending order is");
	for(i=5;i<=0;i--)
	{
		printf("\n  %d",arr[i]);
	}
	getch();
}
