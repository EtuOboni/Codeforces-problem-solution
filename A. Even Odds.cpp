
#include<iostream>
using namespace std;
int main()
{
    long long  n,a,s;
    cin>>n>>a;
    if(n%2==0)
    {
        s=n/2;
    }
    else
    {
        s=(n+1)/2;
    }

    if(a<=s)
    {
        cout<<(a*2)-1;
    }
    else
        {
          cout<<(a-s)*2;
        }
}
