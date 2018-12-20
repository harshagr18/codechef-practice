#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,x,money,ppl,people[200];
 cin>>x;
 while(x--)
 {
 	cin>>ppl>>money;
 	for(i=0;i<ppl;i++)
 	{
 		cin>>people[i];
 	}
 	for(i=0;i<ppl;i++)
 	{
 		if(people[i]<=money)
 			{money=money-people[i];
 				cout<<"1";}
 		else
 		{
 			cout<<"0";
 		}
 	}
 cout<<"\n";
 }
return 0;
}