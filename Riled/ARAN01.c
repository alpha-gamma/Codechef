#include<stdio.h>
#include<string.h>

int main(void)
{
	int T,i,sum;
	char wrd[10000];
	scanf("%d",&T);
	while(T--)
	{
		sum=0;
		scanf("%s",&wrd);
		for(i=0;i<strlen(wrd);i++)
		{
			sum+=(int)wrd[i];
		}
		printf("%c\n",sum/strlen(wrd));
	}
	
return 0;
}