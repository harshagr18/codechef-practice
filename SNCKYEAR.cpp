#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,year;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>year;
		if(year==2010||year==2015||year==2016||year==2017||year==2019)
			cout<<"HOSTED\n";
		else
			cout<<"NOT HOSTED\n";
	}
return 0;
}
