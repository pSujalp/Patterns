#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(int s=1;s<=5-i;s++) cout<<" ";
        for(j=1;j<i;j++) cout<<"*";
        for(int k=1;k<=i;k++) cout<<"*";

        cout<<"\n";
    }
}