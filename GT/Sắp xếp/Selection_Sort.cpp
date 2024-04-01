// THUẬT TOÁN SẮP XẾP CHỌN - On2

// Nó sẽ đi tìm phần tử nhỏ nhất trong mảng trong đoạn chưa được sắp xếp
// và đổi chỗ cho phần tử nhỏ nhất đó với phần từ ở đầu đoạn chưa được sắp xếp.

#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        int iMin = i; // Gán giá trị nhỏ nhất cho i
        for (size_t j = i + 1; j < n; j++) // cho j chạy từ phần tử i+1 để tạo mảng chưa sắp xếp
        {
            if(a[j] < a[iMin])
            {
                iMin = j;  // Cập nhật lại index của phần tử nhỏ hơn
            }
        }
        int temp = a[i];
        a[i] = a[iMin];
        a[iMin] = temp;
    }
}

int main()
{
    int a[] = {2, 1, 7, 8, 5};
    int n = sizeof(a) / sizeof(a[0]);
    selectionSort(a, n);
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}