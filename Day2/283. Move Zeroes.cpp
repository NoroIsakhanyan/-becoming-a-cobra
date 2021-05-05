class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0, last = 0;
        for (int c = 0; c < nums.size();++c) {
            if (nums[c] != 0) {
                swap(nums[last], nums[c]);
                last++;
            }
        }
    }
};