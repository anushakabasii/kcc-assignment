#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,size,rotation;
    cin>>size;
    cin>>rotation;
    int a[size];
    
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
    for(i=rotation;i<size;i++)
    {
        cout<<a[i]<<' ';
    }
     for(i=0;i<rotation;i++)
    {
        cout<<a[i]<<' ';
    }
   
    return 0;
}
