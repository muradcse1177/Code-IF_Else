#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>7)
    {
        cout<< "please get below or equal 7"<<endl;
    }

    switch(a)
    {
    case 1:
        cout<<"Sunday";
        break;
    case 2:
        cout<<"Monday";
        break;
    case 3:
        cout<<"Tuesday";
        break;
    case 4:
        cout<<"Wednesday";
        break;
    case 5:
        cout<<"Thursday";
        break;
    case 6:
        cout<<"Friday";
        break;
    case 7:
        cout<<"Saturday";
        break;
    }
    return 0;
}
