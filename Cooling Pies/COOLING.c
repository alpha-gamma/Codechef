#include<stdio.h>
#include<stdlib.h>
#define S scanf
#define P printf
#define Q qsort
#define FOR(end) for(i=0;i<end;i++)

inline int comp(const void *a, const void *b)
{	return ( *(int*)a - *(int*)b);	}

int main(void)
{	int i,j,T,N,count,pie[105],weight[105];
	
	S("%d",&T);
	while(T--)
	{	count=0;
		j=0;
		S("%d",&N);
		FOR(N)	S("%d",&pie[i]);
		FOR(N)	S("%d",&weight[i]);
		Q(pie,N,sizeof(int),comp);
		Q(weight,N,sizeof(int),comp);	
		FOR(N)
		{	if(pie[j]<=weight[i])
			{	count++;	j++;	}
		}	
		printf("%d\n",count);
	}
return 0;
}