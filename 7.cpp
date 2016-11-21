#include<iostream>
#include<cstdio>
using namespace std;

int main()
{   int taka;
    int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0,n100=0,n500=0,n1000=0;
    cin>>taka;
    if(taka>=1000)
    {
        n1000=taka/1000;
        taka=taka-n1000*1000;
    }
     if(taka>=500)
    {
        n500=taka/500;
        taka=taka-n500*500;
    }
    if(taka>=100)
    {
        n100=taka/100;
        taka=taka-n100*100;
    }
    if(taka>=50)
    {
        n50=taka/50;
        taka=taka-n50*50;
    }
    if(taka>=20)
    {
        n20=taka/20;
        taka=taka-n20*20;
    }
    if(taka>=10)
    {
        n10=taka/10;
        taka=taka-n10*10;
    }
    if(taka>=5)
    {
        n5=taka/5;
        taka=taka-n5*5;
    }
    if(taka>=2)
    {
        n2=taka/2;
        taka=taka-n2*2;
    }
    if(taka>=1)
    {

        n1=taka;
    }
    cout<<"1000="<<n1000<<endl;
    cout<<"500="<<n500<<endl;
    cout<<"100="<<n100<<endl;
    cout<<"50="<<n50<<endl;
    cout<<"20="<<n20<<endl;
    cout<<"10="<<n10<<endl;
    cout<<"5="<<n5<<endl;
    cout<<"2="<<n2<<endl;
    cout<<"1="<<n1<<endl;


    return 0;
}
