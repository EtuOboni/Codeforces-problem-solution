#include<iostream>
#include<string>
using namespace std;
int main()
{

int x=0,count=0,temp;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int i=0;i<n;i++)
{
    if(a[i]<a[i+1])
    {
        swap(a[i],a[i+1]);
        count++;
    }

}

cout<<count;

}
