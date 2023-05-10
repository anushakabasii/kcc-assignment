#include <bits/stdc++.h>
using namespace std;

int main() {
    int size,i,j,s=0;
    cin>>size;
    vector<int> vec(size);
    for(i=0;i<size;i++)
    {
        cin>>vec[i];
        s=0;
        vector<int> ques(vec[i]);
        for(int j=0;j<vec[i];j++)
        {
            cin>>ques[j];
        }
        for(j=0;j<vec[i];j++)
        {
            if(ques[j]>=1000)
            s+=1;
            
        }
    cout<<s<<endl;
    }
    return 0;
}

