#include <bits/stdc++.h>
using namespace std;

int main() 

{
    int number,size,s=0,i=0,j=0;
    cin>>number;
    for(i=0;i<number;i++)
    {
        cin>>size;
        vector<int> vec(size);
        for(j=0;j<size;j++)
        {   
            cin>>vec[j];
            if(vec[j]>1000)
            { 
                s=s+1;
            }
        }
         
        
        cout<<s<<endl;
    }
    
    
    return 0;
}
