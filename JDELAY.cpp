#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,n,result,a,b,i;
cin>>x;
while(x--)
{
	result=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(b-a>5)
		{
			result++;
		}
	}
	cout<<result<<"\n";
}
return 0;
}