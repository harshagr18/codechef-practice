#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,ans,d,m,y;
	cin>>x;
	while(x--)
	{
		cin>>n;
		ans= n ^ 23061912;
		y=ans%10000;
		ans=ans/10000;
		m=ans%100;
		ans=ans/100;
		d=ans;
		cout<<d<<" "<<m<<" "<<y<<"\n";
    }
return 0;
}
