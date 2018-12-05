#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans;
        ll temp;
        cin>>temp;
        ans=(temp+temp);
        for(ll i=2;i<=n;i++)
        {
            cin>>temp;
            ans^=(temp+temp);
        }
        cout<<ans<<endl;
    }
}
