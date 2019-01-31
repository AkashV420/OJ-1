#include<stdio.h>
#include<time.h>
int main(void)
{
	
	long long int x,y,m;
	int T;
	scanf("%d",&T);
	long long int ans[T];
	for (int i = 0; i < T; ++i)//to store value in the array
	{
		long long int rem ,temp2;
		scanf("%lld %lld %lld",&x,&y,&m);
		rem = x;
		for (long long int j = 1; j <= y; ++j)
		{	
			rem = rem % m;
			temp2 = rem;
			long long int k = j;
			k--;
			for (;k;k/=2)
			{
				if(k%2 == 1)
					rem = rem * temp2;
				temp2 = temp2 * temp2;
				rem = rem % m;
				temp2 = temp2 % m;	
			}
			rem = rem % m;
		}
		ans[i]= rem;
	}
	for (int i = 0; i < T; ++i)
	{
        printf("%lld\n",ans[i]);
	}
	return 0;

}
