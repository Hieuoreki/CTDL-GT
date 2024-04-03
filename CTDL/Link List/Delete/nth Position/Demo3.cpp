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
        head = temp;
        tail = temp;
    }
    else
    {
        tail -> next = temp;
        tail = temp;
    }
}

void deleteNode(int n)
{
    Node *temp1 = head;
    if(n==1)
    {
        head = temp1 -> next;
        delete(temp1);
        return;
    }
    for (size_t i = 0; i < n-2; i++)
    {
        temp1 = temp1 -> next;
    }
    Node *temp2 = temp1 -> next;
    temp1 -> next = temp2 -> next;
    delete(temp2);
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
    deleteNode(3);
    print();

    return 0;
}