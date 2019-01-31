#include<stdio.h>
int main(void)
{  int i,N;
	scanf("%d",&N);
	for(i=1;i*(i+1)*(i+1)<=N;i++)
	{
		continue;
	}
	printf("%d",i-1);
	return 0;
}












