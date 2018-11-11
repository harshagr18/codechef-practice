#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define f(a,b,c) for(int a=b;a<c;a++)
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		t--;
		string s;
		cin>>s;
		vector<pair<int,int> >v;
		f(i,0,s.size())
		{
			if(s[i]!='.')
			v.push_back({s[i]-'0',i});
		}
		int flag=0;
		f(i,1,v.size())
		{
			if(v[i].second-v[i].first<=v[i-1].second+v[i-1].first){
			flag=1;
			break;
		    }
		}
		if(flag==1) cout<<"unsafe\n";
		else cout<<"safe\n";
	}	
}
