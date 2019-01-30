#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,i,j,count,arr[100000];
	cin>>x;
	while(x--)
	{
		cin>>n;
		count=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		j=0;
		for(j=0;j<n;j++)
		{
		for(i=j+1;i<=n;i++)
		{
			if(arr[0]==arr[i])
			{
				count++;
				arr[i]=arr[i]+arr[i+1];
			}
		}
	}
	cout<<count<<"\n";
	}
	
	return 0;
}