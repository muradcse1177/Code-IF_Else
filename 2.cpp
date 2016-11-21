#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is bigger than others"<<endl;
    }

    if(b>a && b>c)
    {
        cout<<"b is bigger than others"<<endl;
    }
    else
    cout<<"c is bigger than others"<<endl;
    return 0;
}
