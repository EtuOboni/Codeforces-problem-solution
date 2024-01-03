#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
     int a[4];
     for(int i=0;i<4;i++)
     {
         cin>>a[i];

     }

         int x1=max(a[0],a[1]);
         int y2=max(a[2],a[3]);
         int m=min(x1,y2);
         int l=max(x1,y2);
         int y=0;
         for(int i=0;i<4;i++)
     {

         if(a[i]>m && a[i]!=l)
         {
             y=1;
             break;
         }
    }

          if(y==0)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;


}
}


