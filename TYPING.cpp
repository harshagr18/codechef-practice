#include<bits/stdc++.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int sum,count=0,i,l,j,total=0,n;
        scanf("%d",&n);
        char str[n][21];
        for(j=0;j<n;j++)
        {
            scanf("%s",str[j]);
        }
        std::qsort(str, n, 21, (int (*)(const void *, const void *))strcmp);
        for(j=0;j<n;j++)
        {
            sum=2;
            l=strlen(str[j]);
            for(i=0;i<l-1;i++)
            {
                if(((str[j][i+1]=='d'||str[j][i+1]=='f')&&(str[j][i]=='j'||str[j][i]=='k'))||((str[j][i]=='d'||str[j][i]=='f')&&(str[j][i+1]=='j'||str[j][i+1]=='k')))
                sum+=2;
                else 
                sum+=4;
            }
            if(j>0&&(strcmp(str[j],str[j-1])==0))
            sum/=2;
            total+=sum;
        }
        printf("%d\n",total);
    }
    return 0;
}