#include <iostream>
using namespace std;
class node
{
 public:
 int data;
 node* link;
};
void pop(node**head)
{
 *head=(*head)->link;
}
void push(node **head,int info)
{
 node*ref=*head;
 node*temp=new node();
 temp->data=info;
 
 if(*head==NULL)
 {
  temp->link= NULL;
  *head=temp;
  return;
 }
 else if(head!=NULL)
 {
  temp->link=*head;
  *head=temp;
  return;
 }
}
void output(node *head)
{
 node*ref=head;
 while(ref!=NULL)
 {
  cout<<ref->data;
  ref=ref->link;
  
 }
}

int main() {
 node*head=NULL;
 push(&head,5);
 push(&head,4);
 push(&head,3);
 push(&head,2);
 output(head);
 pop(&head);
  output(head);
	return 0;
}
