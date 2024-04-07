#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

// Hàm đảo ngược
struct Node *Reverse()
{
    // Khởi tạo 3 con trỏ hiện tại, trước đó, tiếp theo
    Node *current, *prev, *next;
    // gán biến hiện tại là biến đầu tiên
    current = head;
    // biến trước đó và biến tiếp theo là NULL
    prev = NULL;
    next = NULL;
    // duyệt qua danh sách
    while(current != NULL)
    {
        // Lưu biến tiếp theo bằng biến hiện tại
        next = current -> next;
        // Cập nhật lại địa chỉ của hiện tại bằng trước đó
        current -> next = prev;
        // Cập nhật trước đó với hiện tại
        prev = current;
        // Cập nhật hiện tại với tiếp theo
        current = next;
    }
    // Cập nhật đưa head ra sau cùng để thành nút đầu tiên
    head = prev;
    return head;
}

// Hàm thêm nút vào đầu danh sách
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

// Hàm in
void Print()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
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
    Print();
    head = Reverse();
    Print();

    return 0;
}