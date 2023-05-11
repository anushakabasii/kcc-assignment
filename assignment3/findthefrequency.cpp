int findFrequency(vector<int> v, int x)
{
    
    int s=0,i;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            s=s+1;
        }
    }
    return s;
}
