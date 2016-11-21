
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==b && b==c)
        {
            cout<<"triangle is equlateral";
        }
        else if(a==b || b==c || c==a)
        {
            cout<<"triangle is isoselec";
        }

        else
            cout<<"triangle is scalan";

        return 0;
    }

}
