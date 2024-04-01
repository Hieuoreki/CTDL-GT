// THUẬT TOÁN 

// Chia mảng đàu thành 2 nửa, gọi chính nó cho 2 nửa và hợp nhât 2 nửa đã sắp xếp

#include <iostream>
using namespace std;

// Hợp nhất 2 mảng con của a[]
// Mảng con đầu tiên là a[l...m]
// Mảng con thứ 2 là a[m+1...r]

void merge(int a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // Tạo mảng tạm thời
    int L[n1], R[n2];

    //Copy dữ liệu vào mảng tạm thời
    for (size_t i = 0; i < n1; i++)
    {
        L[i] = a[l + i];
    }
    for (size_t j = 0; j < n2; j++)
    {
        R[j] = a[m + 1 + j];
    }
    
    // Hợp nhất các mảng tạm thời lại a[l...r]

    // Chỉ số ban đầu của mảng con đầu tiên
    int i = 0;

    // Chỉ số ban đầu của mảng con thứ 2
    int j = 0;

    // Chỉ số ban đầu của mảng con được hợp nhất
    int k = l;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Sao chép các phần tử còn lại của L[] nếu có
    while(i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    // Sao chép các phần tử còn lại của R[] nếu có
    while(j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

 // l dành cho chỉ mục bên trái và r là bên pahir của mảng con của mảng cần được sắp xếp

void mergeSort(int a[], int l, int r)
{
    if(l < r)
    {
        // Tương tự như (l+r)/2, nhưng tránh tràn dữ liệu r và l
        int m = l + (r - l)/2;
        // Sắp xếp nưả đầu và nưuar sau
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        merge(a, l, m, r);
    }
}

int main()
{
    int a[] = {5, 4, 3, 9, 7, 12};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Mang ban dau: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    mergeSort(a, 0, n-1);
    cout << " Mang sau sap xep la: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
    
}