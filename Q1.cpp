#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,r,l,i,sum,repeat;
	int length[50];
	cin>>x;
	while(x--)
	{
		sum=0;repeat=0;
		cin>>n>>r>>l;
		for(i=0;i<n-1;i++)
		{
			cin>>length[i];
			sum+=length[i];
			if(length[i]>150)
			{
				repeat+=1;
			}
		}
		if(sum>l||repeat>r)
		{
			cout<<"insufficient"<<"\n";
		}		
		else
		{
			cout<<"sufficient"<<"\n";
		}
	}
	return 0;
}