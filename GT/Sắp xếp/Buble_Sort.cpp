// THUẬT TOÁN SẮP XẾP NỔI BỌT - On2

// Duyệt 2 pahần tử liền kề nhau và đổi chỗ sau khi hết lần thứ nhất thì đến lần thứ 2,...n
// đến khi nào đk k thỏa mãn thì đc 1 dãy đã sắp xếp

#include <iostream>
using namespace std;

void bubleSort(int a[], int n)
{
    bool haveSwap = false;
    for (size_t i = 0; i < n -1; i++)
    {
        haveSwap = false;
        for (size_t j = 0; j < n - i -1; j++) 
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                haveSwap = true;
            }
        }
        // kiểm tra xem có sự hoán đổi nào k, nếu k thì kết thúc vòng lặp và in kết quả
        if(haveSwap == false)
        {
            break; 
        }
    }
}

int main()
{
    int a[] = {2,9,4,3,1,5};
    int n = sizeof(a) / sizeof(a[0]);
    bubleSort(a, n);
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}