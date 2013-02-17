#include<stdio.h>
#include<string.h>

long int ROW[314160];
long int COL[314160];

int main(void)
{
	long int N,Q,n,i,j;
	int x,max=0;
	char op[10];
	scanf("%ld %ld",&N,&Q);
	for(i=0;i<N;i++)
		ROW[i]=COL[i]=0;
		
	while(Q--)
	{
		scanf("%s %ld %d",&op,&n,&x);
		if(!strcmp(op,"RowAdd"))
		{	for(i=0;i<N;i++)
			{	ROW[i] += x;
				if(ROW[i]>max)
					max = ROW[i];
			}
		}
		if(!strcmp(op,"ColAdd"))
		{	for(i=0;i<N;i++)
			{	COL[i] += x;
				if(COL[i]>max)
					max = COL[i];
			}
		}
	}
	printf("%d",max);
		
	

return 0;
}