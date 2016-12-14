#include <cstdlib>
#include<iostream>
using namespace std;

class node
{
 public:
    int data;
    node* next;
};

class StackusingList
{
public:
StackusingList(int max)
{
    top = NULL;
    maxnum = max;
    count=0;
}
StackusingList::~StackusingList()
{
    node* current = top;

    while (temp != NULL)
    {
        node* next = current->next;
        delete current;
        current = next;
    }

    top = NULL;
}

void push(int element)
{
    if(count == maxnum)
            cout<<"stack is full";
    else
    {
        node *newTop = new node;
        if(top == NULL)
        {       
            newTop->data = element;
            newTop->next = NULL;
            top = newTop;
            count++;
        }
        else
        {
            newTop->data = element;
            newTop->next = top;
            top = newTop;
            count++;
        }
    }
}

void pop()
{
    if(top == NULL)
            cout<< "nothing to pop";
    else
    {
        node * old = top;
        top = top->next;
        count--;
        delete(old);
    }
}
void print()
{
    node *temp;
    temp = top;
    while(temp!=NULL)
    {
        cout<<temp->data<<",";
        temp=temp->next;
    }
}
private:
    node *top;
    int count; //head
    int maxnum;
    int stackData;      
};

int main(int argc, char** argv) {   
    StackusingList *sl = new StackusingList(5);
    sl->push(1);
    sl->push(2);
    sl->push(3);
    sl->push(4);
    sl->push(5);
    sl->push(6);

    sl->pop();
    cout<<"new stack\n";
    sl->print();

    return 0;
}
