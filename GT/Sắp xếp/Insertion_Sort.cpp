// THUẬT TOÁN SẮP XẾP CHÈN

// Lần lượt từ vị trí thứ 2 của dãy trở đi, chèn phần tử thứ i
// vào dãy số đã đc sắp xếp phía trước nó

#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    // bắt đàu chạy từ phần tử thứ 2
    for (size_t i = 1; i < n; i++)
    {
        int j = i-1;
        int temp = a[i];
        while(j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

int main()
{
    int a[] = {8,4,3,9,1};
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(a,n);
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}