class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
		vector<int> count(100001,0);
		for(auto& x:nums){
			count[x+50000]++;
		}
		for(int i=1;i<count.size();i++){
			count[i]+=count[i-1];
		}
		vector<int> out(n);
		for(auto& v:nums){
			out[count[v+50000]-1]=v;
			count[v+50000]--;
		}
		return out;
	}
};