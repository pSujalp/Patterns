#include<iostream>
using namespace std;

int main()
{
    char i,j;
    for(i='E';i>='A';i--)
    {
        for(j=i;j>='A';j--)
        {
            cout<<j<< " ";
        }
        cout<<endl;
    }
}