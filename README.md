# length-of-a-singly-linked-list:
```c
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
```
# check-if-linked-list-is-a-palindrome😇 
algorithm 
certains steps:
1.split the linked list in the middle.
2.prepare two linked lists.
3. if odd ignore the middle node.
4. reverse the second linked list.
5. compare the two linked lists.

```c
while()
{
p=p->next->next;
q=q->next;
if(p->next==NULL)
{
start_second=q->next->next;break;
}
if(p==NULL)
{
start_second=q->next;break;
}
q->next=NULL;
}
```
