#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i,j,row=5;
    for(i=1;i<=row;i++)
    {
        for(int s=1;s<=row-i;s++) printf(" ");
        for(j=1;j<=i;j++)  printf("*");
        cout<< endl;
    }
}