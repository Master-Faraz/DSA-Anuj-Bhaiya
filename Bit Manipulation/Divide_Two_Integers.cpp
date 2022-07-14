#include<bits/stdc++.h>
using namespace std;

int divide(int a , int b);

int main()
{
  cout<<divide(43,8)<<endl;

  return 0;
}

int divide(int a, int b)
{
  long long int dividend = labs(a) , divisor = labs(b);  //.    Absolute value of long type
  long long int temp = 0 , Quotient = 0;

  int sign =0;
  if((a>0 && b<0) || (a<0 && b>0)) sign = 1;

  for(int i=31;i>=0;i--)
  {
    if(temp + (divisor<<i) <=dividend)
    {
      temp += (divisor<<i);
      Quotient += 1ll << i;
    }
  }

  if(sign ==1 ) Quotient = -Quotient;
  if(Quotient>INT_MAX || Quotient < INT_MIN) return INT_MAX;
  return Quotient;
}

