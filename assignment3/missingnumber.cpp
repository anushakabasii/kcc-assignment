class Solution{
  public:
    int missingNumber(vector<int>& array, int n)
    {
      int i=0,ans;
      int flag=0;
      sort(array.begin(),array.end());
      for (i=0;i<n;i++)
      {
          if (array[i]==i+1){
              continue;
          }
          else{
              ans=i+1;
              break;
          }
      }
      return ans;
      }
};
