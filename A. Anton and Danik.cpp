#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string a;
    int c1=0,c2=0;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++)
    {

        if(a[i]=='A')
        {
            c1++;
        }
        else if(a[i]=='D')
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        cout<<"Anton";
    }
    else if(c1==c2)
    {
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }
}
