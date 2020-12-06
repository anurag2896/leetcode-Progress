class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector <int>> res;
        helper(nums, res, 0, nums.size());
        return res;
    }
    
    void helper(vector<int> nums, vector<vector<int>> &res, int start, int len) {
        if(start==len-1)
            res.push_back(nums);
        for(int i=start; i<len; i++) {
            swap(nums[start], nums[i]);
            helper(nums, res, start+1, len);
            swap(nums[start], nums[i]);
        }
    }
};
