#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
	int T,i,x,f;
	char ques[315];
	int count[200];
	scanf("%d",&T);
	gets(ques);
	while(T--)
	{
		int count[200]={0};
		f=0;
		gets(ques);
		for(i=0;i<strlen(ques);i++)
		{
			ques[i]=tolower(ques[i]);
			x=(int)ques[i];
			count[x]++;			
		}
		for(i=97;i<=122;i++)
		{
			if(!count[i])
			{
				printf("%c\n",i);
				f=1;
				break;
			}
		}
		if(!f)
			printf("~\n");
				
	}
return 0;
}