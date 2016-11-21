#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char a;
    cin>>a;
    if(a>='a' && a<='z' || a>='A' && a<='Z' )
    {
        cout<<"alphabet"<<endl;
    }

    else if(a>='0' && a<='9' )
    {
        cout<<"digit"<<endl;
    }

    else
    cout<<"special character";
   return 0;
}

