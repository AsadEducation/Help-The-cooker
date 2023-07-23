#include<bits/stdc++.h>
using namespace std;

double input()
{
    int x=1,sum=0,mul=1;
    double res;
    for(int i=1;i<=5;i++)
    {
        cin>>x;
        if(x>13)
        {
            cout<<"Invalid input:"<<endl<<"Press 0 to terminate"<<endl;
        }
        if(x==0)break;
        sum+=x;
        mul*=x;
    }
    return sum+mul;
}
