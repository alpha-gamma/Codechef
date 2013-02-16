#include<stdio.h>

int main(void)
{
	int A,B;
	scanf("%d %d",&A,&B);
	if(((A-B)%10)==9)
		printf("%d",A-B-1);
	else
		printf("%d",A-B+1);

return 0;
}