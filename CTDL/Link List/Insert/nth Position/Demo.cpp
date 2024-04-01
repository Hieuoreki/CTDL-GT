#include <iostream>
using namespace std;

struct Node
{
    int data; // Gán biến lưu trữ dữ liệu
    Node *next; // gán biến địa chỉ tiếp theo cho nút
};

// gán con trỏ cho nút đầu tiên với kiểu dữ liệu là struct
struct Node *head; // Khai báo con trỏ đầu danh sách

// Hàm insert chèn 1 nút mới có dữ liệu data vào vị trí n
void insert(int data, int n)
{
    Node *temp1 = new Node(); // Tạo nút mới
    temp1 -> data = data; // Gán dữ liệu data cho nút mới
    temp1 -> next = NULL; // Gán null cho con trỏ next của nút mới thể hiện nút mới là nút cuối cùng
    if(n==1) // Trường hợp đặc biệt, chèn vào vị trí đầu tiên
    {
        temp1 -> next = head; // Gán vị tri con trỏ next cho nút đầu tiên hiện tại
        head = temp1; // Cập nhật nút đầu tiên để xác định nút mới lên đầu dslk
        return;
    }
    Node *temp2 = head; // Khởi tạo con trỏ temp2 bằng con trỏ đầu dslk
    for (size_t i = 0; i < n-2; i++) // duyệt dslk, duyệt danh sách n-2 lần để đến nút trước vị trí chèn
    {
        temp2 = temp2 -> next; // Trỏ đến nút tiếp theo
    }
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;
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
    insert(2,1);
    insert(7,2);
    insert(4,1);
    insert(9,2);
    print();

    return 0;
}