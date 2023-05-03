#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    long int a[n];
    int i=0;
    long int s=0;
    for (i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    
    }
    for (i=0;i<n;i++)
    {
        s=s+a[i];
    
    }
    printf("%ld",s);
    return 0;
   }
