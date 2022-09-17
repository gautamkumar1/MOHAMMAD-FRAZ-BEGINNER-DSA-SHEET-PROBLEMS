#include <iostream>
using namespace std;
void MoveZerosToLeft(int *arr, int n)
{
    int a = n - 1;
    int b = n - 1;
    while (b >= 0)
    {
        if (arr[b] != 0)
        {
            arr[a] = arr[b];
            a--;
        }
        b--;
    }
    while (a >= 0)
    {
        arr[a] = 0;
        a--;
    }
}

int main()
{
    int arr[5] = {1, 2, 0, 0, 1};
    int n = 5;
    MoveZerosToLeft(arr, n);
    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}
