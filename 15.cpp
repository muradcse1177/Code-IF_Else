#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c;
    while (1)
    {
        cin>>a>>b>>c;
        if(a+b>c || a+c>b ||  b+c>a)
        {
            cout<<"triangle is valid";
        }
        else
            cout<<"triangle is not valid";


    }
    return 0;
}


