#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
	cin>>t;
	while(t--)
	{
		long long n,i,count,a;
		cin>>n;
		  for(i=n+1;i<=n+10000000;i++)
		   	{
		        count=0;
		         a=i;
		   	 
		      while(a!=0)
		      {
			if(a%10==3)
			count++;
		      a=a/10;
		      }  	  
		       if(count>=3)
			     {
			     	break;
			     }     	
			}
			cout<<i<<endl;
		
      }

}