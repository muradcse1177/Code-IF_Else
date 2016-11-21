
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int buy,sell,pro,loss;
    while(1)
    {
       cin>>buy>>sell;
       if(sell-buy>0)
       {
           pro=sell-buy;
           cout<<"profit="<<pro<<endl;
       }
       else
       {
           loss= buy-sell;
           cout<<"loss="<<loss<<endl;
       }

        return 0;
    }

}

