#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

// Hàm thêm 1 nút vào vị trí bất kì n
void insert(int data, int n)
{ 
    // Tạo 1 nút mới
    Node *temp1 = new Node();
    // Gán data cho temp1
    temp1 -> data = data;
    // Gán địa chỉ
    temp1 -> next = NULL;
    // Kiểm tra xem nếu muốn thêm vào đầu dslk
    if(n==1)
    {
        // Cập nhật temp1 cho head để đưa nút lên đầu dslk
        temp1 -> next = head;
        head = temp1;
        return ;
    }
    // Nếu n!= 1 thì...
    // Khởi tạo temp2 đầu dslk
    Node *temp2 = head;
    // Dùng vòng for để duyệt dslk đến vị trí chèn
    for (size_t i = 0; i < n-2; i++)
    {
        // Trỏ đến nút tiếp theo
        temp2 = temp2 -> next;
    }
    // gán địa chỉ nút trước vị trí chèn cho nút mới
    temp1 -> next = temp2 -> next;
    // chèn nút mới vô
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
    Node *head = NULL;
    insert(2,1);
    insert(8,2);
    insert(5,2);
    print();

    return 0;
}