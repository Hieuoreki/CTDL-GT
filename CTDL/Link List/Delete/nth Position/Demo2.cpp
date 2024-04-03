#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;
struct Node *tail;

// Hàm thêm nút vào cuối dslk
void insertTail(int data)
{
    Node *temp = new Node();
    temp -> data =data;
    temp -> next = NULL;
    // Kiểm tra xem nút có null k
    if(head == NULL)
    {
        // nếu head == Null thì đầu cũng bằng cuối = temp
        head = temp;
        tail = temp;
    }
    else
    {
        // Cập nhật địa chỉ của tail
        tail -> next = temp;
        // đưa temp về cuối dslk
        tail = temp;
    }
}

void Delete(int n)
{
    // Khởi tạo temp1 là nút đầu tiên
    Node *temp1 = head;
    // Kiểm tra nêú n=1 
    if(n==1)
    {
        head = temp1 -> next; // cập nhật head để trỏ đến nút tiếp theo
        delete(temp1);
        return;
    }
    // Duyệt đến nút trước nút cần xóa
    for (size_t i = 0; i < n-2; i++)
    {
        // next đến nút tiêps theo
        temp1 = temp1 -> next;
    }
    // Lưu địa chỉ nút cần xóa vào temp2
    Node *temp2 = temp1 -> next;
    // Cập nhật next của nút trước nút cần xóa để trỏ đến nút sau nút cần xóa
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
    print();
    Delete(2);
    print();

    return 0;
}