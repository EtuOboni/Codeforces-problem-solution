#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[3];
for(int i=0;i<3;i++)
{
    cin>>a[i];
}

int b[5];
b[0]=a[0]+a[1]*a[2];
b[1]=a[0]*(a[1]+a[2]);
b[2]=a[0]*a[1]*a[2];
b[3]=(a[0]+a[1])*a[2];
b[4]=a[0]+a[1]+a[2];
sort(b,b+5);

cout<<b[4];


}
