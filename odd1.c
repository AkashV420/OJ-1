#include<stdio.h>
int main(void)
{ int i,N,a=0,c;
        scanf("%d",&N);

        for(i=0;i<N;++i)
        { scanf("%d",&c);
          a=a^c;
        }
        if(a > 0)
        printf("%d\n",a);
        else if(a == 0)
	printf("-1\n");

        return 0;
}

                                                                         
