#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define Mod 1000000007
#define ll long long


int main()
{
    int t,n,c,l,x;
    cin>>t;
    while(t--)
    {
        vector <pair<ll,ll>> v1,v2,v3;
        cin>>n;
        while(n--)
        {
            cin>>c>>l>>x;
            if(l==1)
                v1.push_back(make_pair(100-x, c));
            else if(l==2)
                v2.push_back(make_pair(100-x, c));
            else
                v3.push_back(make_pair(100-x, c));
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        cout<<100-v1[0].first<<" "<<v1[0].second<<endl;
        cout<<100-v2[0].first<<" "<<v2[0].second<<endl;
        cout<<100-v3[0].first<<" "<<v3[0].second<<endl;
    }
}
