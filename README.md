# length-of-a-singly-linked-list:
#include<stdio.h>
#include<conio.h>
struct node
{
int a;
struct node *next;
};
int main()
{
struct node *head=NULL;
int count;
count=0;
generate(&head);
count=length(head);
printf("the number of nodes are:",count);
return 0;
}
