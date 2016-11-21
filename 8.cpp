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
    else
    cout<<"not alphabet";
   return 0;
}
