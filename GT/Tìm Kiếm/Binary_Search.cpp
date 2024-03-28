// THUẬT TOÁN TÌM KIẾM NHỊ PHÂN

// Yêu cầu cũng như thuật toán Jump Search, dãy phải tăng
// Cách hoạt động là chia đôi dãy và thỏa mãn điều kiện đề
// bài rồi lại chia đôi dãy vừa mới chia khi nào thỏa mãn 
// đề bài thì stop

// Input: Dãy A, K
// Output: Vị trí của K hoặc -1


#include <iostream>
using namespace std;

void inputArray(int a[], int n)
{
    cout << "Nhap cac phan tu cua mang: " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << "a["<<i<<"]=";
        cin >> a[i];
    }
}

int binarySearch(int a[], int n, int k)
{
    // Biến bên trái là phần tử đầu tiên
    int left = 0;
    // Biến bên phải là số lượng phần tử
    int right = n;
    // Sử dụng vòng while() để xử lý
    while(left <= right)
    {
        // Tìm kiếm phần tử ở giữa
        int mid = (left + right)/2; // lấy phần nguyên
        if(a[mid] == k)
        {
            return mid;
        }
        else if(a[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[100];
    int n, k;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    inputArray(a,n);
    cout << "Nhap phan tu muon tim kiem: ";
    cin >> k;
    
    cout << "So " << k << " muon tim kiem ơ vi tri so: " << binarySearch(a,n,k) << endl;

    return 0;
}