#include<stdio.h>
#include<conio.h>
void main()
{
	int basic,da,hra,gross;
	printf("\n Enter the basic");
	scanf("%d",&basic);
	if (basic<=20000)
	{
	hra=basic*20/100;
	da=basic*80/100;
	gross=basic+hra+da;	
	printf("Salary Payable %d",gross);		
	}
	else if (basic>=20000)
	{
	hra=basic*30/100;
	da=basic*95/100;
	gross=basic+hra+da;	
	printf("Salary Payable %d",gross);
	}
	getch();
}
