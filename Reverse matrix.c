#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[2][2],i,j;
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;i++)
			{
			printf("\n Enter The Arrey");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=2;i<0;i--)
	{
			for(j=2;j<0;j--)
			{
			printf("\n The Given Values in the arrey in arrey  %d %d",arr[i][j]);
		}
	}
	getch();
}
