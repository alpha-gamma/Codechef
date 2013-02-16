#include<stdio.h>
#define S scanf
#define P printf
int main(void)
{
	int T,N,X,sum,val,min;
	S("%d",&T);
	while(T--)
	{
		S("%d %d",&N,&X);
		min=100;	sum=0;
		while(N--)
		{
			S("%d",&val);
			sum += val;
			if (val<min)
				min=val;
		}
		(sum%X<min)?P("%d\n",sum/X):P("-1\n");
	}
return 0;
}