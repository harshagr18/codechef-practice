#include<bits/stdc++.h>
using namespace std;
vector<int> vect;
int main()
{
	int x,i;
	int no,flag=2;;
	char test[10];
	char str[100];
	cin>>x;
	while(x--)
	{
	cin>>str;
	for(i=0;str[i]!="\0";i++)
	{
		if(str[i]==".")
		{
			flag=1;
		}
		if(str[i]==":")
		{
			flag=0;
		}

	}
	if(flag==1)
	{
    stringstream ss(str);
    int i;
    while (ss >> i)
    {
        vect.push_back(i);
        if (ss.peek() == '.')
            ss.ignore();
    }

    for (i=0; i< vect.size(); i++)
        cout << vect.at(i)<<endl;
	}
	}
	if(flag==0)
	{
    stringstream ss(str);
    int i;
    while (ss >> i)
    {
        vect.push_back(i);
        if (ss.peek() == '.')
            ss.ignore();
    }

    for (i=0; i< vect.size(); i++)
        cout << vect.at(i)<<endl;
	}
	}	
	return 0;
}