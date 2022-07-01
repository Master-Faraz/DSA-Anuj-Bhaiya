#include<iostream>
#include<algorithm>
#include<array>

using namespace std;
int main()
{
  array<int , 5> arr = {1,2,500,600,11};
  arr[1] = 5;


  sort(arr.begin() , arr.end());

  for(auto i:arr)
    cout<<i<<endl;

  sort(arr.begin() , arr.end());

  for(auto i:arr)
    cout<<i<<endl;
  return 0;
}