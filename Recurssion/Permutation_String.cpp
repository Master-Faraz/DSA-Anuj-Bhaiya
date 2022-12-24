#include <iostream>
using namespace std;

string Swap(string &s, int a, int b)
{
  char temp = s[a];
  s[a] = s[b];
  s[b] = temp;

  return s;
}

bool palindrome_String(string s)
{
  int i = 0, j = s.length() - 1;

  while (j >= i)
  {
    if (s[i] != s[j])
      return false;

    i++;
    j--;
  }
  return true;
}

bool Palindrome_String_Reverse(string s)
{
  string temp = "";
  for (int i = s.length() - 1; i >= 0; i--)
  {
    temp += s[i];
  }
  cout << temp << endl;

  if (temp != s)
    return false;
  else
    return true;
}

bool palindrome_String_recurssion(string s, int l, int r)
{
  if (r <= l)
    return true;

  if (s[l] != s[r])
    return false;

  return (palindrome_String_recurssion(s, l + 1, r - 1));
}

void PowerSet(string s, int n, string curr)
{
  if (n == s.length())
  {
    cout << curr << endl;
    return;
  }

  // For taking next element
  PowerSet(s, n + 1, curr + s[n]);

  // For not taking

  PowerSet(s, n + 1, curr);
}

// void Permutation(string s, int l, int r)
// {
//   if (l == r)
//   {
//     cout << s << endl;
//     return;
//   }

//   for (int i = l; i <= r; i++)
//   {
//     s = Swap(s, l, r);

//     Permutation(s, l + 1, r);

//     s = Swap(s, l, i);
//   }
// }

void permutation(string s, int i)
{
  if (i >= s.length())
  {
    cout << s << endl;
    return;
  }

  for (int j = i; j < s.length(); j++)
  {
    Swap(s, i, j);
    permutation(s, i + 1);
    Swap(s, i, j);
  }
}

int main()
{
  string s = "abc";
  // string s = "naman";

  // Swap(s, 0, 4);
  // cout << s << endl;
  // cout << palindrome_String(s) << endl;
  // cout << Palindrome_String_Reverse(s) << endl;
  // cout << palindrome_String_recurssion(s, 0, s.length() - 1) << endl;
  // PowerSet(s , 0 , "");

  // cout<<Swap(s , 1 ,2);

  // Permutation(s, 0, s.length() - 1);

  permutation(s, 0);

  return 0;
}