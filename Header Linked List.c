#include<malloc.h>
#include<stdio.h>
#include<conio.h>

struct link 
{
    int info;
    struct link* next;
};
  
struct link* start = NULL;
  
struct link* create_header_list(int data)
{
  
    struct link *new_node, *node;
    new_node = (struct link*)
        malloc(sizeof(struct link));
    new_node->info = data;
    new_node->next = NULL;
    if (start == NULL) 
	{
        start = (struct link*)
            malloc(sizeof(struct link));
        start->next = new_node;
    }
    else 
	{
        node = start;
        while (node->next != NULL) 
		{
            node = node->next;
        }
        node->next = new_node;
    }
    return start;
}
  
struct link* display()
{
    struct link* node;
    node = start;
    node = node->next;
    while (node != NULL) 
	{
        printf("%d ", node->info);
        node = node->next;
    }
    printf("\n");
    return start;
}
int main()
{
    create_header_list(11);
    create_header_list(12);
    create_header_list(13);
    display();
    create_header_list(14);
    create_header_list(15);
    display();
    getch();
    return 0;
}
