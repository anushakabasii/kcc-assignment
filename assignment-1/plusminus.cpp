#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int a[size];
    int i;
    for (i=0;i<size;i++)
    {
        cin>>a[i];
    }
    float  neg=0,pos=0,zero=0;
     for (i=0;i<size;i++)
    {
       if (a[i]>0)
       {
           pos=pos+1;
       }
       else if (a[i]<0)
       {
           neg = neg+1;
       }
       else {
           zero =zero+1;
       }
    }
    
   float rp,rn,rz;
   rp = pos/size;
   rn = neg/size;
   rz= zero/size;
   
   cout<<rp<<endl<<rn<<endl<<rz;

   // printf("%f\n%f\n%f",rp,rn,rz);
}
