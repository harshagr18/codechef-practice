#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,limit,credit,i;
	cin>>x;
	char str[200];
	while(x--)
	{   credit=0;
		cin>>str;
		cin>>limit;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]=='C')
			{
				credit+=2000;
			}
			if(str[i]=='F')
			{
				credit-=200;
			}
			if(str[i]=='R')
			{
				credit-=500;
			}
		}
		if(credit>limit)
			{
				cout<<"yes\n";
			}
		else
		{
			cout<<"no\n";
		}
	}	
	return 0;
}