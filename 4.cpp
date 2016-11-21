#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a;
    while(cin >> a && a)
    {
        if(a%400==0 || a%4==0 && a%100!=0)
        {
            cout<<"leap year"<<endl;
        }
        else
        {
            cout<<" not leap year"<<endl;
        }

    }
    return 0;
}
