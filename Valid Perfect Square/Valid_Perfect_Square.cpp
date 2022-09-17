#include <iostream>
using namespace std;

bool isPerfectSquare(long long num)
{
    // Edge Case
    if (num == 1 || num == 0)
    {
        return true;
    }
    int low = 0;
    int high = num - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long square = (long long)mid * mid;
        if (square == num)
        {
            return 1;
        }
        else if (square < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    bool ans = isPerfectSquare(num);
    if (ans)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}