#include<iostream>
using namespace std;
class node{
    int data;
    node *top=NULL;
    public:
    node *next;
    void push(int x){
        node *newnode=new node;
        if(newnode==NULL){
            cout<<"Stack is full"<<endl;
        }
        else{
            newnode->data=x;
            newnode->next=top;
            top=newnode;
        }
    }
    void display(){
        node *temp=top;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    int pop(){
        int x=-1;
        if(top==NULL){
            cout<<"Empty"<<endl;
        }
        else{
            node *temp=top;
            top=top->next;
            x=temp->data;
            delete temp;
        }
        return x;
    }
    int peek(int pos){
        int x=-1;
        node *temp=top;
        for (int i = 0; top && i< pos-1; i++)
        {
            temp=temp->next;
        }
        if(temp)
            x=temp->data;
        return x;     
    }
    int stackTop(){
        if(top){
            return top->data;
        }
        else{
            return -1;
        }
    }
    int isEmpty(){
        if(top){
            return 0;
        }
        else{
            return 1;
        }
    }
    int isFull(){
        node *t=new node;
        if(t){
            return 0;
        }
        else{
            return 1;
        }
    }
};
int main(){
    node n;
    n.push(10);
    // n.push(20);
    n.push(20);
    n.push(30);
    n.push(40);
    n.push(50);
    n.display();
    cout<<endl;
    cout<<"Value of top element is "<<n.stackTop()<<endl;
    cout<<"Pop "<<n.pop()<<endl;
    cout<<"Value at index 2 is "<<n.peek(2)<<endl;
    cout<<"Is empty "<<n.isEmpty()<<endl;
    cout<<"Is full "<<n.isFull()<<endl;
}
