#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int> arr, int target)
{
    int len = arr.size();
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == target)
        {
            return true;
        }
        else if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 8};
    int target = 12;
    cout << twoSum(arr, target) << endl;
    return 0;
}