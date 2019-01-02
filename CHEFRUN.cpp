#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	float x1,x2,x3,v1,v2,t1,t2;
	cin>>x;
	while(x--)
	{
		cin>>x1>>x2>>x3>>v1>>v2;
		t1=abs((x1-x3)/v1);
		t2=abs((x2-x3)/v2);
		if(t1>t2)
		{
			cout<<"Kefa\n";
		}		
		if(t1<t2)
		{
			cout<<"Chef\n";
		}		
		if(t1==t2)
		{
			cout<<"Draw\n";
		}		
	}
return 0;
}