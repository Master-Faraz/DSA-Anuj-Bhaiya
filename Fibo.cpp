#include<iostream>
using namespace std;

void fibo(int n)
{
    long long int a=0,b=1;
    if(n==a)
        cout<<a<<endl;
    if(n==b)
    {
        cout<<a<<" ";
        cout<<b<<endl;

    }    
    else
    {

        cout<<a<<" ";
        cout<<b<<" ";
        while (n>2)
        {
            long long int c = a+b;
            a=b,b=c;
            cout<<c<<" ";
            n--;
        }
        cout<<endl;
        

    }

}

int main()
{

    fibo(55);


    return 0;
}