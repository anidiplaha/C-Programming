#include<stdio.h>
#include<conio.h>
#include<string.h>
 
struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
};
 
int main( ) {

   struct Books Book1;
   struct Books Book2; 
   strcpy( Book1.title, "Let Us C");
   strcpy( Book1.author, "Y Kanetkar"); 
   strcpy( Book1.subject, "BPB Publication");
   Book1.book_id = 6495407;

   strcpy( Book2.title, "ANSI C Programming");
   strcpy( Book2.author, "E Balagurusammy");
   strcpy( Book2.subject, "TATA");
   Book2.book_id = 6495700;
 
   /* print Book1 info */
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

   /* print Book2 info */
   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

   return 0;
}
