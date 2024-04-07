#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;
struct Node *tail;

struct Node *Reverse()
{
    Node *current, *prev, *next;
    current = head;
    prev = NULL;
    next = NULL;
    while(current != NULL)
    {
        next = current -> next; // Lưu nút tiếp theo
        current -> next = prev; // Cập nhật con trỏ next của current lên trước (prev)
        prev = current; // Cập nhật trước đó và hiện tại
        current = next; // cập nhật hiện tại và tiếp theo
    }
    head = prev;
    return head;
}

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
    tail -> next = temp;
    tail = temp;
}

void print()
{
    Node *temp = head;
    while(temp!= NULL)
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
    insertTail(5);
    print();
    head = Reverse();
    print();

    return 0;
}
