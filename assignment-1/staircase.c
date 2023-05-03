#include <stdio.h>
int main()
{int i,a,b;
int n;
scanf("%d",&n);
  for(i=1;i<=n;i++)
  { 
      for(a=n;a>i;a--)
      {printf(" ");
      }
      for(b=1;b<=i;b++)
      {printf("#");
      }
      printf("\n");
  }
   return 0;
}
