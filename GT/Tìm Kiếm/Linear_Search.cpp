// THUẬT TOÁN TÌM KIẾM TUẦN TỰ - O(n)

// Input: Dãy A, K
// Output: Vị trí của K hoặc -1

#include <iostream>
using namespace std;

void nhapMang(int a[], int n)
{
    cout << "Nhap cac phan tu cua mang: " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]=";
        cin >> a[i];
    }
    
}

int linearSearch(int a[], int k, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[100];
    int k, n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    nhapMang(a,n);
    cout << "Nhap so k muon tim kiem: ";
    cin >> k;

    cout << "So " << k << " can tim kiem trong day o vi tri la: " << linearSearch(a,k,n);

    return 0;
}