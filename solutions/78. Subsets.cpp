class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(nums, ans, 0, temp);
        return ans;
    }
    
    void helper(vector<int> nums, vector<vector<int>> &ans, int counter, vector<int> temp)  {
        int next;
        if(counter==nums.size()) {
            ans.push_back(temp);
            return;
        }
            
        helper(nums, ans, counter+1, temp);
        next=nums[counter];
        temp.push_back(next);
        helper(nums, ans, counter+1, temp);
    }
};
