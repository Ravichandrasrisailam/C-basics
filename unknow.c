#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,fact=0,count=0,i,r,sum=0,temp;
    scanf("%d%d",&m,&n);
    if (m<=1)
        m=2;
    while(m<=n)
    {
        fact=0;
        for(i=2;i<=sqrt(m);i++)
        {
            if (m%i==0)
            {
                fact++;
                break;
            }
        }
        if(fact==0)
        {
        	sum=0;
        	temp=m;
			while(m>=0)
        	{
        	  r=m%10;
        	  sum=sum+r;
        	  m=m/10;
    
			}
			if (sum%2==0)
				printf("%d",m);
		}
        m++;
    }
printf("%d",count);
return 0;
}

//program to print all prime numbers whose sum of the digits is even in between m and n ?
