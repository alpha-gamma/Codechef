#include<stdio.h>
#include<string.h>


int main(void)
{
	char enc[110],dec[110];
	int i,j;
	gets(enc);
	// printf("%s",enc);
	for(i=0,j=0;i<strlen(enc);i++)
	{
		printf("%c",enc[i]);
		if(enc[i]=='a' || enc[i]=='e' || enc[i]=='i' || enc[i]=='o' || enc[i]=='u')
			i+=2;
		dec[j] = enc[i];
	}
	
	for(i=0;i<j;i++)
		printf("%c",dec[i]);
	

return 0;
}