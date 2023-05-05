#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[10];
    int i;
    for (i=0;i<10;i++)
    {
        cin>>a[i];
    }
    
    if(a[8]=='A'&& a[0]=='1'&&a[1]=='2')
    {
        a[0]='0';
        a[1]='0';
    }
    if (a[8]=='P')
    
    {
        a[0]=a[0]+1;
        a[1]=a[1]+2;
    }
    for (i=0;i<8;i++)
    {
        cout<<a[i];
    }
    return 0;
}
