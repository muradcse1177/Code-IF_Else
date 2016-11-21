#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,det;
    int root1, root2,part1,part2;
    while(1)
    {
        cin>>a>>b>>c;
        det=b*b-4*a*c;
        if(det>0)
        {
            root1=(-b+ sqrt(det))/2*a;
            root2=(-b- sqrt(det))/2*a;
            cout<<root1<<"  "<<root2<<endl;
        }
        else if(det==0)
        {
            root1=root2= -b/2*a;
            cout<<root1;
        }
        else
        {
            part1=-b/2*a;
            part2=sqrt(-det)/2*a;
            cout<<part1<<"+"<<"i"<<part2<<"  ";
            cout<<part1<<"-"<<"i"<<part2;

        }

        return 0;
    }

}
