#include <iostream>
using namespace std;
int countMax(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
// Brute Force Approach
int findMajorityElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == element)
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            return arr[i];
        }
        else
        {
            return -1;
        }
    }
}
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