#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;
struct Node *tail;

void insertTail(int data)
{
    Node *temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    if(head == NULL)
    {
        tail = temp;
        head = temp;
    }
    tail -> next = temp;
    tail = temp;
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
    insertTail(1);
    insertTail(2);
    insertTail(3);
    insertTail(4);
    print();

    return 0;
}