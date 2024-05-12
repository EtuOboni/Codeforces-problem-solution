#include<bits/stdc++.h>
using namespace std;
int main()
{
   int y;
    cin>>y;

    for(;;)
    {
        y++;
        ostringstream str1;
        str1<<y;
        string s = str1.str();

        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3])
        {
            break;
        }

    }

    cout<<y<<endl;
}
