#include <bits/stdc++.h>
using namespace std;

int rev_printing(int n); // Printing The output
int rev(int n);

int main()
{
    cout << rev(3) << endl;
    // cout<<rev_printing(3)<<endl;
    return 0;
}

int rev_printing(int n) // Printing The output
{
    vector<int> v(32);
    int mask = 1, num = 0;

    for (int i = 0; i < 32; i++) // .      For assigning values
    {
        mask <<= i;
        if ((mask & n) == 0)
            v[i] = 0;
        else
            v[i] = 1;
    }

    for (auto it : v) //.              For Printing values of vector
        cout << it << "\t";

    for (int i = 0; i < 32; i++) //.             Creating number using vector
    {
        num <<= 1;
        num = (num | v[i]);
    }

    return num;
}

int rev(int n)
{
    int res = 0, mask = 1;

    for (int i = 0; i < 32; i++)
    {
        mask <<= i;
        if ((mask & n) != 0)
        {
            res |= (1 << (31 - i));
        }
    }
    return res;

    //.     Here I'm setting the bits while scanning the number using mask
}