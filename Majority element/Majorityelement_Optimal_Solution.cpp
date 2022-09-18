#include <iostream>
using namespace std;
// Optimal Solution
// Moore's Voting Algorithm
int majorityElement(int arr[], int n)
{
    int count = 1; // Lets assume that 1st element count is 1
    int res = 0;   // 1st Element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            count = 1;
            res = i;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[res])
            count++;
    }
    if (count <= (n / 2))
    {
        return -1;
    }
    else
    {
        return arr[res];
    }
}
int main()
{
    int arr[] = {3,2,3};
    int n = 3;
    int ans = majorityElement(arr, n);
    cout << ans;
    return 0;
}