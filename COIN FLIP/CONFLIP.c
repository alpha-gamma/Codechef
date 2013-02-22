#include<stdio.h>
int main(void)
{	int T,G,I,Q;
	long int N;
	scanf("%d",&T);
	while(T--)
	{	scanf("%d",&G);
		while(G--)
		{	scanf("%d %ld %d",&I,&N,&Q);
			(I==Q)?printf("%ld\n",N/2):printf("%ld\n",(N+1)/2);
		}
	}
return 0;
}