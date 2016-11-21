
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    float gross, basic,hra,da;
    while(1)
    {
       cin>>basic;

       if(basic>=30000)
       {
           hra= basic*.3;
           da=basic*.95;
           gross=basic+hra+da;
           cout<<"gross:"<<gross<<endl;
       }
       else if(basic>=20000)
       {
           hra= basic*.25;
           da=basic*.90;
           gross=basic+hra+da;
           cout<<"gross:"<<gross<<endl;
       }
       else
       {
           hra= basic*.20;
           da=basic*.80;
           gross=basic+hra+da;
           cout<<"gross:"<<gross<<endl;
       }
    }
     return 0;
}
