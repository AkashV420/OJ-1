#include<stdio.h>
#include<math.h>
int main(void)
{ int N,x,y,z,n=0;
	scanf("%d",&N);
	int a = 1,b=N,c=N;

	for(;N>0;N/=2)
	{ if((N%2) == 1)
		n++;
	}
	if(n == 2)
	{ printf("Yes\n");

		for(;b>0;b/=2)
		{ if(b%2 == 1)
			printf("%d ",a);

			a *=2;
		}
		printf("\n");
	}
	else if((n == 1) && c > 2)
	{ printf("yes\n");
		printf("%d %d",c/2,c/2);
	}
	else
		printf("No\n");
	return 0;
}











