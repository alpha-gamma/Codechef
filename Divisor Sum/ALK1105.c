#include<stdio.h>

int main(void)
{
	unsigned long num,i,j,gn=0;
	scanf("%lu",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				gn += j;
		}
	}
	printf("%lu",gn);
	
return 0;
}