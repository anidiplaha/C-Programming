#include<stdio.h>
#include<conio.h>
int main() {
   int a, b, i, hcf;
	printf("\n Enter The First Number");
    scanf("%d",&a);
   	printf("\n Enter The Second Number");
    scanf("%d",&b);
   for(i = 1; i <= a || i <= b; i++) 
   {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }
   printf("HCF = %d", hcf);
   getch();
   return 0;
}
