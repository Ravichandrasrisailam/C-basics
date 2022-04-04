#include<stdio.h>
int main()
{
	int n,r,count=0,ecount=0,ocount=0;
	scanf("%d",&n);
	while (n>0)
	
	{   r=n%10;
		count++;
		if(n%2==0)
			ecount++;
		else
			ocount++;
		n=n/10;
	}
	if(ecount==count)
		printf("even");
	else  if(ocount==count)
		printf("odd");
	else
		printf("mixed");
return 0;
}
