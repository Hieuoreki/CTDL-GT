#include <iostream>
using namespace std;

void mergr(int a[], int l, int m, int r)
{
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1], R[n2];

    for (size_t i = 0; i < n1; i++)
    {
        L[i] = a[l+i];
    }
    for (size_t j = 0; j < n2; j++)
    {
        R[j] = a[m+1+j];
    }
    
    
}