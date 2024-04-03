#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;
struct Node *tail;

void insert(int data)
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

void Delete(int n)
{
    Node *temp1 = head;
    // Nếu nút muốn xóa là nút đầu tiên
    if(n==1)
    {
        head = temp1 -> next; // Cập nhâth head để trỏ đến nút tiếp theo
        delete(temp1);
        return;
    }
    // Duyệt đên nút trước nút cần xóa
    for (size_t i = 0; i < n-2; i++)
    {
        temp1 = temp1 -> next; 
    }
    Node *temp2 = temp1 -> next; // lưu địa chỉ nút cần xóa vào temp2
    temp1 -> next = temp2 -> next; // Cập nhật con trỏ next của nút trước nút cần xóa để trỏ đến nút sau nút cần xóa
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
    Node *head = NULL;
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    cout << "Danh sach ban dau la: ";
    print();
    Delete(3);
    print();

    return 0;
}