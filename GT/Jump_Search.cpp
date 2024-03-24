// THUẬT TOÁN TÌM KIẾM NHẢY

// Nếu mảng sắp xếp tăng dần sẵn thì dùng Jump sẽ nhanh hơn Linear
// Tức là nếu có một dãy số đã đc sắp xếp tăng dần săn rồi thì dùng Jump sẽ nhanh hơn Linear.
// Vì Jump hoạt động bằng cách sử dụng bước nhảy bất kì để xác định khoảng giá trị k nằm trong đó.
// Ví dụ như dãy chạy từ 1,2,..10. Tìm vị trí của số 5
// Thì thay vì dùng Linear để chạy từ 1 đến 10 thì ta sẽ dùng Jump với bước nhảy bất kì ví dụ là 3
// Thì i sẽ chạy từ 0 rồi cộng thêm d là bước nhảy, khi mô giá trị i ni > k thì dừng lại rồi tìm 
// trong khoảng đó là đc chứ k xét thêm khoảng sau nựa nên sẽ tiết kiệm thời gian rất nhiều

// Input: Dãy A, K
// Output: Vị trí của K hoặc -1

#include <iostream>
using namespace std;

void inputArray(int arr[], int n)
{
    cout << "Nhap cac phan tu cua mang theo chieu tang dan: " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << "arr["<<i<<"]=";
        cin >> arr[i];
    }
}

int jumpSearch(int arr[], int k, int n)
{
    // Nhập bước nhảy là 1 số tự nhiên > 1
    int d = 3;
    int i = 0;
    int j = i + d;

    // Nhảy theo bước d
    while(j < n && arr[j] < k)
    {
        j = j + d;
        i = i + d;
    }

    if(j >= n)
    {
        j = n -1;
    }

    while(arr[i] < k)
    {
        i++;
        if(i >= n || i > j)
        {
            return -1;
        }
    }

    if(arr[i] == k)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[100];
    int n, k;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    inputArray(arr, n);
    cout << "Nhap so k muon tim kiem vi tri: ";
    cin >> k;

    cout << "So " << k << " nam o vi tri so: " << jumpSearch(arr, k, n);

    return 0;
}