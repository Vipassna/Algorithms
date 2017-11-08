
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
