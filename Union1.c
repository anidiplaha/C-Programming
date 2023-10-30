#include<stdio.h>
#include<conio.h>
#include<string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data;        

   printf( "Memory size occupied by data : %d\n", sizeof(data));
   getch();
   return 0;
}
