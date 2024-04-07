#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

void Reverse(Node *p)
{
    if(p -> next == NULL)
    {
        head = p;
        return;
    }
    Reverse(p -> next);
    Node *q = p -> next;
    q -> next = p;
    p -> next = NULL;
}

void Insert(int data)
{
    Node *temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    if(temp != NULL)
    {
        temp -> next = head;
        head = temp;
    }
}

void print()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data;
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    print();
    Reverse(head);
    print();

    return 0;
}