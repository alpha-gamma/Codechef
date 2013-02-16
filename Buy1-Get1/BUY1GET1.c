#include<stdio.h>
#include<string.h>


int main(void)
{
	int T,i,len,x,sum;
	int q[60];
	char str[250];
	
	scanf("%d",&T);
	while(T--)
	{
		sum=0;
		for(i=0;i<60;i++)
			q[i] = 0;

		scanf("%s",&str);
		len = strlen(str);
		for(i=0;i<len;i++)
		{
			x=(int)str[i]-65;
			q[x]++;
		}
		
		for(i=0;i<60;i++)
			sum += (q[i]/2) + (q[i]%2);
		printf("%d\n",sum);

		
	}

return 0;
}