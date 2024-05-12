#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
    int a[2];
    for(int i=0;i<2;i++)
    {
        cin>>a[i];
    }
    if(a[0]==1||a[0]==2)
    {
        cout<<"1"<<endl;
    }
    else
    {
        float var = ((1.0*a[0]-2)/a[1]);
        float res;
        res = ceil(var)+1;
        cout<<res<<endl;
    }
}
}
