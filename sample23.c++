#include<iostream>
using namespace std;

int main()
{
    int i,j,n=6,s;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++) cout<<" ";
        for(j=1;j<=i;j++) cout<<"*";
        for(int k=1;k<=j;k++) cout<<"*";
        cout<<endl;
    }

}