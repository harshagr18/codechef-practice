#include<iostream>
using namespace std;
int main()
{ int t,n,k;
  cin>>t;
  for(int i=0;i<t;i++)
  { cin>>n;
    char s[n],m;
    for(int j=0;j<n;j++)
     cin>>s[j];
      if(n%2==0)
      k=n;
      else
      k=n-1;
      for(int i=0;i<k;i+=2)
      { m=s[i];
        s[i]=s[i+1];
        s[i+1]=m;
        s[i]=219-s[i];
        s[i+1]=219-s[i+1];
      }
      if(n%2==1)
      s[n-1]=219-s[n-1];
      for(int l=0;l<n;l++)
      cout<<s[l];
      cout<<'\n';
  }
  return 0;
}
