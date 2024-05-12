#include<iostream>
using namespace std;
int main()
{
  int n,c=0;
  cin>>n;
  int a,b;
  for(int i=0;i<n;i++)
  {
      cin>>a>>b;
      if((b-a)>=2)
      {
          c++;
      }
  }
  cout<<c;

}
