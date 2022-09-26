/*
1 2 3
4 5 6
7 8 9

We can sum up all the elements that lie on the diagonals, namely 1+5+9+3+7 = 25.

Logic condition : if(i==j || i+j==n-1){sum+=grid[i][j]}
*/
#include <bits/stdc++.h>

using namespace std;

int maximumPoiints(vector<vector<int>> &grid, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j) || (i + j == n - 1))
            {
                sum += grid[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    cout << "Maximum Points is : " << maximumPoiints(grid, n);
    return 0;
}