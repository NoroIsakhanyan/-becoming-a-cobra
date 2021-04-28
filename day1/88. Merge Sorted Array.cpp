class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
    
         std::vector<int> res(m+n);
    
         std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), res.begin());
    
        nums1 = res;
    }
};