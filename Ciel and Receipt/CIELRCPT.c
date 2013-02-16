#include<stdio.h>

int main(void)
{
	int T,item;
	long int p;
	
	scanf("%d",&T);
	while(T--)
	{
		item=0;
		scanf("%ld",&p);
		if(p>2048)
		{
			item+=p/2048;
			p=p%2048;
		}
		while(p)
		{
			if(p%2)
				item++;
			p=p/2;
		}
	printf("%d\n",item);
	}		

return 0;
}
