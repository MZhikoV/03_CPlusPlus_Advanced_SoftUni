#include <iostream>
#include <vector>

using namespace std;

bool isPrimeN(int &n)
{

    // 0 and 1 are not prime numbers
    if (n == 0)
    {
        return false;
    }
    if ( n == 1) {
        return true;
    }

    // loop to check if n is prime
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{

    // vector<vector<int> arr;
    int n;
    cin >> n;
    int arr[n][n];

    for (size_t r = 0; r < n; r++)
    {
        for (size_t c = 0; c < n; c++)
        {
            cin >> arr[r][c];
        }
    }
    int sum = 0;
    for (size_t r = 0; r < n; r++)
    {
        for (size_t c = 0; c < n; c++)
        {
            if (((n-1-r) < c) && (c<r))
            {
                if(isPrimeN(arr[r][c])) {
                   sum+=arr[r][c];
                }
            }
        }
    }
        cout<<sum<<endl;
    return 0;
}