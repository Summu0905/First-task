#include<bits/stdc++.h>

using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    
    return fib(n-1)+fib(n-2);
}


int main()
{
    int num;
    cin>>num;

    cout<<"The fibonacci Series will be of the number";
    int i=0;
    while(i<num)
    {
        cout<<" "<<fib(i);
        i++;
    }


    return 0;
}