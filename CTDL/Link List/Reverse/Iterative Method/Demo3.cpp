#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

struct Node *Reverse()
{
    Node *current, *prev, *next;
    current = head;
    next = NULL;
    prev = NULL;
    while(current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
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
    Insert(4);
    print();
    head = Reverse();
    print();

    return 0;
}