#include<stdio.h>
        char seen[98765433]={0};
        int q[1000000];
        int power(int b,int c)
        {
          int i,j;
          for(i=0,j=1;i<c;j*=b);
          return j;
        }
        int main()
        {
          int prime[18]={0};
          int head,tail,val,newVal,i,j,k,temp,t,b[3][3];
          prime[2]=prime[3]=prime[5]=prime[7]=prime[11]=prime[13]=prime[17]=1;
          seen[12345678]=1;
          q[0]=123456789;
          head=0;
          tail=1;
          while(head<tail)
            {
              val=q[head];
              for(i=2;i>=0;i--)
        	for(j=2;j>=0;j--)  {
        	    b[i][j]=val%10;val/=10;
        	  }
                    val=q[head];
              for(i=0;i<3;i++)
        	for(j=0;j<3;j++)
        	  {
        	    if(i+1<3 && prime[b[i][j]+b[i+1][j]])
        	      {
        		for(k=0,temp=1;k<5-i*3-j;k++,temp*=10);
        		newVal=val+(b[i+1][j]-b[i][j])*temp*1000+(b[i][j]-b[i+1][j])*temp;
        		if(!seen[newVal/10])
        		  {
        		    q[tail++]=newVal;
        		    seen[newVal/10]=seen[val/10]+1;
        		  }
        	      }
        	      if(j+1<3 && prime[b[i][j]+b[i][j+1]])
        	      {
        		for(k=0,temp=1;k<7-i*3-j;k++,temp*=10);
        		newVal=val+(b[i][j+1]-b[i][j])*temp*10+(b[i][j]-b[i][j+1])*temp;
        				if(!seen[newVal/10])
        		  {
        		    q[tail++]=newVal;
        		    seen[newVal/10]=seen[val/10]+1;
        		  }
        	      }
        	  }
              head++;
            }
          scanf("%d",&t);
          while(t--)
            {
              k=0;
              for(i=0;i<3;i++)
        	for(j=0;j<3;j++)
        	  {
        	    scanf("%d",&b[i][j]);
        	    k=k*10+b[i][j];
        	  }
              k/=10;
              if(seen[k])
        	printf("%d\n",seen[k]-1);
              else
        	printf("-1\n");
            }
 return 0;
          }

