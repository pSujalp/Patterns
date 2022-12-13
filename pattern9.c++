#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",j+64);
        }
        cout<<endl;
    }
}