#include <iostream>
using namespace std;

void SWAP(long int &a, long int &b)
{
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}

int main()
{

  cout << "Hello world" << endl;
  // int t;
  // cin >> t;
  // while (t--)
  // {
  //   long int size;
  //   cin >> size;
  //   long int arr[size];

  //   for (long int i = 0; i < size; i++)
  //   {
  //     cin >> arr[i];
  //   }

  //   for (long int i = 0, j = size - 1; i < j; i++, j--)
  //   {
  //     SWAP(arr[i], arr[j]);
  //   }

  //   for (long int i = 0; i < size; i++)
  //   {
  //     cout << arr[i] << " ";
  //   }
  // }
}