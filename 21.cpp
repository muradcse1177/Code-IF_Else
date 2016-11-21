
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    while(1)
    {
        int unit;
        float taka,total,s_charge;
        cin>>unit;
        if(unit<=50)
        {
            taka=unit*.5;
        }
        else if(unit<=150)
        {
            taka=25+(unit-50)*.75;
        }
        else if(unit<=250)
        {
            taka=100+(unit-150)*1.20;
        }
        else
        {
            taka=220+(unit-250)*1.50;
        }

        s_charge=taka*.2;
        total=taka+s_charge;
        cout<<"total taka:"<<total<<endl;

    }
    return 0;

}


