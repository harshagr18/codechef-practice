#include <iostream>
using namespace std;
 
 
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int i,cou=0,couo=0,coub=0;
        string a,b;
        cin>>a>>b;
        for(i=0;i<3;i++)
        {
           if(a[i]=='b'||b[i]=='b'||a[i]=='o'||b[i]=='o')
            cou++;
           if(a[i]=='o' || b[i]=='o')
            couo++;
            if(a[i]=='b'|| b[i]=='b')
             coub++;
        }         
         if(coub>=2 && couo>=1 &&cou==3)
          cout<<"yes\n";
         else
          cout<<"no\n";
    }
    return 0;
}
