#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;

    for(int i=0;i<a*b;i++)
    {
        a=a*3;
        b=b*2;
        if(a<=b)
        {
            count++;
        }
        else{
                count++;
            break;
        }

    }
    cout<<count<<endl;


}
