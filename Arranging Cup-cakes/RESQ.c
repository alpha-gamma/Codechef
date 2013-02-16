#include<stdio.h>
#include<math.h>

#define S scanf
#define P printf
#define FOR(start) for(i=start;i>=1;i--)

int main(void)
{
	int T,N,sq,i;
	S("%d",&T);
	while(T--)
	{
		S("%d",&N);
		sq = sqrt(N);
		FOR(sq)
		{	if(N%i==0)
			{	P("%d\n",(N/i)-i);	break;	}
		}
	}	
return 0;
}