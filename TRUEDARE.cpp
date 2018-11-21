#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag1[100],flag2[100],finflag,x,j,k,tr,ts,dr,ds;
	int Tr[100],Ts[100],Ds[100],Dr[100];
	cin>>x;
	for(int h=0;h<x;h++)
	{
		for(j=0;j<100;j++)
			{flag1[j]=0;flag2[j]=0;}
		finflag=0;
		cin>>tr;
		for(j=0;j<tr;j++)
			{cout<<"enter tr";
				cin>>Tr[j];}
		cin>>dr;
		for(j=0;j<dr;j++)
			{cout<<"enter dr";
				cin>>Dr[j];}
		cin>>ts;
		for(j=0;j<ts;j++)
			{cout<<"enter ts";
				cin>>Ts[j];}
		cin>>ds;
		for(j=0;j<ds;j++)
			{cout<<"enter ds";
				cin>>Ds[j];}
		k=0;
		while(ts>0)
		{
			for(j=0;j<tr;j++)
			{
				if(Ts[k]==Tr[j])
					{flag1[k]=1;}
				k++;
			}	
			ts--;
		}
		while(ds>0)
		{
			for(j=0;j<dr;j++)
			{
				if(Ds[k]==Dr[j])
					{flag2[k]=1;}
				k++;
			}	
			ds--;
		}
    	for(j=0;j<100;j++)
    	{
    		if(flag1[j]==1||flag2[j]==1)
    		{
    			finflag=1;
    		}
    	}
	if(finflag==1)
		{cout<<"no\n";}
	else
		{cout<<"yes\n";}
	}
	return 0;
}