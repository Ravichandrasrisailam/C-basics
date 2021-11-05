#include<stdio.h>
#include<limits.h>
void main()
{
 long long  int
 n= -656625839193;
 printf ("%lld",n);
 printf("short:\nsigned: %hd to %hd \n", SHRT_MIN,SHRT_MAX );
 printf("int:\nunsigned: %d to %d \n ", 0,USHRT_MAX);
 printf("long long int:\n signed %lld to %lld",LLONG_MIN,LLONG_MAX);
 printf("long long int:\n unsigned %lld to %lld",0,ULLONG_MAX);
}
