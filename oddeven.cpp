#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,num,nos[100];
	cin>>x;
	while(x--)
	{
		cin>>num;
		for(int i=0;i<num;i++)
		{
			cin>>nos[i];
			if(nos[i]%2==0)
			{
				cout<<"E";
			}
			else
			{
				cout<<"O";
			}
		}
	}
return 0;
}
