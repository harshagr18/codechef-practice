#include<iostream>
using namespace std;
int main()
{
	int t,p1,p2,k;
	cin>>t;
	while(t--)
	{
		cin>>p1>>p2>>k;
		if((p1+p2)/k%2==0)
		{
			cout<<"CHEF"<<endl;
		}
		else
		{
			cout<<"COOK"<<endl;
		}
	}
}