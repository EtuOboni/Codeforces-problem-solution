#include <iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int x=0,y=0;
    cin>>a;
 for(int i=0;i<a.size();i++)
 {
     if(a[i]='1')
     {
         x++;
         y=0;
     }
     else
     {
         x++;
         y=0;
     }

 }

 if(x==7||y==7)
 {
     cout<<"YES"<<endl;
 }

 else
    {
    cout<<"NO"<<endl;
    }

}
