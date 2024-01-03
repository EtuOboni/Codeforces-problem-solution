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
        int result = ((23-a[0])*60+(60-a[1]));
        cout<<result<<endl;
    }
}
