#include <iostream>
using namespace std;

struct Node
{
    int data;  // Lưu trữ dữ liệu
    Node *next; // Lưu trữ địa chỉ của biến tiếp theo
};

struct Node *head;  // Trỏ node tới nút đầu tiên kí hiệu là head

// Chèn 1 nút mới có giá trị x vào đầu danh sách liên kết
void insert(Node **head ,int x) // Vì nút đầu tiên head cũng là 1 con trỏ nên head cơ bản cũng là một con trỏ trỏ đến con trỏ
{
    Node *temp = new Node(); // Tạo 1 nút mới, nút này sẽ lưu trữ dữ liệu của x
    temp -> data = x; // gán giá trị x cho trường data
    temp -> next = NULL; // gán NULL cho trường next vì khi thêm 1 nút thì nso sẽ vào cuối danh sách
    if(*head != NULL) // Kiểm tra xem danh sách liên kết có rỗng không
    temp -> next = *head; // Cập nhật next mới của nút temp để trỏ đến nút đàu tiên hiện tại của danh sách lk đc trỏ bởi *head
    *head = temp; // cập nhật head để trỏ đến nút mới temp, nó lm cho nút mới thành nút đầu tiên
}

void print(Node *head)
{
    cout << "List is: ";
    while(head != NULL)
    {
        cout << head -> data; // in ra dữ liệu của nút hiện tại
        head = head -> next; // cập nhâtj head để trỏ đến nút tiếp theo
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    cout << "How many number? \n";
    int n,i,x;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Enter the number: \n";
        cin >> x;
        insert(&head, x);
        print(head);
    }
    
    return 0;
}