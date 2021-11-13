#include<stdio.h>
#include<time.h>
void main()
{
    int p,t,si;
    float r;
    printf("enter principle amount: ");
    scanf("%d",&p);
    printf("enter time: ");
    scanf("%d",&t);
    printf("enter rate of interest: ");
    scanf("%f",&r);
	si=(p*t*r/100);
    printf("the simple interest %d", si);
}
