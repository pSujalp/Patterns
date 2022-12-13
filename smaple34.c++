#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j,k=1;
    for(i=1;i<=9;i++)
    {
        for(int s=1;s<=9-i;s++) cout<<" ";
        for(j=1;j<=i;j++)
        {
            
            printf("%d ",j);
        }
        cout<<endl;
    }
}