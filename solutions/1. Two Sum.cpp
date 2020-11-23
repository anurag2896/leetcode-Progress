class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> m;
        int n=nums.size();
        vector<int> ans;
        
        for(auto i=0; i<n; i++){
            if(m.find(target - nums[i])!=m.end()) {
                ans.push_back((m.find(target - nums[i])->second));
                ans.push_back(i);
                return ans;
            }
            
            if(m.find(nums[i])==m.end()) {
                m[nums[i]] = i;
            }
        }
        
        return ans;
    }
};
