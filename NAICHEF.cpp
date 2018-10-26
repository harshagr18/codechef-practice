#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,j,a,b,faces[10000];
	float face,prob,cta,ctb;
	cin>>x;
	for(int i=0;i<x;i++)
	{	cta=0;
		ctb=0;
		cin>>face>>a>>b;
		for(j=0;j<face;j++)
		{
			cin>>faces[j];
			if(faces[j]==a)
				{cta++;}
			if(faces[j]==b)
				{ctb++;}
		}
	prob=(cta/face)*(ctb/face);
	cout<<setprecision(10)<<fixed;
	cout<<prob<<"\n";
	}
}