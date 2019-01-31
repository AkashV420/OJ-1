#include<stdio.h>
int main()
{  int i,j,n;
  scanf("%d",&n);
  for(i=1;i<=n;++i)	
  { printf(" ");
	  for(j=1;j<i;++j)
	      printf(" ");//prints spaces
	 
       for(j=1;j<=n-i+1;++j)
	  { if((i==1) || (i==(n+1)/2) )
          printf("o ");
	  else if(j==1||j==n-i+1 || j==(n+2)/2 || j==((n-i+1)-(n-1)/2))
	   printf("o ");
		  else
           printf("  ");
	  }
         printf("\n");
      }
    return 0;
}
