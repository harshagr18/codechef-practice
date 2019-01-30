#include<bits/stdc++.h>
# define ll long long
using namespace std;
int main()
{
	ll int N, Q; 
	cin>>N;
	cin>>Q;
	ll int brr[Q];
	ll int arr[N];
	ll int small = INT_MAX;
	ll int  big = -1;
	for(int i = 0; i<N; i++)
		{
			cin>>arr[i];
			if(small>arr[i])
				small = arr[i];
			if(big<arr[i])
				big = arr[i];
		}
	for(int i = 0; i<Q; i++)
		{
			cin>>brr[i];
		}
	for(int i = 0 ; i<Q; i++)
	{
		if((brr[i]>=small)&&(brr[i]<=big))
			{
				cout<<"Yes"<<endl;
				
			}
		else
			cout<<"No"<<endl;
	}
	
	return 0;






}