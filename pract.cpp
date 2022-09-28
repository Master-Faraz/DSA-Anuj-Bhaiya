#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;

  char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

  for (int i = 0; i < s.length(); i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (s[i] == arr[j])
      {
        cout << "Not Consonant" << endl;
        return 0;
      }
    }
  }
  cout << "Consonant" << endl;

  return 0;
}
