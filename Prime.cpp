#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

bool *prime_range(int n)
{
    bool *arr = new bool[n + 1]{true};

    arr[0] = false;
    arr[1] = false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        for (int j = i * 2; j <= n; j += i)
            arr[j] = false;
    }

    return arr;
}

int main()
{
    bool *x = prime_range(12);

    for (int i = 0; i <= 12; i++)
    {
        cout << i << "\t" << x[i] << endl;
    }

    return 0;
}
