class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int newsize1,newsize2;
        newsize1=nums1.size()-m;
        newsize2=nums2.size()-n;
        for(int a=0;a<newsize1;a++){
            nums1.pop_back();
        }
        for(int b=0;b<newsize2;b++){
            nums2.pop_back();
        }
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<nums1.size();i++){
            cout<<nums1[i];
        }
        
    }
};
