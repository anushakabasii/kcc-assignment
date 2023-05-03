#include <stdio.h>
int main()
{
    int a[3],b[3];
    int i;
    int al=0,bo=0;
    for (i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
for (i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for (i=0;i<3;i++)
    {
        if (a[i]>b[i])
        {
            al=al+1;
        }
        else if (a[i]==b[i])
        {
            al= al+0;
            bo=bo+0;
        }
        else 
        {
            bo=bo+1;
        }
    }
    
    printf("%d %d",al,bo);
    return 0;
}
