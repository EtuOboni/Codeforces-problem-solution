#include<iostream>
using namespace std;
int main()
{
  int n,x;
  cin>>n;
  int count=0;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      if(x==1)
      {
          count++;
      }

  }
  if(count>=1)
  {

  cout<<"HARD";
  }
  else
  {
      cout<<"EASY";
  }

}
