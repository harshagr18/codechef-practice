#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a[t];
	int o = t;
	for(int i=0;i<t;i++)
	{
		int x,k,sum = 0;
		
		cin>>x>>k;
		int m[x];
		for(int h=0;h<x;h++)
		{
			cin>>m[h];
		}
		int y = sum;
		{
			for(int g=0;g<=x-k;g++)
			{
				for(int j = g;j<g+k;j++)
				{
					sum = sum + m[j];
				}
				if(sum>=y)
				{
					y = sum;
				}
				sum = 0;
			}
		}
		a[i] = y;
	}
	for(int i=0;i<o;i++)
	{
		cout<<a[i]<<endl;
	}
}