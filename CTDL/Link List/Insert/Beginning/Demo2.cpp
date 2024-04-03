#include <iostream>
using namespace std;

// tạo cấu trúc của dslk
struct Node
{
    int data; // biến lưu trữ dữ liệu
    Node *next; // Trỏ nút tới biến next để lưu trữ địa chỉ nút tiếp theo
};

// trỏ nút cho biến đầu tiên là head với kiểu dữ liệu là struct
struct Node *head;

// Hàm thêm 1 nút lên trước dslk
void insert(Node **head, int x)
{
    // Tạo 1 nút mới
    Node *temp = new Node();
    // gán giá trị x cho temp;
    temp -> data = x;
    // Gán địa chỉ là null vì khi thêm 1 nút vào thì nó sẽ tự động them vào cuối dslk
    temp -> next = NULL;
    // kiểm tra xem có nút nào trong dslk không 
    if(*head != NULL)
    {
        // cập nhật địa chỉ mới cho temp để trỏ đến nút đầu tiên
        temp -> next = *head;
    }
    // cập nhật head để trỏ đến nút đầu tiên trong dslk
    *head = temp;
}

// Hàm in ra dslk
void print(Node *head)
{
    cout << "List is: ";
    while(head != NULL)
    {
        // in giá trị data
        cout << head -> data;
        // Cập nhật head mới để trỏ đến nút tiếp theo
        head = head -> next;
    }
}

int main()
{
    Node *head = NULL;
    int n,i,x;
    cout << "Input number: ";
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
