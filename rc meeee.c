#include<Stdio.h>
int main()
{
	int x,y,z;
	printf("enter any three numbers \n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{ 
	 if(x>z)
	  printf("%d is bigger",x);
	  else
	  printf("%d is bigger",z);
}
else { 
if (y>z)
 printf("%d is bigger" ,y);
 else 
 printf("%d is bigger",z);
}
return 0;
}

