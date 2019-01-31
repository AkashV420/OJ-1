#include<stdio.h>
int main(void)
{ int x,y,j,even=0,odd=0,i,r,ad=0;
             scanf("%d%d",&x,&y);
for(i=x;i<=y;++i)
	       {
		j=i; 
		while(j>0)
		{	r=j%10;
			if(r%2 == 0)
			++even;
			else
			++odd;
			j=j/10;
   	 	}
		if((even-odd)*(even-odd) == 1 || even-odd == 0)
		 ++ad;

		even=0;
		odd=0;
	         }
	printf("%d",ad);

	return 0;
}













