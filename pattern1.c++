#include<iostream>
using namespace std;

int main()
{
    int a,j,i;
    scanf("%d %d",&i,&j);
    int array[i][j];
    for(int k=1;k<=i;k++)
    {
       for(int l=1;l<=j;l++)
       {
        cout<< l<<"  ";

       }
        cout<<endl;
    }
}