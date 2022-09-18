#include<iostream>
using namespace std;
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