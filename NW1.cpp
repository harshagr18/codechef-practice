#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{    string s;
		int n,z=0;
		cin>>n>>s;
		int a[7]={0};
		if(s=="mon")
		{
			z=0;
		}
		else if(s=="tues")
		{
			z=1;
		}
		else if(s=="wed")
		{
			z=2;
		}
		else if(s=="thurs")
		{
			z=3;
		}
		else if(s=="fri")
		{
			z=4;
		}
		else if(s=="sat")
		{
			z=5;
		}
		else 
		{
			z=6;
		}
		int b=n/7;
		for(int i=0;i<7;i++)
		{
			a[i]=b;
		}
		b=n%7;
		while(b--)
		{
			a[z]++;
			z++;
			z%=7;
		}
		for(int i=0;i<7;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}