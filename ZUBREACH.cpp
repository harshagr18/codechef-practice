#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	int posx,posy,j,x,m,n,rx,ry,len;
 	char seq[10000];
 	cin>>x;
 	for(int i=0;i<x;i++)
 	{
 		posx=0;
 		posy=0;
 		cin>>m>>n>>rx>>ry;
 		cin>>len;
 		cin>>seq;
 		for(j=0;j<len;j++)
 			{
				if(seq[j]=='U')
				posy++;
				if(seq[j]=='D')
				posy--;
				if(seq[j]=='L')
					posx--;
 				if(seq[j]=='R')
		 		posx++;
			
 			}
 		cout<<"Case "<<i+1<<": ";
 		if(posx==rx&&posy==ry)
 			cout<<"REACHED\n";
 		else
 			if(posx>=m||posy>=n||posx<0||posy<0)
 				cout<<"DANGER\n";
 			else
 				cout<<"SOMEWHERE\n";
 	}
 	return 0;
 }