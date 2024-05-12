#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,count=0;
    cin>>n;
    int array[200];
    cin>>p;

    for(int i=0;i<p;i++)
        cin>>array[i];

    cin>>q;
    for(int i=p;i<p+q;i++)
        cin>>array[i];

    sort(array, array+(p+q));

    for(int i=0;i<p+q;i++)
    {
        if(array[i]!=array[i+1])
            count++;
    }

    if(count==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}
