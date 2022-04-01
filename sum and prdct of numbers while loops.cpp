#include<stdio.h>
int main()
{
	int n,r,sum=0,product=1,subtract=0,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		product=product*r;
		subtract=product-sum;
		count++;
		n=n/10;
	}
	printf("number of digits= %d\n",count);
	printf("product of numben= %d\n",product);
	printf("subtract value= %d\n",subtract);
	
	return 0;
}
