#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,a1,a2,l1,l2,i,v1,v2,dom[100000];
	cin>>x;
	while(x--)
	{
		cin>>n>>l1>>l2;
		v1=0;v2=0;
		for(i=0;i<n;i++)
		{
			cin>>dom[i];
		}
		for(i=0;i<n;i++)
		{
		a1=dom[i]-l1;
		a2=dom[i]-l2;
		if(a1<0)
		{
			a1=-a1;
		}
		if(a2<0)
		{
			a2=-a2;
		}
		if(a1>a2)
		{
			v2++;
		}
		if(a2>a1)
		{
			v1++;
		}
		if(a1==a2)
		{
			if(v2<v1)
				{v2++;}
			else
				{v1++;}
		}
	   }
	  if(v1>v2)
	  {
	  	cout<<"A\n";
	  }
	  if(v2>v1)
	  {
	  	cout<<"B\n";
	  }
	  if(v1==v2)
	  {
	  	cout<<"tie\n";
	  }
    }
return 0;
}