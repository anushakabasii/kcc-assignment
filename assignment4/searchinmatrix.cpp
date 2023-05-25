class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int r=0,c=0,s=0;
        for (r=0;r<n;r++)
        {
            for (c=0;c<m;c++)
            {
                if(matrix[r][c]==x)
                {
                    s=s+1;
                }
            }
        }
        
        if(s==0)
        return 0;
        else
        return 1;
    }
};
