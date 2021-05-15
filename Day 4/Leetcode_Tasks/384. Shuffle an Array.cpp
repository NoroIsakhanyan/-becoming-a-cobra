class Solution {
    private:
        vector<int> original;
        vector<int> shufle;
        int size;
public:
    Solution(vector<int>& nums) {
        original = nums;
        shufle = nums;
        size = nums.size();
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for(int i = 0;i < size;++i){
           int rand = std::rand() % size;
            swap(shufle[0],shufle[rand]);
        }
        return shufle;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */