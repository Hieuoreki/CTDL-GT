#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

void insert(Node **head, int x)
{
    Node *temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    if(*head != NULL)
    {
        temp -> next = *head;
    }
    *head = temp;
}

void print(Node *head)
{
    cout << "List is: ";
    while(head != NULL)
    {
        cout << head -> data;
        head = head -> next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int n, x;
    cout << "Enter number: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Insert number: ";
        cin >> x;
        insert(&head, x);
        print(head);
    }
    
    return 0;
}