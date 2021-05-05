class Solution {
public:
    bool check(vector<int>& nums) {
        
        int c=0;
        
        if(nums.size()<=2)
            return true;
        
        for(int i=1; i<nums.size(); i++) 
            if(nums[i]<nums[i-1]){
                c++;
                if(c>1){
                    return false;
                }
                if(nums[i]>nums[0] || nums[nums.size()-1]>nums[0]){
                    return false;
                }
            }
        
        
        return true;
    }
};