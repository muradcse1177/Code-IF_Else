

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{ int a;
   cin>>a;
   if(a%5==0)
   {
       cout<<"divisible by 5"<<endl;
   }
    else if(a%11==0)
   {
       cout<<"divisible by 11"<<endl;
   }
   else
   cout<<" divisible by others";
   return 0;
}
