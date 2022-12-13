#include<iostream>
using namespace std;

int main()
{
    int i,j,r=5;
    for(i=1;i<=5;i++)
    {
        for(int s=1;s<=r-i;s++) cout<<" ";
        for(j=1;j<=i;j+=1) cout<<"*";
        for(int k=2;k<=i;k++) cout<<"*";
        cout<<endl;
    }

}