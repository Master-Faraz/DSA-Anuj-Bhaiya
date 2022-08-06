#include<iostream>
using namespace std;

int palindrome(int n)
{
  int num = 0 , i=n;
  while(i!=0)
  {
    num *= 10;
    num += i%10;
    i /=10;
  }
  return num;
}

int main()
{
  cout<<palindrome(1992)<<endl;
  return 0;
}
