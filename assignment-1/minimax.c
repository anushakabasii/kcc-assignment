#include<stdio.h>
void swap (int*,int*);
int main()
{
    int i,j;
    int a[5];
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (a[j]>a[i])
            {
                swap (&a[j],&a[i]);
            }
        }
    }
    long int min=0, max=0;
    for (i=0;i<5;i++)
    {
        if(i==0||i<=3)
        {min=min+a[i];
        }
    }
    for (i=0;i<5;i++)
    {
        if(i!=0&&i<=4)
        {max=max+a[i];
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}

void swap (int*m,int*n)
{
    int t;
    t=*m;
    *m=*n;
    *n=t;
}
