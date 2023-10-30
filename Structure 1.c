#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Person 
{
  char name[50];
  int citNo;
  float salary;
} person1;

int main() 
{

  strcpy(person1.name, "Ram Kumar Das");
  person1.citNo = 1984;
  person1. salary = 2500;
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
   printf("Salary: %f\n", person1.salary);
  getch();
  return 0;
}

