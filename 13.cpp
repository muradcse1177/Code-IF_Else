#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>12)
    {
        cout<< "please get below or equal 12"<<endl;
    }

    switch(a)
    {
    case 1:
        cout<<"january=31";
        break;
    case 2:
        cout<<"february=28/29";
        break;
    case 3:
        cout<<"march=31";
        break;
    case 4:
        cout<<"april=30";
        break;
    case 5:
        cout<<"may=31";
        break;
    case 6:
        cout<<"june=30";
        break;
    case 7:
        cout<<"july=31";
        break;
    case 8:
        cout<<"august=31";
        break;
    case 9:
        cout<<"september=30";
        break;
    case 10:
        cout<<"october=31";
        break;
    case 11:
        cout<<"november=30";
        break;
    case 12:
        cout<<"december=31";
        break;
    }
    return 0;
}

