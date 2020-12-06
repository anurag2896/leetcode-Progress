class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
       // vector<vector <int>> res;
        vector<vector <int>> ans;
        vector<int> elements;
        // helper(nums, res, 0, nums.size());
        find(nums, elements, ans);
        return ans;
    }
    
    // void helper(vector<int> nums, vector<vector<int>> &res, int start, int len) {
    //     if(start==len-1)
    //         res.push_back(nums);
    //     for(int i=start; i<len; i++) {
    //         swap(nums[start], nums[i]);
    //         helper(nums, res, start+1, len);
    //         swap(nums[start], nums[i]);
    //     }
    // }
    
    void find(vector<int>& nums, vector<int>& elements, vector<vector<int>>& ans) {
        if(nums.empty()) {
            ans.push_back(elements);
            return ;
        }
        for(int i = 0; i < nums.size(); i++) {
            elements.push_back(nums[i]);
            vector<int> temp(nums.begin(), nums.end());
            temp.erase(temp.begin() + i);
            find(temp, elements, ans);
            elements.pop_back();
        }
    }
};
