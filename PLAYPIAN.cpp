#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
  int t,i;
    cin>>t;
  while(t--)
   {
	  int flag=0;
	 string s;
	  cin>>s;
	 int len=s.size();
	 if(len==2)
	  {
	 if((s[0]=='A' && s[1]=='B')||(s[0]=='B'&&s[1]=='A'))
	     cout<<"yes"<<endl;
	 else
	    cout<<"no"<<endl;
	  }
	 else if(len>2)
	 {
	 if((s[0]=='A' && s[1]=='B')||(s[0]=='B'&&s[1]=='A'))
	  {
		for(i=2;i<len-1;i=i+2)
		 {
		   if(!((s[i]=='A'&& s[i+1]=='B')||(s[i+1]=='A'&&s[i]=='B')))
		       
		       {
				   flag=1;
				   break;
			   } 
		 } 
		if(flag==0)
		  cout<<"yes"<<endl;
		if(flag==1)
		  cout<<"no"<<endl;
		 
	  }
	 else
	   cout<<"no"<<endl;   
     }	
}
}
