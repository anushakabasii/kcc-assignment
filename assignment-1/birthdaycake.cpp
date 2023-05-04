#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max;
    max=a[0];
    for (i=0;i<n;i++)
    {
       if(a[i]>max)
       {
           max=a[i];
       }
    }
    int s=0;
    for (i=0;i<n;i++)
    {
        if(max==a[i])
        {
            s=s+1;
        }
    }
    cout<<s;
    return 0;
    
}
