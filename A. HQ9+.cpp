#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            count++;
            break;
        }
    }
    if(count==1)
    {
        cout<<"YES";
    }
    else
        {
        cout<<"NO";
        }

}
