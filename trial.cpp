#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j;
    float arrr[14]={1,1.2,1.5,1.8,2.2,2.7,3.3,3.9,4.2,4.7,5.6,6.8,8.2,9.1};
    for(int i=0;i<9;i++)
    {
        for(j=0;j<14;j++)
        {
            cout<<arrr[j]*pow(10,i)<<",";
        }
    }
}